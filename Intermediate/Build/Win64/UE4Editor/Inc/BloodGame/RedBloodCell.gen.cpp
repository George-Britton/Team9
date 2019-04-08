// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RedBloodCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedBloodCell() {}
// Cross Module References
	BLOODGAME_API UEnum* Z_Construct_UEnum_BloodGame_MovementDirectionEnum();
	UPackage* Z_Construct_UPackage__Script_BloodGame();
	BLOODGAME_API UClass* Z_Construct_UClass_ARedBloodCell_NoRegister();
	BLOODGAME_API UClass* Z_Construct_UClass_ARedBloodCell();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	static UEnum* MovementDirectionEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BloodGame_MovementDirectionEnum, Z_Construct_UPackage__Script_BloodGame(), TEXT("MovementDirectionEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MovementDirectionEnum(MovementDirectionEnum_StaticEnum, TEXT("/Script/BloodGame"), TEXT("MovementDirectionEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BloodGame_MovementDirectionEnum_CRC() { return 917271074U; }
	UEnum* Z_Construct_UEnum_BloodGame_MovementDirectionEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BloodGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MovementDirectionEnum"), 0, Get_Z_Construct_UEnum_BloodGame_MovementDirectionEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MovementDirectionEnum::UpMovement", (int64)MovementDirectionEnum::UpMovement },
				{ "MovementDirectionEnum::DownMovement", (int64)MovementDirectionEnum::DownMovement },
				{ "MovementDirectionEnum::LeftMovement", (int64)MovementDirectionEnum::LeftMovement },
				{ "MovementDirectionEnum::RightMovement", (int64)MovementDirectionEnum::RightMovement },
				{ "MovementDirectionEnum::NoMovement", (int64)MovementDirectionEnum::NoMovement },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DownMovement.DisplayName", "Down" },
				{ "LeftMovement.DisplayName", "Left" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "NoMovement.DisplayName", "None" },
				{ "RightMovement.DisplayName", "Right" },
				{ "ToolTip", "Enum for the placement of the shield relative to the cell" },
				{ "UpMovement.DisplayName", "Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BloodGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"MovementDirectionEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"MovementDirectionEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ARedBloodCell::StaticRegisterNativesARedBloodCell()
	{
	}
	UClass* Z_Construct_UClass_ARedBloodCell_NoRegister()
	{
		return ARedBloodCell::StaticClass();
	}
	UClass* Z_Construct_UClass_ARedBloodCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_BloodGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "RedBloodCell.h" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSprite_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Sprite that is spawned to represent the cell" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellSprite = { UE4CodeGen_Private::EPropertyClass::Object, "CellSprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, CellSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(NewProp_CellSprite_MetaData, ARRAY_COUNT(NewProp_CellSprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Sprite body for the cell" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite = { UE4CodeGen_Private::EPropertyClass::Object, "Sprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(NewProp_Sprite_MetaData, ARRAY_COUNT(NewProp_Sprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSprites_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Array of possible cell sprites" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CellSprites = { UE4CodeGen_Private::EPropertyClass::Array, "CellSprites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, CellSprites), METADATA_PARAMS(NewProp_CellSprites_MetaData, ARRAY_COUNT(NewProp_CellSprites_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellSprites_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CellSprites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collided_MetaData[] = {
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Whether or not the cell has collided with something" },
			};
#endif
			auto NewProp_Collided_SetBit = [](void* Obj){ ((ARedBloodCell*)Obj)->Collided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Collided = { UE4CodeGen_Private::EPropertyClass::Bool, "Collided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARedBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Collided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Collided_MetaData, ARRAY_COUNT(NewProp_Collided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Speed at which the cell moves" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellMovementDirection_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Direction the cell's moving in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CellMovementDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "CellMovementDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, CellMovementDirection), Z_Construct_UEnum_BloodGame_MovementDirectionEnum, METADATA_PARAMS(NewProp_CellMovementDirection_MetaData, ARRAY_COUNT(NewProp_CellMovementDirection_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CellMovementDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSwayCount_MetaData[] = {
				{ "ModuleRelativePath", "RedBloodCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalSwayCount = { UE4CodeGen_Private::EPropertyClass::Int, "HorizontalSwayCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, HorizontalSwayCount), METADATA_PARAMS(NewProp_HorizontalSwayCount_MetaData, ARRAY_COUNT(NewProp_HorizontalSwayCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSwayCount_MetaData[] = {
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "How far the cell has swayed so far" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalSwayCount = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalSwayCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, VerticalSwayCount), METADATA_PARAMS(NewProp_VerticalSwayCount_MetaData, ARRAY_COUNT(NewProp_VerticalSwayCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSwayDestination_MetaData[] = {
				{ "ModuleRelativePath", "RedBloodCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalSwayDestination = { UE4CodeGen_Private::EPropertyClass::Int, "HorizontalSwayDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, HorizontalSwayDestination), METADATA_PARAMS(NewProp_HorizontalSwayDestination_MetaData, ARRAY_COUNT(NewProp_HorizontalSwayDestination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSwayDestination_MetaData[] = {
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Destination the cell's swaying will end at" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalSwayDestination = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalSwayDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, VerticalSwayDestination), METADATA_PARAMS(NewProp_VerticalSwayDestination_MetaData, ARRAY_COUNT(NewProp_VerticalSwayDestination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSwaySeverity_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalSwaySeverity = { UE4CodeGen_Private::EPropertyClass::Int, "HorizontalSwaySeverity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, HorizontalSwaySeverity), METADATA_PARAMS(NewProp_HorizontalSwaySeverity_MetaData, ARRAY_COUNT(NewProp_HorizontalSwaySeverity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSwaySeverity_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "How far the cell drifts" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalSwaySeverity = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalSwaySeverity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARedBloodCell, VerticalSwaySeverity), METADATA_PARAMS(NewProp_VerticalSwaySeverity_MetaData, ARRAY_COUNT(NewProp_VerticalSwaySeverity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSway_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
			};
#endif
			auto NewProp_HorizontalSway_SetBit = [](void* Obj){ ((ARedBloodCell*)Obj)->HorizontalSway = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HorizontalSway = { UE4CodeGen_Private::EPropertyClass::Bool, "HorizontalSway", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARedBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HorizontalSway_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HorizontalSway_MetaData, ARRAY_COUNT(NewProp_HorizontalSway_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSway_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Whether or not the cell difts" },
			};
#endif
			auto NewProp_VerticalSway_SetBit = [](void* Obj){ ((ARedBloodCell*)Obj)->VerticalSway = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VerticalSway = { UE4CodeGen_Private::EPropertyClass::Bool, "VerticalSway", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARedBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_VerticalSway_SetBit)>::SetBit, METADATA_PARAMS(NewProp_VerticalSway_MetaData, ARRAY_COUNT(NewProp_VerticalSway_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyChanges_MetaData[] = {
				{ "Category", "Red Blood Cell" },
				{ "ModuleRelativePath", "RedBloodCell.h" },
				{ "ToolTip", "Applies all the modified changed" },
			};
#endif
			auto NewProp_ApplyChanges_SetBit = [](void* Obj){ ((ARedBloodCell*)Obj)->ApplyChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARedBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyChanges_MetaData, ARRAY_COUNT(NewProp_ApplyChanges_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSprites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSprites_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellMovementDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellMovementDirection_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalSwayCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalSwayCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalSwayDestination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalSwayDestination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalSwaySeverity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalSwaySeverity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalSway,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalSway,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyChanges,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARedBloodCell>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARedBloodCell::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedBloodCell, 1323330807);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedBloodCell(Z_Construct_UClass_ARedBloodCell, &ARedBloodCell::StaticClass, TEXT("/Script/BloodGame"), TEXT("ARedBloodCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedBloodCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
