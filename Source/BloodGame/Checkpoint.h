// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerPawn.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

UCLASS()
class BLOODGAME_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoint();

	// Box component for the checkpoint
	UPROPERTY(EditAnywhere, Category = "Checkpoint", BlueprintReadWrite)
		UBoxComponent * Box;

	// Called when the actor overlaps with anything
	UFUNCTION()
		void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
