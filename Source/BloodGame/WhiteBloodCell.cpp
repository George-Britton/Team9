// Fill out your copyright notice in the Description page of Project Settings.

#include "WhiteBloodCell.h"
#include "PlayerPawn.h"


// Sets default values
AWhiteBloodCell::AWhiteBloodCell()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the basic objects for the actor's components
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->ShieldSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Shield"));
	this->CellSprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Cell Sprite"));
	this->ShieldBounceAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));

	// Sets the attachments to the root
	CellSprite->SetupAttachment(RootComponent);
	ShieldSprite->SetupAttachment(RootComponent);
	ShieldSprite->SetNotifyRigidBodyCollision(true);
	ShieldBounceAudioComponent->SetupAttachment(RootComponent);
}

// Called every time anything changes
void AWhiteBloodCell::OnConstruction(const FTransform& Transform)
{
	// Sets the sway direction
	if (!VerticalSwaySeverity) { VerticalSwaySeverity = 20; }
	if (!HorizontalSwaySeverity) { HorizontalSwaySeverity = 20; }
	uint8 RandomVerticalDirection = FMath::RandRange(0, 1);
	uint8 RandomHorizontalDirection = FMath::RandRange(0, 1);
	if (RandomVerticalDirection) { VerticalSwayDestination = VerticalSwaySeverity; }
	else { VerticalSwayDestination = VerticalSwaySeverity * -1; }
	if (RandomHorizontalDirection) { HorizontalSwayDestination = HorizontalSwaySeverity; }
	else { HorizontalSwayDestination = HorizontalSwaySeverity * -1; }

	// Changes to be made when applied
	if (ApplyChanges) {
		if (this->SpriteFlipbook && this->CellSprite)
		{
			// Creates the sprite for the cell
			CellSprite->SetFlipbook(SpriteFlipbook);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please allocate a sprite flipbook")); // Warning if the sprite doesn't exist
		}

		// Sets the order the cell should be rendered
		// CellSprite->TranslucencySortPriority = 75;

		if (this->Shield)
		{
			// Respawns the shield in the orientation decided in the editor
			ShieldSprite->SetSprite(Shield);
			FTransform ShieldTransform;
			switch (ShieldOrientation) {
			case ShieldOrientationEnum::ShieldOrientation_Left: ShieldTransform.SetLocation(FVector(-100, 0, 0)); ShieldTransform.SetRotation((FRotator(0, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Right: ShieldTransform.SetLocation(FVector(100, 0, 0)); ShieldTransform.SetRotation((FRotator(180, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Up: ShieldTransform.SetLocation(FVector(0, 0, 100)); ShieldTransform.SetRotation((FRotator(270, 0, 0).Quaternion())); break;
			case ShieldOrientationEnum::ShieldOrientation_Down: ShieldTransform.SetLocation(FVector(0, 0, -100)); ShieldTransform.SetRotation((FRotator(90, 0, 0).Quaternion())); break;
			}
			ShieldSprite->SetRelativeTransform(ShieldTransform);
		}

		if (ShieldBounceSound) {
			// Sets the sound that will be played on shield bounce
			ShieldBounceAudioComponent->SetSound(ShieldBounceSound);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please allocate a sound")); // Warning if the sound doesn't exist
		}

		ApplyChanges = false;
	}

	// Disallows the cells swaying in the same way that they're moving
	if (CellMovementDirection == MovementDirectionEnum::LeftMovement || CellMovementDirection == MovementDirectionEnum::RightMovement) { HorizontalSway = false; }
	if (CellMovementDirection == MovementDirectionEnum::UpMovement || CellMovementDirection == MovementDirectionEnum::DownMovement) { VerticalSway = false; }
}

// Called when the game starts or when spawned
void AWhiteBloodCell::BeginPlay()
{
	Super::BeginPlay();

	// Determines if the cell is moving for the player's bouncing purposes
	if (CellMovementDirection == MovementDirectionEnum::NoMovement)
	{
		IsMoving = false;
	}
	else
	{
		IsMoving = true;
	}

}

// Called every frame
void AWhiteBloodCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FTransform CurrentTransform;

	if (ApplyChanges)
	{
		OnConstruction(CurrentTransform);
	}

	if (!Collided) {
		// Moves the cell every tick
		switch (CellMovementDirection) {
		case MovementDirectionEnum::LeftMovement: this->AddActorWorldOffset(FVector(Speed * -1, 0, 0)); break;
		case MovementDirectionEnum::UpMovement: this->AddActorWorldOffset(FVector(0, 0, Speed)); break;
		case MovementDirectionEnum::RightMovement: this->AddActorWorldOffset(FVector(Speed, 0, 0)); break;
		case MovementDirectionEnum::DownMovement: this->AddActorWorldOffset(FVector(0, 0, Speed * -1)); break;
		case MovementDirectionEnum::NoMovement: break;
		}
	}

	// Sways the cell every tick
	if (VerticalSway) {
		if (VerticalSwayCount < VerticalSwayDestination && VerticalSwayDestination > 0)
		{
			this->AddActorWorldOffset(FVector(0, 0, 1));
			VerticalSwayCount++;
		}
		else if (VerticalSwayCount > VerticalSwayDestination && VerticalSwayDestination < 0)
		{
			this->AddActorWorldOffset(FVector(0, 0, -1));
			VerticalSwayCount--;
		}
		else if (VerticalSwayCount == VerticalSwayDestination)
		{
			VerticalSwayDestination *= -1;
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
	if ((Other != NULL) && (Other != this) && (OtherComp != NULL) && MovementReset)
	{
		// Creates a reference to the player
		APlayerPawn * PlayerRef = Cast<APlayerPawn>(Other);
		if (PlayerRef && MyComp == ShieldSprite)
		{
			if (ShieldBounceSound && !(CellMovementDirection == MovementDirectionEnum::NoMovement)) {
				ShieldBounceAudioComponent->Play();
			}

			MovementReset = false;

			FTransform ShieldLocation = ShieldSprite->GetRelativeTransform();

			// Tells the player they've been hit by a shield
			TempCellDirection = CellMovementDirection;
			CellMovementDirection = MovementDirectionEnum::NoMovement;
			PlayerRef->HitShield(this, BounceStrength, TempCellDirection);

			//Stuns and restarts the cell
			FTimerHandle MovementRestartTimer;
			FTimerDelegate Delegate;
			Delegate.BindUObject(this, &AWhiteBloodCell::RestartMovement);
			GetWorld()->GetTimerManager().SetTimer(MovementRestartTimer, Delegate, 0.1, false, 0);
		}
	}
}

// Restarts the cell's movement after hitting the player
void AWhiteBloodCell::RestartMovement()
{
	CellMovementDirection = TempCellDirection;
	MovementReset = true;
}
