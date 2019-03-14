// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Engine.h"
#include "RedBloodCell.h"
#include "WhiteBloodCell.generated.h"

UENUM()
enum class ShieldOrientationEnum : uint8{
	ShieldOrientation_Up UMETA(DisplayName = "Up"),
	ShieldOrientation_Down UMETA(DisplayName = "Down"),
	ShieldOrientation_Left UMETA(DisplayName = "Left"),
	ShieldOrientation_Right UMETA(DisplayName = "Right"),
};

UCLASS()
class BLOODGAME_API AWhiteBloodCell : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AWhiteBloodCell();

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		bool ApplyChanges = true;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		bool VerticleSway = false;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		int32 VerticleSwaySeverity = 20;

	UPROPERTY()
		int32 VerticleSwayDestination = VerticleSwaySeverity;

	UPROPERTY()
		int32 VerticleSwayCount = 0;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		bool HorizontalSway = false;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		int32 HorizontalSwaySeverity = 20;

	UPROPERTY()
		int32 HorizontalSwayDestination = HorizontalSwaySeverity;

	UPROPERTY()
		int32 HorizontalSwayCount = 0;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		ShieldOrientationEnum ShieldOrientation = ShieldOrientationEnum::ShieldOrientation_Left;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		MovementDirectionEnum CellMovementDirection = MovementDirectionEnum::NoMovement;

	UPROPERTY()
		bool IsMoving = true;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		float Speed = 5.0f;

	UPROPERTY()
		bool Collided = false;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		UPaperSprite * Sprite;

	UPROPERTY()
		UPaperSpriteComponent * CellSprite;

	UPROPERTY(EditAnywhere, Category = "White Blood Cell")
		UStaticMesh * Shield;

	UPROPERTY(Editanywhere, Category = "White Blood Cell")
		float BounceStrength = 5;

	UPROPERTY()
		UInstancedStaticMeshComponent * ShieldISM;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every time anything is changed
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Called when the cell hits anything
	UFUNCTION()
		void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
