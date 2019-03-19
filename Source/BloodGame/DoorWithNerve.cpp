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
			for (int32 Adder = 0; Adder < (AmountOfDoors - DoorTransforms.Num()); Adder++)
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

		/*
		for (uint32 Placer = 0; Placer < AmountOfDoors; Placer++)
		{
			FTransform DoorTransform;
			DoorTransform.SetLocation(FVector((Doors[Placer]->GetComponentLocation().X - (Door->GetBounds().GetBox().GetSize().X / 2)), (Doors[Placer]->GetComponentLocation().Y), (Doors[Placer]->GetComponentLocation().Z)));
			LeftDoor->AddInstance(DoorTransform);
			DoorTransform.SetLocation(FVector((Doors[Placer]->GetComponentLocation().X + (Door->GetBounds().GetBox().GetSize().X / 2)), (Doors[Placer]->GetComponentLocation().Y), (Doors[Placer]->GetComponentLocation().Z)));
			RightDoor->AddInstance(DoorTransform);
		}

		
		FTransform LeftDoorTransform;
		LeftDoorTransform.SetLocation(FVector(-(Door->GetBounds().GetBox().GetSize().X / 2), 0, 0));
		LeftDoor->AddInstance(LeftDoorTransform);

		FTransform RightDoorTransform;
		RightDoorTransform.SetLocation(FVector((Door->GetBounds().GetBox().GetSize().X / 2), 0, 0));
		RightDoor->AddInstance(RightDoorTransform);
		*/

		Apply = false;
	}
}

// Called every frame
void ADoorWithNerve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

