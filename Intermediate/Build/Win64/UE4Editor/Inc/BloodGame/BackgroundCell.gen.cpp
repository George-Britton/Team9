// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BackgroundCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundCell() {}
// Cross Module References
	BLOODGAME_API UClass* Z_Construct_UClass_ABackgroundCell_NoRegister();
	BLOODGAME_API UClass* Z_Construct_UClass_ABackgroundCell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BloodGame();
	BLOODGAME_API UFunction* Z_Construct_UFunction_ABackgroundCell_NotifyActorEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	void ABackgroundCell::StaticRegisterNativesABackgroundCell()
	{
		UClass* Class = ABackgroundCell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyActorEndOverlap", &ABackgroundCell::execNotifyActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABackgroundCell_NotifyActorEndOverlap()
	{
		struct BackgroundCell_eventNotifyActorEndOverlap_Parms
		{
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundCell_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BackgroundCell.h" },
				{ "ToolTip", "Called when the actor stops overlapping with anything" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABackgroundCell, "NotifyActorEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BackgroundCell_eventNotifyActorEndOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABackgroundCell_NoRegister()
	{
		return ABackgroundCell::StaticClass();
	}
	UClass* Z_Construct_UClass_ABackgroundCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BloodGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABackgroundCell_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 3827798042
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BackgroundCell.h" },
				{ "ModuleRelativePath", "BackgroundCell.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSprite_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BackgroundCell.h" },
				{ "ToolTip", "Sprite that is spawned to represent the cell" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellSprite = { UE4CodeGen_Private::EPropertyClass::Object, "CellSprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ABackgroundCell, CellSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(NewProp_CellSprite_MetaData, ARRAY_COUNT(NewProp_CellSprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSpriteArray_MetaData[] = {
				{ "Category", "Background Cell" },
				{ "ModuleRelativePath", "BackgroundCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CellSpriteArray = { UE4CodeGen_Private::EPropertyClass::Array, "CellSpriteArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABackgroundCell, CellSpriteArray), METADATA_PARAMS(NewProp_CellSpriteArray_MetaData, ARRAY_COUNT(NewProp_CellSpriteArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellSpriteArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CellSpriteArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
				{ "Category", "Background Cell" },
				{ "ModuleRelativePath", "BackgroundCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RotationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABackgroundCell, RotationSpeed), METADATA_PARAMS(NewProp_RotationSpeed_MetaData, ARRAY_COUNT(NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "Background Cell" },
				{ "ModuleRelativePath", "BackgroundCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABackgroundCell, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpritePicker_MetaData[] = {
				{ "ModuleRelativePath", "BackgroundCell.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SpritePicker = { UE4CodeGen_Private::EPropertyClass::UInt32, "SpritePicker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABackgroundCell, SpritePicker), METADATA_PARAMS(NewProp_SpritePicker_MetaData, ARRAY_COUNT(NewProp_SpritePicker_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyChanges_MetaData[] = {
				{ "Category", "Background Cell" },
				{ "ModuleRelativePath", "BackgroundCell.h" },
			};
#endif
			auto NewProp_ApplyChanges_SetBit = [](void* Obj){ ((ABackgroundCell*)Obj)->ApplyChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABackgroundCell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyChanges_MetaData, ARRAY_COUNT(NewProp_ApplyChanges_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSpriteArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CellSpriteArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpritePicker,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyChanges,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABackgroundCell>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABackgroundCell::StaticClass,
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
	IMPLEMENT_CLASS(ABackgroundCell, 3829281285);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABackgroundCell(Z_Construct_UClass_ABackgroundCell, &ABackgroundCell::StaticClass, TEXT("/Script/BloodGame"), TEXT("ABackgroundCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABackgroundCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
