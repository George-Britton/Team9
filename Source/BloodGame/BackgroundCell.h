// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "BackgroundCell.generated.h"

UCLASS()
class BLOODGAME_API ABackgroundCell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABackgroundCell();

	// Boolean that can be ticked to apply the changes made to the cell
	UPROPERTY(EditAnywhere, Category = "Background Cell")
		bool ApplyChanges = false;

	// Number used as a randomiser for certain characteristics of the cell
	UPROPERTY()
		uint32 SpritePicker;

	// Speed the cell moves at
	UPROPERTY(EditAnywhere, Category = "Background Cell")
		float Speed = 3;

	// Speed the cell rotates at
	UPROPERTY(EditAnywhere, Category = "Background Cell")
		float RotationSpeed = 3;

	// Array of possible sprites for the cell to use
	UPROPERTY(EditAnywhere, Category = "Background Cell")
		TArray<UPaperSprite*> CellSpriteArray;

	// Sprite that is spawned to represent the cell
	UPROPERTY()
		UPaperSpriteComponent * CellSprite;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called every time a value is changed
	virtual void OnConstruction(const FTransform &trans) override;

	// Called when the actor stops overlapping with anything
	UFUNCTION()
		void NotifyActorEndOverlap(AActor* OtherActor) override;
};