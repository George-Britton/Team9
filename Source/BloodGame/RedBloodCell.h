// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Engine.h"
#include "PaperSpriteComponent.h"
#include "RedBloodCell.generated.h"

UENUM() // Enum for the placement of the shield relative to the cell
enum class MovementDirectionEnum : uint8 {
	UpMovement UMETA(DisplayName = "Up"),
	DownMovement UMETA(DisplayName = "Down"),
	LeftMovement UMETA(DisplayName = "Left"),
	RightMovement UMETA(DisplayName = "Right"),
	NoMovement UMETA(DisplayName = "None")
};

UCLASS()
class BLOODGAME_API ARedBloodCell : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARedBloodCell();

	// Applies all the modified changed
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		bool ApplyChanges = false;

	// Whether or not the cell difts
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		bool VerticleSway = true;
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		bool HorizontalSway = true;

	// How far the cell drifts
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		int32 VerticleSwaySeverity = 20;
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		int32 HorizontalSwaySeverity = 20;

	// Destination the cell's swaying will end at
	UPROPERTY()
		int32 VerticleSwayDestination = VerticleSwaySeverity;
	UPROPERTY()
		int32 HorizontalSwayDestination = HorizontalSwaySeverity;

	// How far the cell has swayed so far
	UPROPERTY()
		int32 VerticleSwayCount = 0;
	UPROPERTY()
		int32 HorizontalSwayCount = 0;

	// Direction the cell's moving in
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		MovementDirectionEnum CellMovementDirection = MovementDirectionEnum::NoMovement;

	// Speed at which the cell moves
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		float Speed = 5.0f;

	// Whether or not the cell has collided with something
	UPROPERTY()
		bool Collided = false;

	// Array of possible cell sprites
	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		TArray<UPaperSprite*> CellSprites;

	// Sprite body for the cell
	UPROPERTY()
		UPaperSprite * Sprite;

	// Sprite that is spawned to represent the cell
	UPROPERTY()
		UPaperSpriteComponent * CellSprite;

	// Whether or not the cell is in water
	UPROPERTY()
		bool InWater = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every time anything is changed
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;



	void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
