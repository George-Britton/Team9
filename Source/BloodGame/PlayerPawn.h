// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "WhiteBloodCell.h"
#include "PlayerPawn.generated.h"

class AUncontrollableZone;
class AWhiteBloodCell;
UCLASS()
class BLOODGAME_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Function called when the player hits the white blood cells' shields
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void HitShield(AWhiteBloodCell* blood_cell, float BounceStrength);
		void HitShield_Implementation(AWhiteBloodCell* blood_cell, float BounceStrength) {}

	// Function called when the player enters the uncontrollable zones
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void LoseControl(AUncontrollableZone* UncontrollableZone);
		void LoseControl_Implementation(AUncontrollableZone* UncontrollableZone){}

	//Funtion called when the player exits the uncontrollable zones
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void RegainControl(AUncontrollableZone* UncontrollableZone);
		void RegainControl_Implementation(AUncontrollableZone* UncontrollableZone) {}
};
