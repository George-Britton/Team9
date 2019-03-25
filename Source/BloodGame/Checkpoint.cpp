// Fill out your copyright notice in the Description page of Project Settings.

#include "Checkpoint.h"


// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creates the default scene objects
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

	// Sets up the link between the box and the root
	Box->SetupAttachment(this->RootComponent);
}

// Called when the actor overlaps with anything
void ACheckpoint::NotifyActorBeginOverlap(AActor* OtherActor)
{
	// If the overlapping actor is the player, calls the player's "Enter Checkpoint" function
	if (OtherActor->GetName() == "Player")
	{
		APlayerPawn * PlayerRef = Cast<APlayerPawn>(OtherActor);
		PlayerRef->EnterCheckpoint(this);
	}
}