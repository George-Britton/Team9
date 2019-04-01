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

	UPROPERTY(EditAnywhere, Category = "Spawner")
		float SpawnTimeInSeconds = 0.3;

	UPROPERTY(EditAnywhere, Category = "Spawner")
		UClass * Cell;

	UPROPERTY(EditAnywhere, Category = "Spawner")
		UBoxComponent * SpawnBox;

	UPROPERTY(EditAnywhere, Category = "Spawner")
		UBoxComponent * LifeBox;

	UPROPERTY(EditAnywhere, Category = "Spawner")
		TArray<UPaperSprite*> SpawnedCellSpriteArray;

	UPROPERTY()
		FTimerHandle SpawningTimer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UFUNCTION(Category = "Spawner")
		void Spawn();

};
