// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Engine.h"
#include "PaperSprite.h"
#include "BackgroundCellSpawner.generated.h"

UCLASS()
class BLOODGAME_API ABackgroundCellSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABackgroundCellSpawner();

	// How often the cells spawn
	UPROPERTY(EditAnywhere, Category = "Spawner")
		float SpawnTimeInSeconds = 0.3;

	// Reference to the actor you want to spawn
	UPROPERTY(EditAnywhere, Category = "Spawner")
		UClass * Cell;

	// Box component the cells will spawn within
	UPROPERTY(EditAnywhere, Category = "Spawner")
		UBoxComponent * SpawnBox;

	// Box component for the cells to live within, and get destroyed when they leave
	UPROPERTY(EditAnywhere, Category = "Spawner")
		UBoxComponent * LifeBox;

	// Array of sprites for the cells to use
	UPROPERTY(EditAnywhere, Category = "Spawner")
		TArray<UPaperSprite*> SpawnedCellSpriteArray;

	// Timer handle with details about the spawn event
	UPROPERTY()
		FTimerHandle SpawningTimer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called with a frequency of SpawnTimeInSeconds
	UFUNCTION(Category = "Spawner")
		void Spawn();
};
