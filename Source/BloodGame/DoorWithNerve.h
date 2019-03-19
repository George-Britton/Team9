// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "DoorWithNerve.generated.h"

UENUM()
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

	UPROPERTY(EditAnywhere, Category = "Doors")
		bool Apply = false;

	UPROPERTY(EditAnywhere, Category = "Doors")
		bool Retriggerable = false;

	UPROPERTY(EditAnywhere, Category = "Doors")
		int32 AmountOfDoors = 1;

	UPROPERTY(EditAnywhere, Category = "Doors")
		uint32 DoorsOpenTime = 2;

	UPROPERTY(EditAnywhere, Category = "Doors")
		UStaticMesh * Door;

	UPROPERTY(EditAnywhere, Category = "Doors")
		UStaticMesh * Nerve;

	UPROPERTY(EditAnywhere, Category = "Doors")
		FTransform NerveLocation;

	UPROPERTY(EditAnywhere, Category = "Doors")
		TArray<FTransform> DoorTransforms;

	UPROPERTY()
		uint32 DoorCounter = 0;

	UPROPERTY()
		float DoorOpenDelay = 0;

	UPROPERTY()
		UInstancedStaticMeshComponent * LeftDoor;

	UPROPERTY()
		UInstancedStaticMeshComponent * RightDoor;

	UPROPERTY()
		UInstancedStaticMeshComponent * NerveISM;

	UPROPERTY()
		DoorStateEnum DoorState = DoorStateEnum::DoorState_Closed;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

private:
	// Called when the doors or nerve hits anything
	UFUNCTION()
		void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
