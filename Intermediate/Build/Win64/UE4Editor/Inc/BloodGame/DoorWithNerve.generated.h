// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BLOODGAME_DoorWithNerve_generated_h
#error "DoorWithNerve.generated.h already included, missing '#pragma once' in DoorWithNerve.h"
#endif
#define BLOODGAME_DoorWithNerve_generated_h

#define Team9_Source_BloodGame_DoorWithNerve_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_DoorWithNerve_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_DoorWithNerve_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorWithNerve(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ADoorWithNerve(); \
public: \
	DECLARE_CLASS(ADoorWithNerve, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ADoorWithNerve) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_DoorWithNerve_h_21_INCLASS \
private: \
	static void StaticRegisterNativesADoorWithNerve(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ADoorWithNerve(); \
public: \
	DECLARE_CLASS(ADoorWithNerve, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ADoorWithNerve) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_DoorWithNerve_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorWithNerve(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorWithNerve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorWithNerve); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorWithNerve); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorWithNerve(ADoorWithNerve&&); \
	NO_API ADoorWithNerve(const ADoorWithNerve&); \
public:


#define Team9_Source_BloodGame_DoorWithNerve_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorWithNerve(ADoorWithNerve&&); \
	NO_API ADoorWithNerve(const ADoorWithNerve&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorWithNerve); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorWithNerve); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorWithNerve)


#define Team9_Source_BloodGame_DoorWithNerve_h_21_PRIVATE_PROPERTY_OFFSET
#define Team9_Source_BloodGame_DoorWithNerve_h_18_PROLOG
#define Team9_Source_BloodGame_DoorWithNerve_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_DoorWithNerve_h_21_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_DoorWithNerve_h_21_RPC_WRAPPERS \
	Team9_Source_BloodGame_DoorWithNerve_h_21_INCLASS \
	Team9_Source_BloodGame_DoorWithNerve_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team9_Source_BloodGame_DoorWithNerve_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_DoorWithNerve_h_21_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_DoorWithNerve_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Team9_Source_BloodGame_DoorWithNerve_h_21_INCLASS_NO_PURE_DECLS \
	Team9_Source_BloodGame_DoorWithNerve_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team9_Source_BloodGame_DoorWithNerve_h


#define FOREACH_ENUM_DOORSTATEENUM(op) \
	op(DoorStateEnum::DoorState_Opening) \
	op(DoorStateEnum::DoorState_Closing) \
	op(DoorStateEnum::DoorState_Open) \
	op(DoorStateEnum::DoorState_Closed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
