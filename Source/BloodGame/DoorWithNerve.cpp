// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorWithNerve.h"


// Sets default values
ADoorWithNerve::ADoorWithNerve()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->DoorParent = CreateDefaultSubobject<USceneComponent>(TEXT("Door Parent"));
	this->LeftDoor = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Left Door"));
	this->RightDoor = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Right Door"));
	this->NerveISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Nerve"));

	DoorParent->SetupAttachment(this->RootComponent);
	LeftDoor->SetupAttachment(this->DoorParent);
	RightDoor->SetupAttachment(this->DoorParent);
	NerveISM->SetupAttachment(this->RootComponent);
}

void ADoorWithNerve::OnConstruction(const FTransform& Transform)
{
	if (!AmountOfDoors){ AmountOfDoors = 1; }

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
		for (int32 Remover = 0; Remover < Doors.Num(); Remover++){ Doors.Pop(); }

		Doors.Init(DoorParent, AmountOfDoors);

		for (uint32 Placer = 0; Placer < AmountOfDoors; Placer++)
		{
			FTransform DoorTransform;
			DoorTransform.SetLocation(FVector((Doors[Placer]->GetComponentLocation().X - (Door->GetBounds().GetBox().GetSize().X / 2)), (Doors[Placer]->GetComponentLocation().Y), (Doors[Placer]->GetComponentLocation().Z)));
			LeftDoor->AddInstance(DoorTransform);
			DoorTransform.SetLocation(FVector((Doors[Placer]->GetComponentLocation().X + (Door->GetBounds().GetBox().GetSize().X / 2)), (Doors[Placer]->GetComponentLocation().Y), (Doors[Placer]->GetComponentLocation().Z)));
			RightDoor->AddInstance(DoorTransform);
		}

		/*
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

