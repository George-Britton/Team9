// Fill out your copyright notice in the Description page of Project Settings.

#include "BackgroundCellSpawner.h"
#include "TimerManager.h"


// Sets default values
ABackgroundCellSpawner::ABackgroundCellSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Spawn Box"));;
	this->LifeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Life Box"));;

	SpawnBox->SetupAttachment(this->RootComponent);
	LifeBox->SetupAttachment(this->RootComponent);
}

// Called when the game starts or when spawned
void ABackgroundCellSpawner::BeginPlay()
{
	Super::BeginPlay();

	if (!Cell)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please assign an actor to 'Cell'"));
	}else
	{

		FTimerDelegate del;
		del.BindUObject(this, &ABackgroundCellSpawner::Spawn);

		GetWorld()->GetTimerManager().SetTimer(SpawningTimer, del, SpawnTimeInSeconds, true, 0);
	}
}

// Called every frame
void ABackgroundCellSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Spawns a cell
void ABackgroundCellSpawner::Spawn()
{
	FVector SpawnLoc = FVector(((FMath::RandRange(0, SpawnBox->GetScaledBoxExtent().X)), (0), ((FMath::RandRange(0, SpawnBox->GetScaledBoxExtent().X)))));


	UWorld::SpawnActor(Cell, SpawnLoc)
}