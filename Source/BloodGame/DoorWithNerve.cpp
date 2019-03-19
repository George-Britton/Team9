// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorWithNerve.h"


// Sets default values
ADoorWithNerve::ADoorWithNerve()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->LeftDoor = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Left Door"));
	this->RightDoor = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Right Door"));
	this->NerveISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Nerve"));

	LeftDoor->SetupAttachment(this->RootComponent);
	RightDoor->SetupAttachment(this->RootComponent);
	NerveISM->SetupAttachment(this->RootComponent);
}

void ADoorWithNerve::OnConstruction(const FTransform& Transform)
{
	if (AmountOfDoors < 1){ AmountOfDoors = 1; }
	if (this->Door) {
		this->LeftDoor->SetStaticMesh(Door);
		this->RightDoor->SetStaticMesh(Door);
	}
	if (this->Nerve) {
		this->NerveISM->SetStaticMesh(Nerve);
	}

	if (Apply) {
		LeftDoor->ClearInstances();
		RightDoor->ClearInstances();
		NerveISM->ClearInstances();
		FTransform BaseTransform;

		if (AmountOfDoors < DoorTransforms.Num()){ for (int32 Popper = 0; Popper < (DoorTransforms.Num() - AmountOfDoors); Popper++) { DoorTransforms.Pop(); } }
		else if (AmountOfDoors > DoorTransforms.Num())
		{
			for (int32 Adder = DoorTransforms.Num(); Adder < AmountOfDoors; Adder++)
			{
				DoorTransforms.Add(BaseTransform);
			}
		}

		if (Door && Nerve)
		{
			for (int32 Placer = 0; Placer < AmountOfDoors; Placer++)
			{
				FTransform DoorPlacement = DoorTransforms[Placer];
				DoorPlacement.SetLocation(FVector((DoorTransforms[Placer].GetLocation().X - (Door->GetBounds().GetBox().GetSize().X / 2)), DoorTransforms[Placer].GetLocation().Y, DoorTransforms[Placer].GetLocation().Z));
				LeftDoor->AddInstance(DoorPlacement);
				DoorPlacement.SetLocation(FVector((DoorTransforms[Placer].GetLocation().X + (Door->GetBounds().GetBox().GetSize().X / 2)), DoorTransforms[Placer].GetLocation().Y, DoorTransforms[Placer].GetLocation().Z));
				RightDoor->AddInstance(DoorPlacement);
			}

			NerveISM->AddInstance(NerveLocation);
		}else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please assign static meshes to both 'Door' and 'Nerve'"));
		}

		Apply = false;
	}
}

// Called every frame
void ADoorWithNerve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DoorState == DoorStateEnum::DoorState_Closing)
	{
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

		DoorCounter--;

		if (!DoorCounter)
		{
			DoorState = DoorStateEnum::DoorState_Closed;
			NerveISM->AddInstance(NerveLocation);
			DoorOpenDelay = 0;
		}
	}
	
	if (DoorState == DoorStateEnum::DoorState_Open && Retriggerable)
	{
		DoorOpenDelay += DeltaTime;
		if (DoorOpenDelay >= DoorsOpenTime) {
			DoorState = DoorStateEnum::DoorState_Closing;
		}
	}

	if (DoorState == DoorStateEnum::DoorState_Opening)
	{
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

		DoorCounter++;

		if (DoorCounter == 25)
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
		if (Other->GetName()=="Player" && MyComp == NerveISM && DoorState == DoorStateEnum::DoorState_Closed)
		{
			DoorState = DoorStateEnum::DoorState_Opening;
			NerveISM->ClearInstances();
		}
	}
}