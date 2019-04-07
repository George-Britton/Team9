// Fill out your copyright notice in the Description page of Project Settings.

#include "WhiteBloodCellStarter.h"
#include "PlayerPawn.h"

// Sets default values
AWhiteBloodCellStarter::AWhiteBloodCellStarter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->StartingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

	StartingBox->SetupAttachment(this->RootComponent);
}

// Called when the game starts or when spawned
void AWhiteBloodCellStarter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWhiteBloodCellStarter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWhiteBloodCellStarter::NotifyActorBeginOverlap(AActor* OtherActor)
{
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

