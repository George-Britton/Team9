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

	// The Box the player overlaps to start the cells moving
	UPROPERTY(EditAnywhere, Category = "White Blood Cell Starter")
		UBoxComponent * StartingBox;

	// Enum dictating the direction the cells should start moving in
	UPROPERTY(EditAnywhere, Category = "White Blood Cell Starter")
		MovementDirectionEnum CellDirection = MovementDirectionEnum::LeftMovement;

	// Array of chosen cells to start moving
	UPROPERTY(EditAnywhere, Category = "White Blood Cell Starter")
		TArray<AWhiteBloodCell*> CellsToStart;

public:	
	// Called when the actor overlaps with anything
	UFUNCTION()
		void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
