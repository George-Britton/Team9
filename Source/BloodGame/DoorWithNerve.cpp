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
	if (!AmountOfDoors){ AmountOfDoors = 1; }

	if (this->Door) {
		this->LeftDoor->SetStaticMesh(Door);
		this->RightDoor->SetStaticMesh(Door);
	}

	if (this->Nerve) {
		this->NerveISM->SetStaticMesh(Nerve);
	}

	if (Reset) {
		LeftDoor->ClearInstances();
		RightDoor->ClearInstances();

		FTransform LeftDoorTransform;
		LeftDoorTransform.SetLocation(FVector(-(Door->GetBounds().GetBox().GetSize().X / 2), 0, 0));
		LeftDoor->AddInstance(LeftDoorTransform);

		FTransform RightDoorTransform;
		RightDoorTransform.SetLocation(FVector((Door->GetBounds().GetBox().GetSize().X / 2), 0, 0));
		RightDoor->AddInstance(RightDoorTransform);

		Reset = false;
	}
}

// Called every frame
void ADoorWithNerve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

