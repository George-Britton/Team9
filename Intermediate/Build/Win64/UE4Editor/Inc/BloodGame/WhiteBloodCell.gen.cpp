// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WhiteBloodCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhiteBloodCell() {}
// Cross Module References
	BLOODGAME_API UEnum* Z_Construct_UEnum_BloodGame_ShieldOrientationEnum();
	UPackage* Z_Construct_UPackage__Script_BloodGame();
	BLOODGAME_API UClass* Z_Construct_UClass_AWhiteBloodCell_NoRegister();
	BLOODGAME_API UClass* Z_Construct_UClass_AWhiteBloodCell();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	BLOODGAME_API UFunction* Z_Construct_UFunction_AWhiteBloodCell_NotifyHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BLOODGAME_API UFunction* Z_Construct_UFunction_AWhiteBloodCell_RestartMovement();
	BLOODGAME_API UEnum* Z_Construct_UEnum_BloodGame_MovementDirectionEnum();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	static UEnum* ShieldOrientationEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BloodGame_ShieldOrientationEnum, Z_Construct_UPackage__Script_BloodGame(), TEXT("ShieldOrientationEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ShieldOrientationEnum(ShieldOrientationEnum_StaticEnum, TEXT("/Script/BloodGame"), TEXT("ShieldOrientationEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BloodGame_ShieldOrientationEnum_CRC() { return 3942289086U; }
	UEnum* Z_Construct_UEnum_BloodGame_ShieldOrientationEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BloodGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ShieldOrientationEnum"), 0, Get_Z_Construct_UEnum_BloodGame_ShieldOrientationEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ShieldOrientationEnum::ShieldOrientation_Up", (int64)ShieldOrientationEnum::ShieldOrientation_Up },
				{ "ShieldOrientationEnum::ShieldOrientation_Down", (int64)ShieldOrientationEnum::ShieldOrientation_Down },
				{ "ShieldOrientationEnum::ShieldOrientation_Left", (int64)ShieldOrientationEnum::ShieldOrientation_Left },
				{ "ShieldOrientationEnum::ShieldOrientation_Right", (int64)ShieldOrientationEnum::ShieldOrientation_Right },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ShieldOrientation_Down.DisplayName", "Down" },
				{ "ShieldOrientation_Left.DisplayName", "Left" },
				{ "ShieldOrientation_Right.DisplayName", "Right" },
				{ "ShieldOrientation_Up.DisplayName", "Up" },
				{ "ToolTip", "Enum for the placement of the shield relative to the cell" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BloodGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ShieldOrientationEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ShieldOrientationEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AWhiteBloodCell::StaticRegisterNativesAWhiteBloodCell()
	{
		UClass* Class = AWhiteBloodCell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyHit", &AWhiteBloodCell::execNotifyHit },
			{ "RestartMovement", &AWhiteBloodCell::execRestartMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWhiteBloodCell_NotifyHit()
	{
		struct WhiteBloodCell_eventNotifyHit_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			bool bSelfMoved;
			FVector HitLocation;
			FVector HitNormal;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "HitNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSelfMoved_SetBit = [](void* Obj){ ((WhiteBloodCell_eventNotifyHit_Parms*)Obj)->bSelfMoved = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelfMoved", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WhiteBloodCell_eventNotifyHit_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelfMoved_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp = { UE4CodeGen_Private::EPropertyClass::Object, "MyComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WhiteBloodCell_eventNotifyHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_MyComp_MetaData, ARRAY_COUNT(NewProp_MyComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelfMoved,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Other,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Called when the cell hits anything" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteBloodCell, "NotifyHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(WhiteBloodCell_eventNotifyHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWhiteBloodCell_RestartMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Called during runtime to restart the cell's movement post-bounce" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteBloodCell, "RestartMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWhiteBloodCell_NoRegister()
	{
		return AWhiteBloodCell::StaticClass();
	}
	UClass* Z_Construct_UClass_AWhiteBloodCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_BloodGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWhiteBloodCell_NotifyHit, "NotifyHit" }, // 3298247952
				{ &Z_Construct_UFunction_AWhiteBloodCell_RestartMovement, "RestartMovement" }, // 2564146023
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "WhiteBloodCell.h" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReset_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Makes sure the movement is always reset" },
			};
#endif
			auto NewProp_MovementReset_SetBit = [](void* Obj){ ((AWhiteBloodCell*)Obj)->MovementReset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MovementReset = { UE4CodeGen_Private::EPropertyClass::Bool, "MovementReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWhiteBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MovementReset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MovementReset_MetaData, ARRAY_COUNT(NewProp_MovementReset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempCellDirection_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Used to save the cell's movement pre-bounce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TempCellDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "TempCellDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, TempCellDirection), Z_Construct_UEnum_BloodGame_MovementDirectionEnum, METADATA_PARAMS(NewProp_TempCellDirection_MetaData, ARRAY_COUNT(NewProp_TempCellDirection_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TempCellDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldISM_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Shield ISM component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldISM = { UE4CodeGen_Private::EPropertyClass::Object, "ShieldISM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, ShieldISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ShieldISM_MetaData, ARRAY_COUNT(NewProp_ShieldISM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceStrength_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Strength with which the cell hits the player" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceStrength = { UE4CodeGen_Private::EPropertyClass::Float, "BounceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, BounceStrength), METADATA_PARAMS(NewProp_BounceStrength_MetaData, ARRAY_COUNT(NewProp_BounceStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Static mesh for the shield" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shield = { UE4CodeGen_Private::EPropertyClass::Object, "Shield", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, Shield), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Shield_MetaData, ARRAY_COUNT(NewProp_Shield_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSprite_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Sprite that is spawned to represent the cell" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellSprite = { UE4CodeGen_Private::EPropertyClass::Object, "CellSprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, CellSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(NewProp_CellSprite_MetaData, ARRAY_COUNT(NewProp_CellSprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Sprite body for the cell" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite = { UE4CodeGen_Private::EPropertyClass::Object, "Sprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(NewProp_Sprite_MetaData, ARRAY_COUNT(NewProp_Sprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collided_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Whether or not the cell has collided with something" },
			};
#endif
			auto NewProp_Collided_SetBit = [](void* Obj){ ((AWhiteBloodCell*)Obj)->Collided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Collided = { UE4CodeGen_Private::EPropertyClass::Bool, "Collided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWhiteBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Collided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Collided_MetaData, ARRAY_COUNT(NewProp_Collided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Speed at which the cell moves" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Whether or not the cell is moving" },
			};
#endif
			auto NewProp_IsMoving_SetBit = [](void* Obj){ ((AWhiteBloodCell*)Obj)->IsMoving = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMoving = { UE4CodeGen_Private::EPropertyClass::Bool, "IsMoving", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWhiteBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsMoving_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsMoving_MetaData, ARRAY_COUNT(NewProp_IsMoving_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellMovementDirection_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Direction the cell's moving in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CellMovementDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "CellMovementDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, CellMovementDirection), Z_Construct_UEnum_BloodGame_MovementDirectionEnum, METADATA_PARAMS(NewProp_CellMovementDirection_MetaData, ARRAY_COUNT(NewProp_CellMovementDirection_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CellMovementDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldOrientation_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Chosen location of the shield relative to the cell" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShieldOrientation = { UE4CodeGen_Private::EPropertyClass::Enum, "ShieldOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, ShieldOrientation), Z_Construct_UEnum_BloodGame_ShieldOrientationEnum, METADATA_PARAMS(NewProp_ShieldOrientation_MetaData, ARRAY_COUNT(NewProp_ShieldOrientation_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShieldOrientation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSwayCount_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalSwayCount = { UE4CodeGen_Private::EPropertyClass::Int, "HorizontalSwayCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, HorizontalSwayCount), METADATA_PARAMS(NewProp_HorizontalSwayCount_MetaData, ARRAY_COUNT(NewProp_HorizontalSwayCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSwayCount_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "How far the cell has swayed so far" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalSwayCount = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalSwayCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, VerticalSwayCount), METADATA_PARAMS(NewProp_VerticalSwayCount_MetaData, ARRAY_COUNT(NewProp_VerticalSwayCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSwayDestination_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalSwayDestination = { UE4CodeGen_Private::EPropertyClass::Int, "HorizontalSwayDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, HorizontalSwayDestination), METADATA_PARAMS(NewProp_HorizontalSwayDestination_MetaData, ARRAY_COUNT(NewProp_HorizontalSwayDestination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSwayDestination_MetaData[] = {
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Destination the cell's swaying will end at" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalSwayDestination = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalSwayDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, VerticalSwayDestination), METADATA_PARAMS(NewProp_VerticalSwayDestination_MetaData, ARRAY_COUNT(NewProp_VerticalSwayDestination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSwaySeverity_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalSwaySeverity = { UE4CodeGen_Private::EPropertyClass::Int, "HorizontalSwaySeverity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, HorizontalSwaySeverity), METADATA_PARAMS(NewProp_HorizontalSwaySeverity_MetaData, ARRAY_COUNT(NewProp_HorizontalSwaySeverity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSwaySeverity_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "How far the cell drifts" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalSwaySeverity = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalSwaySeverity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteBloodCell, VerticalSwaySeverity), METADATA_PARAMS(NewProp_VerticalSwaySeverity_MetaData, ARRAY_COUNT(NewProp_VerticalSwaySeverity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSway_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
			};
#endif
			auto NewProp_HorizontalSway_SetBit = [](void* Obj){ ((AWhiteBloodCell*)Obj)->HorizontalSway = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HorizontalSway = { UE4CodeGen_Private::EPropertyClass::Bool, "HorizontalSway", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWhiteBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HorizontalSway_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HorizontalSway_MetaData, ARRAY_COUNT(NewProp_HorizontalSway_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSway_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Whether or not the cell difts" },
			};
#endif
			auto NewProp_VerticalSway_SetBit = [](void* Obj){ ((AWhiteBloodCell*)Obj)->VerticalSway = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VerticalSway = { UE4CodeGen_Private::EPropertyClass::Bool, "VerticalSway", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWhiteBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_VerticalSway_SetBit)>::SetBit, METADATA_PARAMS(NewProp_VerticalSway_MetaData, ARRAY_COUNT(NewProp_VerticalSway_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyChanges_MetaData[] = {
				{ "Category", "White Blood Cell" },
				{ "ModuleRelativePath", "WhiteBloodCell.h" },
				{ "ToolTip", "Applies all the modified changed" },
			};
#endif
			auto NewProp_ApplyChanges_SetBit = [](void* Obj){ ((AWhiteBloodCell*)Obj)->ApplyChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWhiteBloodCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyChanges_MetaData, ARRAY_COUNT(NewProp_ApplyChanges_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempCellDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempCellDirection_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShieldISM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BounceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shield,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsMoving,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellMovementDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellMovementDirection_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShieldOrientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShieldOrientation_Underlying,
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
				TCppClassTypeTraits<AWhiteBloodCell>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWhiteBloodCell::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AWhiteBloodCell, 1099867991);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWhiteBloodCell(Z_Construct_UClass_AWhiteBloodCell, &AWhiteBloodCell::StaticClass, TEXT("/Script/BloodGame"), TEXT("AWhiteBloodCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteBloodCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
