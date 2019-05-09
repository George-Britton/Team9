// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorWithNerve.h"


// Sets default values
ADoorWithNerve::ADoorWithNerve()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the basic objects for the actor's components
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->LeftDoor = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Left Door"));
	this->RightDoor = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Right Door"));
	this->Nerve = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Nerve"));
	this->DoorAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	this->DoorFlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Door Flipbook"));

	// Sets the attachments to the root
	LeftDoor->SetupAttachment(this->RootComponent);
	RightDoor->SetupAttachment(this->RootComponent);
	Nerve->SetupAttachment(this->RootComponent);
	DoorAudioComponent->SetupAttachment(this->RootComponent);
	DoorFlipbookComponent->SetupAttachment(this->RootComponent);

	// Sets the visibility to false for the doors, so that only the animation is visible
	LeftDoor->SetHiddenInGame(true);
	RightDoor->SetHiddenInGame(true);
}

// Called when the doors or nerve hits anything
void ADoorWithNerve::OnConstruction(const FTransform& Transform)
{
	// Makes sure it spawns at least one set of doors
	if (AmountOfDoors < 1){ AmountOfDoors = 1; }

	// Sets the ISM meshes
	if (this->Door) {
		this->LeftDoor->SetStaticMesh(Door);
		this->RightDoor->SetStaticMesh(Door);
	}
	if (this->NerveSprite) {
		this->Nerve->SetSprite(NerveSprite);
	}

	DoorFlipbookComponent->SetRelativeTransform(SpriteTransform);

	// Changes to be made when applied
	if (Apply) {
		// Clear all the ISMs
		LeftDoor->ClearInstances();
		RightDoor->ClearInstances();
		
		// Makes sure there's a customisable transform for each set of doors
		FTransform BaseTransform;
		if (AmountOfDoors < DoorTransforms.Num()){ for (int32 Popper = 0; Popper < (DoorTransforms.Num() - AmountOfDoors); Popper++) { DoorTransforms.Pop(); } }
		else if (AmountOfDoors > DoorTransforms.Num())
		{
			for (int32 Adder = DoorTransforms.Num(); Adder < AmountOfDoors; Adder++)
			{
				DoorTransforms.Add(BaseTransform);
			}
		}

		if (Door && NerveSprite)
		{
			// Places all the doors and nerve isms in the world
			for (int32 Placer = 0; Placer < AmountOfDoors; Placer++)
			{
				FTransform DoorPlacement = DoorTransforms[Placer];
				DoorPlacement.SetLocation(FVector((DoorTransforms[Placer].GetLocation().X - (Door->GetBounds().GetBox().GetSize().X / 2)), DoorTransforms[Placer].GetLocation().Y, DoorTransforms[Placer].GetLocation().Z));
				LeftDoor->AddInstance(DoorPlacement);
				DoorPlacement.SetLocation(FVector((DoorTransforms[Placer].GetLocation().X + (Door->GetBounds().GetBox().GetSize().X / 2)), DoorTransforms[Placer].GetLocation().Y, DoorTransforms[Placer].GetLocation().Z));
				RightDoor->AddInstance(DoorPlacement);
			}
		}else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please assign a static meshe to 'Door' and a sprite to 'Nerve Sprite'")); // Warning if the meshes don't exist
		}

		if (DoorSound) {
			// Sets the door sound that'll play
			DoorAudioComponent->SetSound(DoorSound);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please assign a sound")); // Warning if the sound doesn't exist
		}

		if (DoorFlipbook && this->DoorFlipbookComponent) {
			// Sets the flipbook that plays when the door opens and closes
			DoorFlipbookComponent->SetFlipbook(DoorFlipbook);
			DoorFlipbookComponent->Stop();
			DoorFlipbookComponent->SetLooping(false);
		}

		Apply = false;
	}

	// Allows the nerve to move without waiting for Apply Changes
	if (NervesLastTransform.GetLocation() != NerveLocation.GetLocation() || NervesLastTransform.GetRotation() != NerveLocation.GetRotation() || NervesLastTransform.GetScale3D() != NerveLocation.GetScale3D()) {
		Nerve->SetRelativeTransform(NerveLocation);
	}
}

// Called every frame
void ADoorWithNerve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DoorState == DoorStateEnum::DoorState_Closing)
	{
		// Closes the doors slightly ever tick
		for (int32 DoorIncrementer = 0; DoorIncrementer < AmountOfDoors; DoorIncrementer++)
		{
			FTransform DoorNewTransform;

			LeftDoor->GetInstanceTransform(DoorIncrementer, DoorNewTransform);
			DoorNewTransform.SetLocation(FVector(DoorNewTransform.GetLocation().X + 5, DoorNewTransform.GetLocation().Y, DoorNewTransform.GetLocation().Z));
			LeftDoor->UpdateInstanceTransform(DoorIncrementer, DoorNewTransform, false, true);

			RightDoor->GetInstanceTransform(DoorIncrementer, DoorNewTransform);
			DoorNewTransform.SetLocation(FVector(DoorNewTransform.GetLocation().X - 5, DoorNewTransform.GetLocation().Y, DoorNewTransform.GetLocation().Z));
			RightDoor->UpdateInstanceTransform(DoorIncrementer, DoorNewTransform, false, true);
		}

		// Regrows the nerve slightly every tick
		if (Retriggerable) {
			FTransform NerveNewTransform = Nerve->GetRelativeTransform();
			Nerve->SetRelativeScale3D(FVector(NerveNewTransform.GetScale3D().X, NerveNewTransform.GetScale3D().Y, NerveNewTransform.GetScale3D().Z + (NerveHeight / DoorWidth)));
			Nerve->SetRelativeLocation(FVector(NerveNewTransform.GetLocation().X, NerveNewTransform.GetLocation().Y, NerveNewTransform.GetLocation().Z + (NerveHeight / DoorWidth)));
		}

		DoorCounter--;

		// Changes the door's state to closed and puts the nerve back in the scene
		if (!DoorCounter)
		{
			DoorState = DoorStateEnum::DoorState_Closed;
			//NerveISM->AddInstance(NerveLocation);
			DoorOpenDelay = 0;

			// Stops the player moving through the doors
			LeftDoor->SetCollisionProfileName("BlockAllDynamic");
			RightDoor->SetCollisionProfileName("BlockAllDynamic");
			Nerve->SetCollisionProfileName("BlockAllDynamic");
		}
	}
	
	// Waits for the predetermined amount of time then changes the door's state to closing
	if (DoorState == DoorStateEnum::DoorState_Open)
	{
		DoorOpenDelay += DeltaTime;
		if (DoorOpenDelay >= DoorsOpenTime) {
			DoorState = DoorStateEnum::DoorState_Closing;
			if (DoorSound) {
				DoorAudioComponent->Play();
			}
			DoorFlipbookComponent->ReverseFromEnd();
		}
	}

	if (DoorState == DoorStateEnum::DoorState_Opening)
	{
		// Opens the doors slightly every tick
		for (int32 DoorIncrementer = 0; DoorIncrementer < AmountOfDoors; DoorIncrementer++)
		{
			FTransform DoorNewTransform;

			LeftDoor->GetInstanceTransform(DoorIncrementer, DoorNewTransform);
			DoorNewTransform.SetLocation(FVector(DoorNewTransform.GetLocation().X - 5, DoorNewTransform.GetLocation().Y, DoorNewTransform.GetLocation().Z));
			LeftDoor->UpdateInstanceTransform(DoorIncrementer, DoorNewTransform, false, true);

			RightDoor->GetInstanceTransform(DoorIncrementer, DoorNewTransform);
			DoorNewTransform.SetLocation(FVector(DoorNewTransform.GetLocation().X + 5, DoorNewTransform.GetLocation().Y, DoorNewTransform.GetLocation().Z));
			RightDoor->UpdateInstanceTransform(DoorIncrementer, DoorNewTransform, false, true);
		}

		// Shrinks the nerve slightly every tick
		FTransform NerveNewTransform = Nerve->GetRelativeTransform();
		Nerve->SetRelativeScale3D(FVector(NerveNewTransform.GetScale3D().X, NerveNewTransform.GetScale3D().Y, NerveNewTransform.GetScale3D().Z - (NerveHeight / DoorWidth)));
		Nerve->SetRelativeLocation(FVector(NerveNewTransform.GetLocation().X, NerveNewTransform.GetLocation().Y, NerveNewTransform.GetLocation().Z - (NerveHeight / DoorWidth)));

		DoorCounter++;

		// Changes the door's state to open
		if (DoorCounter == DoorWidth)
		{
			DoorState = DoorStateEnum::DoorState_Open;
		}
	}
}

// Called whenever the actor hits anything
void ADoorWithNerve::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((Other != NULL) && (Other != this) && (OtherComp != NULL))
	{
		// Checks if the player hit the nerve, removes the nerve, and changes the door's state to opening
		if (Other->GetName()=="Player" && MyComp == Nerve && DoorState == DoorStateEnum::DoorState_Closed)
		{
			DoorState = DoorStateEnum::DoorState_Opening;
			LeftDoor->SetCollisionProfileName("NoCollision");
			RightDoor->SetCollisionProfileName("NoCollision");
			Nerve->SetCollisionProfileName("NoCollision");

			if (DoorSound) {
				DoorAudioComponent->Play();
			}

			DoorFlipbookComponent->Play();
		}
	}
}
