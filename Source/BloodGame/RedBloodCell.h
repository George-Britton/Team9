// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Engine.h"
#include "PaperSpriteComponent.h"
#include "RedBloodCell.generated.h"

UENUM()
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

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		bool ApplyChanges = false;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		bool VerticleSway = true;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		int32 VerticleSwaySeverity = 20;

	UPROPERTY()
		int32 VerticleSwayDestination = VerticleSwaySeverity;

	UPROPERTY()
		int32 VerticleSwayCount = 0;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		bool HorizontalSway = true;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		int32 HorizontalSwaySeverity = 20;

	UPROPERTY()
		int32 HorizontalSwayDestination = HorizontalSwaySeverity;

	UPROPERTY()
		int32 HorizontalSwayCount = 0;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		MovementDirectionEnum CellMovementDirection = MovementDirectionEnum::NoMovement;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		float Speed = 5.0f;

	UPROPERTY()
		bool Collided = false;

	UPROPERTY(EditAnywhere, Category = "Red Blood Cell")
		TArray<UPaperSprite*> CellSprites;

	UPROPERTY()
		UPaperSprite * Sprite;

	UPROPERTY()
		UPaperSpriteComponent * CellSprite;

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
