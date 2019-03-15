// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "DoorWithNerve.generated.h"

UCLASS()
class BLOODGAME_API ADoorWithNerve : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorWithNerve();

	UPROPERTY(EditAnywhere, Category = "Uncontrollable Zone")
		bool Reset = false;

	UPROPERTY(EditAnywhere, Category = "Uncontrollable Zone")
		bool Retriggerable = false;

	UPROPERTY(EditAnywhere, Category = "Uncontrollable Zone")
		uint32 AmountOfDoors = 1;


	UPROPERTY(EditAnywhere, Category = "Uncontrollable Zone")
		UStaticMesh * Door;

	UPROPERTY(EditAnywhere, Category = "Uncontrollable Zone")
		UStaticMesh * Nerve;

	UPROPERTY()
		UInstancedStaticMeshComponent * LeftDoor;

	UPROPERTY()
		UInstancedStaticMeshComponent * RightDoor;

	UPROPERTY()
		UInstancedStaticMeshComponent * NerveISM;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

};
