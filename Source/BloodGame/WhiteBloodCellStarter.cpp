// Fill out your copyright notice in the Description page of Project Settings.

#include "WhiteBloodCellStarter.h"
#include "PlayerPawn.h"

// Sets default values
AWhiteBloodCellStarter::AWhiteBloodCellStarter()
{
 	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the basic components and attach the start box tot he root
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->StartingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	StartingBox->SetupAttachment(this->RootComponent);
}

// Called when the actor overlaps with anything
void AWhiteBloodCellStarter::NotifyActorBeginOverlap(AActor* OtherActor)
{
	// Checks that the overlapped actor is the player, and starts the WBCs moving
	APlayerPawn* PlayerRef = Cast<APlayerPawn>(OtherActor);
	if (PlayerRef)
	{
		for (int32 ActorCounter = 0; ActorCounter < CellsToStart.Num(); ActorCounter++)
		{
			AWhiteBloodCell* CellRef = Cast<AWhiteBloodCell>(CellsToStart[ActorCounter]);
			CellRef->CellMovementDirection = CellDirection;
		}
		this->Destroy();
	}
}

