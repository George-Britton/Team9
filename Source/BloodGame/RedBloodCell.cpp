// Fill out your copyright notice in the Description page of Project Settings.

#include "RedBloodCell.h"


// Sets default values
ARedBloodCell::ARedBloodCell()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set the basic objects for the actor's components
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->CellSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Cell Sprite"));

	// Sets the attachments to the root
	CellSprite->SetupAttachment(RootComponent);
}

// Called every time anything changes
void ARedBloodCell::OnConstruction(const FTransform& Transform)
{
	// Sets the sway direction
	if (!VerticalSwaySeverity){ VerticalSwaySeverity = 20; }
	if (!HorizontalSwaySeverity){ HorizontalSwaySeverity = 20; }
	uint8 RandomVerticalDirection = FMath::RandRange(0, 1);
	uint8 RandomHorizontalDirection = FMath::RandRange(0, 1);
	if (RandomVerticalDirection){ VerticalSwayDestination = VerticalSwaySeverity; }
	else{ VerticalSwayDestination = VerticalSwaySeverity * -1; }
	if (RandomHorizontalDirection){ HorizontalSwayDestination = HorizontalSwaySeverity; }
	else{ HorizontalSwayDestination = HorizontalSwaySeverity * -1; }

	// Changes to be made when applied
	if (ApplyChanges) {
		if (this->CellSprites[0])
		{
			// Creates the sprite for the cell
			Sprite = CellSprites[FMath::RandRange(0, CellSprites.Num() - 1)];
			CellSprite->SetSprite(Sprite);

			// Sets the order the cell should be rendered
			CellSprite->TranslucencySortPriority = 60;
		}else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Please allocate a sprite")); // Warning if the sprite doesn't exist
		}

		ApplyChanges = false;
	}

	// Disallows the cells swaying in the same way that they're moving
	if (CellMovementDirection == MovementDirectionEnum::LeftMovement || CellMovementDirection == MovementDirectionEnum::RightMovement) { HorizontalSway = false; }
	if (CellMovementDirection == MovementDirectionEnum::UpMovement || CellMovementDirection == MovementDirectionEnum::DownMovement) { VerticalSway = false; }
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

	// Moves the cell with the water
	if (!InWater) {
		switch (CellMovementDirection) {
		case MovementDirectionEnum::LeftMovement: this->AddActorWorldOffset(FVector(Speed * -1, 0, 0)); break;
		case MovementDirectionEnum::UpMovement: this->AddActorWorldOffset(FVector(0, 0, Speed)); break;
		case MovementDirectionEnum::RightMovement: this->AddActorWorldOffset(FVector(Speed, 0, 0)); break;
		case MovementDirectionEnum::DownMovement: this->AddActorWorldOffset(FVector(0, 0, Speed * -1)); break;
		case MovementDirectionEnum::NoMovement: break;
		}
	}else
	{
		if (this->GetActorLocation().Z < 1130) {
			this->AddActorWorldOffset(FVector(0, 0, 5));
		}
	}

	// Sways the cell every tick
	if (VerticalSway && !InWater) {
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
	if (HorizontalSway && !InWater) {
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

void ARedBloodCell::NotifyActorBeginOverlap(AActor* OtherActor)
{
	// Sets the cell to be in water when they overlap with it
	if (OtherActor->GetName() == "Water_Blueprint")
	{
		InWater = true;
	}
}