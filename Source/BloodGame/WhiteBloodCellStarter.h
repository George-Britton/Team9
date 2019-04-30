// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WhiteBloodCell.h"
#include "Engine.h"
#include "WhiteBloodCellStarter.generated.h"

UCLASS()
class BLOODGAME_API AWhiteBloodCellStarter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWhiteBloodCellStarter();

	UPROPERTY(EditAnywhere, Category = "White Blood Cell Starter")
		UBoxComponent * StartingBox;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell Starter")
		MovementDirectionEnum CellDirection = MovementDirectionEnum::LeftMovement;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell Starter")
		TArray<AWhiteBloodCell*> CellsToStart;

public:	
	// Called when the actor overlaps with anything
	UFUNCTION()
		void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
