// Fill out your copyright notice in the Description page of Project Settings.

#include "BackgroundCellSpawner.h"
#include "TimerManager.h"
#include "BackgroundCell.h"
#include "Kismet/KismetMathLibrary.h"


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
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Please assign an actor to 'Cell'"));
	}else if (!SpawnedCellSpriteArray.Num())
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Please add at least one sprite to 'Cell Sprite Array'"));
	}else if(Cell && SpawnedCellSpriteArray.Num())
	{
		FTimerDelegate del;
		del.BindUObject(this, &ABackgroundCellSpawner::Spawn);

		GetWorld()->GetTimerManager().SetTimer(SpawningTimer, del, SpawnTimeInSeconds, true, 0);
	}
}

// Spawns a cell
void ABackgroundCellSpawner::Spawn()
{
	const FVector SpawnLoc = UKismetMathLibrary::RandomPointInBoundingBox(SpawnBox->GetComponentLocation(), SpawnBox->GetScaledBoxExtent());
	const FRotator SpawnRot(FQuat::Identity);
	FActorSpawnParameters SpawnParams;

	ABackgroundCell* CellRef = GetWorld()->SpawnActor<ABackgroundCell>(Cell, SpawnLoc, SpawnRot, SpawnParams);
	
	CellRef->CellSpriteArray.Append(SpawnedCellSpriteArray);
	CellRef->ApplyChanges = true;
}