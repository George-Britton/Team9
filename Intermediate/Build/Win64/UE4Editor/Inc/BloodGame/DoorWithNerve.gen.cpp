// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorWithNerve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorWithNerve() {}
// Cross Module References
	BLOODGAME_API UEnum* Z_Construct_UEnum_BloodGame_DoorStateEnum();
	UPackage* Z_Construct_UPackage__Script_BloodGame();
	BLOODGAME_API UClass* Z_Construct_UClass_ADoorWithNerve_NoRegister();
	BLOODGAME_API UClass* Z_Construct_UClass_ADoorWithNerve();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BLOODGAME_API UFunction* Z_Construct_UFunction_ADoorWithNerve_NotifyHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* DoorStateEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BloodGame_DoorStateEnum, Z_Construct_UPackage__Script_BloodGame(), TEXT("DoorStateEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DoorStateEnum(DoorStateEnum_StaticEnum, TEXT("/Script/BloodGame"), TEXT("DoorStateEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BloodGame_DoorStateEnum_CRC() { return 3683682231U; }
	UEnum* Z_Construct_UEnum_BloodGame_DoorStateEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BloodGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DoorStateEnum"), 0, Get_Z_Construct_UEnum_BloodGame_DoorStateEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DoorStateEnum::DoorState_Opening", (int64)DoorStateEnum::DoorState_Opening },
				{ "DoorStateEnum::DoorState_Closing", (int64)DoorStateEnum::DoorState_Closing },
				{ "DoorStateEnum::DoorState_Open", (int64)DoorStateEnum::DoorState_Open },
				{ "DoorStateEnum::DoorState_Closed", (int64)DoorStateEnum::DoorState_Closed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DoorState_Closed.DisplayName", "Closed" },
				{ "DoorState_Closing.DisplayName", "Closing" },
				{ "DoorState_Open.DisplayName", "Open" },
				{ "DoorState_Opening.DisplayName", "Opening" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Enum for the movement state of the doors" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BloodGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"DoorStateEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"DoorStateEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ADoorWithNerve::StaticRegisterNativesADoorWithNerve()
	{
		UClass* Class = ADoorWithNerve::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyHit", &ADoorWithNerve::execNotifyHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADoorWithNerve_NotifyHit()
	{
		struct DoorWithNerve_eventNotifyHit_Parms
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
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "HitNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSelfMoved_SetBit = [](void* Obj){ ((DoorWithNerve_eventNotifyHit_Parms*)Obj)->bSelfMoved = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelfMoved", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DoorWithNerve_eventNotifyHit_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelfMoved_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp = { UE4CodeGen_Private::EPropertyClass::Object, "MyComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorWithNerve_eventNotifyHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_MyComp_MetaData, ARRAY_COUNT(NewProp_MyComp_MetaData)) };
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
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Called when the doors or nerve hits anything" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorWithNerve, "NotifyHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C40401, sizeof(DoorWithNerve_eventNotifyHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorWithNerve_NoRegister()
	{
		return ADoorWithNerve::StaticClass();
	}
	UClass* Z_Construct_UClass_ADoorWithNerve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BloodGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADoorWithNerve_NotifyHit, "NotifyHit" }, // 1684001678
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DoorWithNerve.h" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NervesLastTransform_MetaData[] = {
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Used to determine if the nerve has moved" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NervesLastTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NervesLastTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, NervesLastTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_NervesLastTransform_MetaData, ARRAY_COUNT(NewProp_NervesLastTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NerveHeight_MetaData[] = {
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Value used to determine how much to grow and shrink the nerve" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NerveHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NerveHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, NerveHeight), METADATA_PARAMS(NewProp_NerveHeight_MetaData, ARRAY_COUNT(NewProp_NerveHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorState_MetaData[] = {
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Enum of the movement state of the doors" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorState = { UE4CodeGen_Private::EPropertyClass::Enum, "DoorState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, DoorState), Z_Construct_UEnum_BloodGame_DoorStateEnum, METADATA_PARAMS(NewProp_DoorState_MetaData, ARRAY_COUNT(NewProp_DoorState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NerveISM_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Instanced static mesh of the nerve" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NerveISM = { UE4CodeGen_Private::EPropertyClass::Object, "NerveISM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, NerveISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_NerveISM_MetaData, ARRAY_COUNT(NewProp_NerveISM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Instanced static mesh of the right door" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightDoor = { UE4CodeGen_Private::EPropertyClass::Object, "RightDoor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, RightDoor), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RightDoor_MetaData, ARRAY_COUNT(NewProp_RightDoor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Instanced static mesh of the left door" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftDoor = { UE4CodeGen_Private::EPropertyClass::Object, "LeftDoor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, LeftDoor), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_LeftDoor_MetaData, ARRAY_COUNT(NewProp_LeftDoor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorOpenDelay_MetaData[] = {
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "How long the doors have been open" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorOpenDelay = { UE4CodeGen_Private::EPropertyClass::Float, "DoorOpenDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, DoorOpenDelay), METADATA_PARAMS(NewProp_DoorOpenDelay_MetaData, ARRAY_COUNT(NewProp_DoorOpenDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCounter_MetaData[] = {
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Counter for opening and closing the doors" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DoorCounter = { UE4CodeGen_Private::EPropertyClass::UInt32, "DoorCounter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, DoorCounter), METADATA_PARAMS(NewProp_DoorCounter_MetaData, ARRAY_COUNT(NewProp_DoorCounter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorTransforms_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Transforms of all the sets of doors" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoorTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "DoorTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, DoorTransforms), METADATA_PARAMS(NewProp_DoorTransforms_MetaData, ARRAY_COUNT(NewProp_DoorTransforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DoorTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NerveLocation_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Transform of the nerve that controls the doors" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NerveLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NerveLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, NerveLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_NerveLocation_MetaData, ARRAY_COUNT(NewProp_NerveLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nerve_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Static mesh for the NerveISM" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nerve = { UE4CodeGen_Private::EPropertyClass::Object, "Nerve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, Nerve), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Nerve_MetaData, ARRAY_COUNT(NewProp_Nerve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Static mesh for the door ISMs" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door = { UE4CodeGen_Private::EPropertyClass::Object, "Door", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, Door), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Door_MetaData, ARRAY_COUNT(NewProp_Door_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorWidth_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "How wide the doors open" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DoorWidth = { UE4CodeGen_Private::EPropertyClass::UInt32, "DoorWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, DoorWidth), METADATA_PARAMS(NewProp_DoorWidth_MetaData, ARRAY_COUNT(NewProp_DoorWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorsOpenTime_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "How long the doors stay open in seconds" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DoorsOpenTime = { UE4CodeGen_Private::EPropertyClass::UInt32, "DoorsOpenTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, DoorsOpenTime), METADATA_PARAMS(NewProp_DoorsOpenTime_MetaData, ARRAY_COUNT(NewProp_DoorsOpenTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountOfDoors_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Number of sets of doors to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountOfDoors = { UE4CodeGen_Private::EPropertyClass::Int, "AmountOfDoors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ADoorWithNerve, AmountOfDoors), METADATA_PARAMS(NewProp_AmountOfDoors_MetaData, ARRAY_COUNT(NewProp_AmountOfDoors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Retriggerable_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Whether or not the door closes again" },
			};
#endif
			auto NewProp_Retriggerable_SetBit = [](void* Obj){ ((ADoorWithNerve*)Obj)->Retriggerable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Retriggerable = { UE4CodeGen_Private::EPropertyClass::Bool, "Retriggerable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADoorWithNerve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Retriggerable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Retriggerable_MetaData, ARRAY_COUNT(NewProp_Retriggerable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apply_MetaData[] = {
				{ "Category", "Doors" },
				{ "ModuleRelativePath", "DoorWithNerve.h" },
				{ "ToolTip", "Makes the changes to the actor when true" },
			};
#endif
			auto NewProp_Apply_SetBit = [](void* Obj){ ((ADoorWithNerve*)Obj)->Apply = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Apply = { UE4CodeGen_Private::EPropertyClass::Bool, "Apply", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADoorWithNerve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Apply_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Apply_MetaData, ARRAY_COUNT(NewProp_Apply_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NervesLastTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NerveHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NerveISM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightDoor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftDoor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorOpenDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorCounter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorTransforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorTransforms_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NerveLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nerve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Door,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorsOpenTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmountOfDoors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Retriggerable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Apply,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADoorWithNerve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADoorWithNerve::StaticClass,
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
	IMPLEMENT_CLASS(ADoorWithNerve, 3057663645);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorWithNerve(Z_Construct_UClass_ADoorWithNerve, &ADoorWithNerve::StaticClass, TEXT("/Script/BloodGame"), TEXT("ADoorWithNerve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorWithNerve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
