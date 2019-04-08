// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "DoorWithNerve.generated.h"

UENUM() // Enum for the movement state of the doors
enum class DoorStateEnum : uint8 {
	DoorState_Opening UMETA(DisplayName = "Opening"),
	DoorState_Closing UMETA(DisplayName = "Closing"),
	DoorState_Open UMETA(DisplayName = "Open"),
	DoorState_Closed UMETA(DisplayName = "Closed"),
};

UCLASS()
class BLOODGAME_API ADoorWithNerve : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorWithNerve();

	// Makes the changes to the actor when true
	UPROPERTY(EditAnywhere, Category = "Doors")
		bool Apply = false;

	// Whether or not the door closes again
	UPROPERTY(EditAnywhere, Category = "Doors")
		bool Retriggerable = false;

	// Number of sets of doors to spawn
	UPROPERTY(EditAnywhere, Category = "Doors")
		int32 AmountOfDoors = 1;

	// How long the doors stay open in seconds
	UPROPERTY(EditAnywhere, Category = "Doors")
		uint32 DoorsOpenTime = 2;

	// How wide the doors open
	UPROPERTY(EditAnywhere, Category = "Doors")
		uint32 DoorWidth = 25;

	// Static mesh for the door ISMs
	UPROPERTY(EditAnywhere, Category = "Doors")
		UStaticMesh * Door;

	// Static mesh for the NerveISM
	UPROPERTY(EditAnywhere, Category = "Doors")
		UStaticMesh * Nerve;

	// Transform of the nerve that controls the doors
	UPROPERTY(EditAnywhere, Category = "Doors")
		FTransform NerveLocation;

	// Transforms of all the sets of doors
	UPROPERTY(EditAnywhere, Category = "Doors")
		TArray<FTransform> DoorTransforms;

	// Counter for opening and closing the doors
	UPROPERTY()
		uint32 DoorCounter = 0;

	// How long the doors have been open
	UPROPERTY()
		float DoorOpenDelay = 0;

	// Instanced static mesh of the left door
	UPROPERTY()
		UInstancedStaticMeshComponent * LeftDoor;

	// Instanced static mesh of the right door
	UPROPERTY()
		UInstancedStaticMeshComponent * RightDoor;

	// Instanced static mesh of the nerve
	UPROPERTY()
		UInstancedStaticMeshComponent * NerveISM;

	// Enum of the movement state of the doors
	UPROPERTY()
		DoorStateEnum DoorState = DoorStateEnum::DoorState_Closed;

	// Value used to determine how much to grow and shrink the nerve
	UPROPERTY()
		float NerveHeight;

	// Used to determine if the nerve has moved
	UPROPERTY()
		FTransform NervesLastTransform;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called every time anything is changed
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	// Called when the doors or nerve hits anything
	UFUNCTION()
		void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
