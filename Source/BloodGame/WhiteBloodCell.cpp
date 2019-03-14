// Fill out your copyright notice in the Description page of Project Settings.

#include "WhiteBloodCell.h"
#include "PlayerPawn.h"


// Sets default values
AWhiteBloodCell::AWhiteBloodCell()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->ShieldISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Shield"));
	this->CellSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Cell Sprite"));
	CellSprite->SetupAttachment(RootComponent);
	ShieldISM->SetupAttachment(RootComponent);

	if (this->Shield) { this->ShieldISM->SetStaticMesh(this->Shield); }

	ShieldISM->SetNotifyRigidBodyCollision(true);

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
		if (ApplyChanges) {
			if (this->Sprite)
			{
				CellSprite->SetSprite(Sprite);
				CellSprite->SetWorldScale3D(FVector(0.75, 1, 0.75));
				CellSprite->SetWorldRotation(FRotator((FMath::RandRange(-179, 180)), 0, 0).Quaternion());
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please allocate a sprite"));
			}

			ApplyChanges = false;

			CellSprite->TranslucencySortPriority = 75;
		}

		if (this->Shield)
		{
			ShieldISM->ClearInstances();
			this->ShieldISM->SetStaticMesh(this->Shield);
			FTransform ShieldTransform;
			switch(ShieldOrientation){
			case ShieldOrientationEnum::ShieldOrientation_Left: ShieldTransform.SetLocation(FVector(-100, 0, 0)); ShieldTransform.SetRotation((FRotator(0, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Right: ShieldTransform.SetLocation(FVector(100, 0, 0)); ShieldTransform.SetRotation((FRotator(180, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Up: ShieldTransform.SetLocation(FVector(0, 0, 100)); ShieldTransform.SetRotation((FRotator(270, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Down: ShieldTransform.SetLocation(FVector(0, 0, -100)); ShieldTransform.SetRotation((FRotator(90, 0, 0).Quaternion())); break;
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

	if (CellMovementDirection == MovementDirectionEnum::NoMovement)
	{
		IsMoving = false;
	}else
	{
		IsMoving = true;
	}

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

void AWhiteBloodCell::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{

	//if the primitive comp is the shield.. do something. 
	if ((Other != NULL) && (Other != this) && (OtherComp != NULL))
	{
		
		APlayerPawn * player = Cast<APlayerPawn>(Other);
		if(player && MyComp == ShieldISM)
		{
			//if we're the player!!! this is good....
			MovementDirectionEnum temp = CellMovementDirection;
			CellMovementDirection = MovementDirectionEnum::NoMovement;
			player->HitShield(this);
			FLatentActionInfo LatentInfo;
			UKismetSystemLibrary::Delay(this, 0.2f, LatentInfo);
			CellMovementDirection = temp;
		}
		
	}
}