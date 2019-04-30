// Fill out your copyright notice in the Description page of Project Settings.

#include "BackgroundCell.h"
#include "BackgroundCellSpawner.h"


// Sets default values
ABackgroundCell::ABackgroundCell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set the basic objects for the actor's components
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->CellSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Cell Sprite"));

	// Sets the attachments to the root
	CellSprite->SetupAttachment(RootComponent);
}

// Called every time a value is changed
void ABackgroundCell::OnConstruction(const FTransform &trans)
{
	// Checks there are sprites for the cell to use
	if (ApplyChanges && CellSpriteArray.Num() > 0) {
		SpritePicker = FMath::RandRange(1, CellSpriteArray.Num());
		CellSprite->SetSprite(CellSpriteArray[SpritePicker - 1]);
		// Uses a randomiser to determine which sprite to use

		SpritePicker = FMath::RandRange(1, CellSpriteArray.Num());
		switch (SpritePicker)
		{
		case 1: CellSprite->SetSpriteColor(FLinearColor(0.15, 0.15, 0.15, 1)); this->SetActorScale3D(FVector(0.2, 1, 0.2)); CellSprite->TranslucencySortPriority = 20; break;
		case 2: CellSprite->SetSpriteColor(FLinearColor(0.3, 0.3, 0.3, 1)); this->SetActorScale3D(FVector(0.35, 1, 0.35)); CellSprite->TranslucencySortPriority = 30; break;
		case 3: CellSprite->SetSpriteColor(FLinearColor(0.45, 0.45, 0.45, 1)); this->SetActorScale3D(FVector(0.5, 1, 0.5)); CellSprite->TranslucencySortPriority = 40; break;
		default: CellSprite->SetSpriteColor(FLinearColor(0.15, 0.15, 0.15, 1)); this->SetActorScale3D(FVector(0.2, 1, 0.2)); CellSprite->TranslucencySortPriority = 20; break;
		} // Uses a randomiser to determine size and shade of cell

		RotationSpeed = FMath::RandRange(1, CellSpriteArray.Num());

		ApplyChanges = false;
	}else if (ApplyChanges && CellSpriteArray.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Please add at least one sprite to 'Cell Sprite Array'"));
		this->Destroy();
	} // If there aren't any sprite to pick from, warns the user and deletes the a actor
}

// Called every frame
void ABackgroundCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ApplyChanges) { OnConstruction(this->GetTransform()); }

	// Moves the cell with the speed and rotation determined in OnConstruction
	this->AddActorWorldOffset(FVector(-2 * (SpritePicker / Speed), 0, 0), true, nullptr, ETeleportType::TeleportPhysics);
	this->AddActorWorldRotation(FRotator(RotationSpeed, 0, 0), false, nullptr, ETeleportType::None);
}

// Called when the actor stops overlapping with anything
void ABackgroundCell::NotifyActorEndOverlap(AActor* OtherActor)
{
	// If the cells leaves its living area, it deletes itself
	AActor * SpawnerRef = Cast<ABackgroundCellSpawner>(OtherActor);
	if (SpawnerRef) { this->Destroy(); }
}