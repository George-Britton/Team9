// Fill out your copyright notice in the Description page of Project Settings.

#include "WhiteBloodCell.h"


// Sets default values
AWhiteBloodCell::AWhiteBloodCell()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->CellBodyISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Cell Body"));
	this->ShieldISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Shield"));
	CellBodyISM->SetupAttachment(this->RootComponent);
	ShieldISM->SetupAttachment(RootComponent);

	if (this->CellBody) { this->CellBodyISM->SetStaticMesh(this->CellBody); }
	if (this->Shield) { this->ShieldISM->SetStaticMesh(this->Shield); }
}

// Called every time anything changes
void AWhiteBloodCell::OnConstruction(const FTransform& Transform)
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

		if (this->Shield)
		{
			ShieldISM->ClearInstances();
			this->ShieldISM->SetStaticMesh(this->Shield);
			FTransform ShieldTransform;
			switch(ShieldOrientation){
			case ShieldOrientationEnum::ShieldOrientation_Left: ShieldTransform.SetLocation(FVector(-80, 0, 0)); ShieldTransform.SetRotation((FRotator(0, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Right: ShieldTransform.SetLocation(FVector(80, 0, 0)); ShieldTransform.SetRotation((FRotator(180, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Up: ShieldTransform.SetLocation(FVector(0, 0, 80)); ShieldTransform.SetRotation((FRotator(270, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Down: ShieldTransform.SetLocation(FVector(0, 0, -80)); ShieldTransform.SetRotation((FRotator(90, 0, 0).Quaternion())); break;
			}
			ShieldISM->AddInstance(ShieldTransform);
		}

		ApplyChanges = false;
	}


	if (CellMovementDirection == MovementDirectionEnum::LeftMovement || CellMovementDirection == MovementDirectionEnum::RightMovement) { HorizontalSway = false; }
	if (CellMovementDirection == MovementDirectionEnum::UpMovement || CellMovementDirection == MovementDirectionEnum::DownMovement) { VerticleSway = false; }
}

// Called when the game starts or when spawned
void AWhiteBloodCell::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AWhiteBloodCell::Tick(float DeltaTime)
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