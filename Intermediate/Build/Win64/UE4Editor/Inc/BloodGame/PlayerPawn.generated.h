// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACheckpoint;
class AUncontrollableZone;
class AWhiteBloodCell;
struct FVector;
#ifdef BLOODGAME_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define BLOODGAME_PlayerPawn_generated_h

#define Team9_Source_BloodGame_PlayerPawn_h_17_RPC_WRAPPERS \
	virtual void EnterCheckpoint_Implementation(ACheckpoint* Checkpoint); \
	virtual void RegainControl_Implementation(AUncontrollableZone* UncontrollableZone); \
	virtual void LoseControl_Implementation(AUncontrollableZone* UncontrollableZone); \
	virtual void HitShield_Implementation(AWhiteBloodCell* blood_cell, float BounceStrength, FVector ShieldLocation); \
 \
	DECLARE_FUNCTION(execEnterCheckpoint) \
	{ \
		P_GET_OBJECT(ACheckpoint,Z_Param_Checkpoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterCheckpoint_Implementation(Z_Param_Checkpoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegainControl) \
	{ \
		P_GET_OBJECT(AUncontrollableZone,Z_Param_UncontrollableZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegainControl_Implementation(Z_Param_UncontrollableZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoseControl) \
	{ \
		P_GET_OBJECT(AUncontrollableZone,Z_Param_UncontrollableZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoseControl_Implementation(Z_Param_UncontrollableZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitShield) \
	{ \
		P_GET_OBJECT(AWhiteBloodCell,Z_Param_blood_cell); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BounceStrength); \
		P_GET_STRUCT(FVector,Z_Param_ShieldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitShield_Implementation(Z_Param_blood_cell,Z_Param_BounceStrength,Z_Param_ShieldLocation); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_PlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterCheckpoint) \
	{ \
		P_GET_OBJECT(ACheckpoint,Z_Param_Checkpoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterCheckpoint_Implementation(Z_Param_Checkpoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegainControl) \
	{ \
		P_GET_OBJECT(AUncontrollableZone,Z_Param_UncontrollableZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegainControl_Implementation(Z_Param_UncontrollableZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoseControl) \
	{ \
		P_GET_OBJECT(AUncontrollableZone,Z_Param_UncontrollableZone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoseControl_Implementation(Z_Param_UncontrollableZone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitShield) \
	{ \
		P_GET_OBJECT(AWhiteBloodCell,Z_Param_blood_cell); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BounceStrength); \
		P_GET_STRUCT(FVector,Z_Param_ShieldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitShield_Implementation(Z_Param_blood_cell,Z_Param_BounceStrength,Z_Param_ShieldLocation); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_PlayerPawn_h_17_EVENT_PARMS \
	struct PlayerPawn_eventEnterCheckpoint_Parms \
	{ \
		ACheckpoint* Checkpoint; \
	}; \
	struct PlayerPawn_eventHitShield_Parms \
	{ \
		AWhiteBloodCell* blood_cell; \
		float BounceStrength; \
		FVector ShieldLocation; \
	}; \
	struct PlayerPawn_eventLoseControl_Parms \
	{ \
		AUncontrollableZone* UncontrollableZone; \
	}; \
	struct PlayerPawn_eventRegainControl_Parms \
	{ \
		AUncontrollableZone* UncontrollableZone; \
	};


#define Team9_Source_BloodGame_PlayerPawn_h_17_CALLBACK_WRAPPERS
#define Team9_Source_BloodGame_PlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_APlayerPawn(); \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_PlayerPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_APlayerPawn(); \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_PlayerPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define Team9_Source_BloodGame_PlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define Team9_Source_BloodGame_PlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET
#define Team9_Source_BloodGame_PlayerPawn_h_14_PROLOG \
	Team9_Source_BloodGame_PlayerPawn_h_17_EVENT_PARMS


#define Team9_Source_BloodGame_PlayerPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_PlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_PlayerPawn_h_17_RPC_WRAPPERS \
	Team9_Source_BloodGame_PlayerPawn_h_17_CALLBACK_WRAPPERS \
	Team9_Source_BloodGame_PlayerPawn_h_17_INCLASS \
	Team9_Source_BloodGame_PlayerPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team9_Source_BloodGame_PlayerPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_PlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_PlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Team9_Source_BloodGame_PlayerPawn_h_17_CALLBACK_WRAPPERS \
	Team9_Source_BloodGame_PlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
	Team9_Source_BloodGame_PlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team9_Source_BloodGame_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
