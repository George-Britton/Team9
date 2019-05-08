// Fill out your copyright notice in the Description page of Project Settings.

#include "UncontrollableZone.h"
#include "PlayerPawn.h"


// Sets default values
AUncontrollableZone::AUncontrollableZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the basic objects for the actor's components
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	this->EnterAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Enter Audio"));
	this->ExitAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Exit Audio"));

	// Sets the box attachment to the root
	Box->SetupAttachment(RootComponent);
}

// Called when the actor overlaps with anything
void AUncontrollableZone::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (OtherActor->GetName() == "Player")
	{
		//Tells the player they've entered an unctontrollable zone
		APlayerPawn * PlayerRef = Cast<APlayerPawn>(OtherActor);
		PlayerRef->LoseControl(this);

		if (EnterSound) {
			EnterAudioComponent->SetSound(EnterSound);
			EnterAudioComponent->Play();
		}
	}
}

// Called when the actor stops overlapping with anything
void AUncontrollableZone::NotifyActorEndOverlap(AActor* OtherActor)
{
	if (OtherActor->GetName() == "Player")
	{
		//Tells the player they've exited an unctontrollable zone
		APlayerPawn * PlayerRef = Cast<APlayerPawn>(OtherActor);
		PlayerRef->RegainControl(this);
		if (ExitSound) {
			ExitAudioComponent->SetSound(ExitSound);
			ExitAudioComponent->Play();
		}
	}
}
