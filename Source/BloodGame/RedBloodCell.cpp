// Fill out your copyright notice in the Description page of Project Settings.

#include "RedBloodCell.h"


// Sets default values
ARedBloodCell::ARedBloodCell()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->CellBodyISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Cell Body"));
	CellBodyISM->SetupAttachment(this->RootComponent);

	if (this->CellBody) { this->CellBodyISM->SetStaticMesh(this->CellBody); }

}

// Called every time anything changes
void ARedBloodCell::OnConstruction(const FTransform& Transform)
{

	if (!VerticleSwaySeverity) { VerticleSwaySeverity = 20; }
	if (!HorizontalSwaySeverity) { HorizontalSwaySeverity = 20; }
	uint8 RandomVerticleDirection = FMath::RandRange(0, 1);
	uint8 RandomHorizontalDirection = FMath::RandRange(0, 1);
	if (RandomVerticleDirection)
	{
		VerticleSwayDestination = VerticleSwaySeverity;
	}
	else
	{
		VerticleSwayDestination = VerticleSwaySeverity * -1;
	}
	if (RandomHorizontalDirection)
	{
		HorizontalSwayDestination = HorizontalSwaySeverity;
	}
	else
	{
		HorizontalSwayDestination = HorizontalSwaySeverity * -1;
	}

	if (ApplyChanges) {
		if (this->CellBody)
		{
			CellBodyISM->ClearInstances();
			this->CellBodyISM->SetStaticMesh(this->CellBody);
			FTransform CellTransform;
			CellTransform.SetLocation(FVector(0.0f, 0.0f, 0.0f));
			CellBodyISM->AddInstance(CellTransform);
		}
		else if (!(this->CellBody))
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please allocate a static mesh"));
		}

		ApplyChanges = false;
	}

	if (CellMovementDirection == MovementDirectionEnum::LeftMovement || CellMovementDirection == MovementDirectionEnum::RightMovement) { HorizontalSway = false; }
	if (CellMovementDirection == MovementDirectionEnum::UpMovement || CellMovementDirection == MovementDirectionEnum::DownMovement) { VerticleSway = false; }
}

// Called when the game starts or when spawned
void ARedBloodCell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARedBloodCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Collided) {
		switch (CellMovementDirection) {
		case MovementDirectionEnum::LeftMovement: this->AddActorWorldOffset(FVector(Speed * -1, 0, 0)); break;
		case MovementDirectionEnum::UpMovement: this->AddActorWorldOffset(FVector(0, 0, Speed)); break;
		case MovementDirectionEnum::RightMovement: this->AddActorWorldOffset(FVector(Speed, 0, 0)); break;
		case MovementDirectionEnum::DownMovement: this->AddActorWorldOffset(FVector(0, 0, Speed * -1)); break;
		case MovementDirectionEnum::NoMovement: break;
		}
	}
	if (VerticleSway) {
		if (VerticleSwayCount < VerticleSwayDestination && VerticleSwayDestination > 0)
		{
			this->AddActorWorldOffset(FVector(0, 0, 1));
			VerticleSwayCount++;
		}
		else if (VerticleSwayCount > VerticleSwayDestination && VerticleSwayDestination < 0)
		{
			this->AddActorWorldOffset(FVector(0, 0, -1));
			VerticleSwayCount--;
		}
		else if (VerticleSwayCount == VerticleSwayDestination)
		{
			VerticleSwayDestination *= -1;
		}
	}
	if (HorizontalSway) {
		if (HorizontalSwayCount < HorizontalSwayDestination && HorizontalSwayDestination > 0)
		{
			this->AddActorWorldOffset(FVector(1, 0, 0));
			HorizontalSwayCount++;
		}
		else if (HorizontalSwayCount > HorizontalSwayDestination && HorizontalSwayDestination < 0)
		{
			this->AddActorWorldOffset(FVector(-1, 0, 0));
			HorizontalSwayCount--;

		}
		else if (HorizontalSwayCount == HorizontalSwayDestination)
		{
			HorizontalSwayDestination *= -1;
		}
	}
}

// Called to bind functionality to input
void ARedBloodCell::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}