// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BackgroundCellSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundCellSpawner() {}
// Cross Module References
	BLOODGAME_API UClass* Z_Construct_UClass_ABackgroundCellSpawner_NoRegister();
	BLOODGAME_API UClass* Z_Construct_UClass_ABackgroundCellSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BloodGame();
	BLOODGAME_API UFunction* Z_Construct_UFunction_ABackgroundCellSpawner_Spawn();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void ABackgroundCellSpawner::StaticRegisterNativesABackgroundCellSpawner()
	{
		UClass* Class = ABackgroundCellSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &ABackgroundCellSpawner::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABackgroundCellSpawner_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Spawner" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABackgroundCellSpawner, "Spawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABackgroundCellSpawner_NoRegister()
	{
		return ABackgroundCellSpawner::StaticClass();
	}
	UClass* Z_Construct_UClass_ABackgroundCellSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BloodGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABackgroundCellSpawner_Spawn, "Spawn" }, // 1711105536
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BackgroundCellSpawner.h" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningTimer_MetaData[] = {
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawningTimer = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawningTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABackgroundCellSpawner, SpawningTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_SpawningTimer_MetaData, ARRAY_COUNT(NewProp_SpawningTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedCellSpriteArray_MetaData[] = {
				{ "Category", "Spawner" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedCellSpriteArray = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnedCellSpriteArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABackgroundCellSpawner, SpawnedCellSpriteArray), METADATA_PARAMS(NewProp_SpawnedCellSpriteArray_MetaData, ARRAY_COUNT(NewProp_SpawnedCellSpriteArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedCellSpriteArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnedCellSpriteArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeBox_MetaData[] = {
				{ "Category", "Spawner" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeBox = { UE4CodeGen_Private::EPropertyClass::Object, "LifeBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ABackgroundCellSpawner, LifeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_LifeBox_MetaData, ARRAY_COUNT(NewProp_LifeBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[] = {
				{ "Category", "Spawner" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBox = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ABackgroundCellSpawner, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_SpawnBox_MetaData, ARRAY_COUNT(NewProp_SpawnBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
				{ "Category", "Spawner" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Cell = { UE4CodeGen_Private::EPropertyClass::Class, "Cell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABackgroundCellSpawner, Cell), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Cell_MetaData, ARRAY_COUNT(NewProp_Cell_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimeInSeconds_MetaData[] = {
				{ "Category", "Spawner" },
				{ "ModuleRelativePath", "BackgroundCellSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABackgroundCellSpawner, SpawnTimeInSeconds), METADATA_PARAMS(NewProp_SpawnTimeInSeconds_MetaData, ARRAY_COUNT(NewProp_SpawnTimeInSeconds_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawningTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedCellSpriteArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnedCellSpriteArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LifeBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cell,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnTimeInSeconds,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABackgroundCellSpawner>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABackgroundCellSpawner::StaticClass,
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
	IMPLEMENT_CLASS(ABackgroundCellSpawner, 1324867320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABackgroundCellSpawner(Z_Construct_UClass_ABackgroundCellSpawner, &ABackgroundCellSpawner::StaticClass, TEXT("/Script/BloodGame"), TEXT("ABackgroundCellSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABackgroundCellSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
