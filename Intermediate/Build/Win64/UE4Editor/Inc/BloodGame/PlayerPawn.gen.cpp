// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	BLOODGAME_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	BLOODGAME_API UClass* Z_Construct_UClass_APlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BloodGame();
	BLOODGAME_API UFunction* Z_Construct_UFunction_APlayerPawn_EnterCheckpoint();
	BLOODGAME_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
	BLOODGAME_API UFunction* Z_Construct_UFunction_APlayerPawn_HitShield();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BLOODGAME_API UClass* Z_Construct_UClass_AWhiteBloodCell_NoRegister();
	BLOODGAME_API UFunction* Z_Construct_UFunction_APlayerPawn_LoseControl();
	BLOODGAME_API UClass* Z_Construct_UClass_AUncontrollableZone_NoRegister();
	BLOODGAME_API UFunction* Z_Construct_UFunction_APlayerPawn_RegainControl();
// End Cross Module References
	static FName NAME_APlayerPawn_EnterCheckpoint = FName(TEXT("EnterCheckpoint"));
	void APlayerPawn::EnterCheckpoint(ACheckpoint* Checkpoint)
	{
		PlayerPawn_eventEnterCheckpoint_Parms Parms;
		Parms.Checkpoint=Checkpoint;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_EnterCheckpoint),&Parms);
	}
	static FName NAME_APlayerPawn_HitShield = FName(TEXT("HitShield"));
	void APlayerPawn::HitShield(AWhiteBloodCell* blood_cell, float BounceStrength, FVector ShieldLocation)
	{
		PlayerPawn_eventHitShield_Parms Parms;
		Parms.blood_cell=blood_cell;
		Parms.BounceStrength=BounceStrength;
		Parms.ShieldLocation=ShieldLocation;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_HitShield),&Parms);
	}
	static FName NAME_APlayerPawn_LoseControl = FName(TEXT("LoseControl"));
	void APlayerPawn::LoseControl(AUncontrollableZone* UncontrollableZone)
	{
		PlayerPawn_eventLoseControl_Parms Parms;
		Parms.UncontrollableZone=UncontrollableZone;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_LoseControl),&Parms);
	}
	static FName NAME_APlayerPawn_RegainControl = FName(TEXT("RegainControl"));
	void APlayerPawn::RegainControl(AUncontrollableZone* UncontrollableZone)
	{
		PlayerPawn_eventRegainControl_Parms Parms;
		Parms.UncontrollableZone=UncontrollableZone;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_RegainControl),&Parms);
	}
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
		UClass* Class = APlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterCheckpoint", &APlayerPawn::execEnterCheckpoint },
			{ "HitShield", &APlayerPawn::execHitShield },
			{ "LoseControl", &APlayerPawn::execLoseControl },
			{ "RegainControl", &APlayerPawn::execRegainControl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayerPawn_EnterCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Checkpoint = { UE4CodeGen_Private::EPropertyClass::Object, "Checkpoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerPawn_eventEnterCheckpoint_Parms, Checkpoint), Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Checkpoint,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlayerPawn.h" },
				{ "ToolTip", "Function called when the player enters a checkpoint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, "EnterCheckpoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(PlayerPawn_eventEnterCheckpoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerPawn_HitShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ShieldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerPawn_eventHitShield_Parms, ShieldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceStrength = { UE4CodeGen_Private::EPropertyClass::Float, "BounceStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerPawn_eventHitShield_Parms, BounceStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blood_cell = { UE4CodeGen_Private::EPropertyClass::Object, "blood_cell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerPawn_eventHitShield_Parms, blood_cell), Z_Construct_UClass_AWhiteBloodCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShieldLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BounceStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_blood_cell,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlayerPawn.h" },
				{ "ToolTip", "Function called when the player hits the white blood cells' shields" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, "HitShield", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(PlayerPawn_eventHitShield_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerPawn_LoseControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncontrollableZone = { UE4CodeGen_Private::EPropertyClass::Object, "UncontrollableZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerPawn_eventLoseControl_Parms, UncontrollableZone), Z_Construct_UClass_AUncontrollableZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncontrollableZone,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlayerPawn.h" },
				{ "ToolTip", "Function called when the player enters the uncontrollable zones" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, "LoseControl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(PlayerPawn_eventLoseControl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerPawn_RegainControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncontrollableZone = { UE4CodeGen_Private::EPropertyClass::Object, "UncontrollableZone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerPawn_eventRegainControl_Parms, UncontrollableZone), Z_Construct_UClass_AUncontrollableZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncontrollableZone,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PlayerPawn.h" },
				{ "ToolTip", "Funtion called when the player exits the uncontrollable zones" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, "RegainControl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(PlayerPawn_eventRegainControl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_BloodGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayerPawn_EnterCheckpoint, "EnterCheckpoint" }, // 2215000691
				{ &Z_Construct_UFunction_APlayerPawn_HitShield, "HitShield" }, // 3052417118
				{ &Z_Construct_UFunction_APlayerPawn_LoseControl, "LoseControl" }, // 4055824016
				{ &Z_Construct_UFunction_APlayerPawn_RegainControl, "RegainControl" }, // 3671186427
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PlayerPawn.h" },
				{ "ModuleRelativePath", "PlayerPawn.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawn, 315463413);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawn(Z_Construct_UClass_APlayerPawn, &APlayerPawn::StaticClass, TEXT("/Script/BloodGame"), TEXT("APlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
