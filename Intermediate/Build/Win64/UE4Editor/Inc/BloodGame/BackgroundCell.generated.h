// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BLOODGAME_BackgroundCell_generated_h
#error "BackgroundCell.generated.h already included, missing '#pragma once' in BackgroundCell.h"
#endif
#define BLOODGAME_BackgroundCell_generated_h

#define Team9_Source_BloodGame_BackgroundCell_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyActorEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_BackgroundCell_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyActorEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_BackgroundCell_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABackgroundCell(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ABackgroundCell(); \
public: \
	DECLARE_CLASS(ABackgroundCell, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ABackgroundCell) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_BackgroundCell_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABackgroundCell(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ABackgroundCell(); \
public: \
	DECLARE_CLASS(ABackgroundCell, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ABackgroundCell) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_BackgroundCell_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABackgroundCell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABackgroundCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackgroundCell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackgroundCell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABackgroundCell(ABackgroundCell&&); \
	NO_API ABackgroundCell(const ABackgroundCell&); \
public:


#define Team9_Source_BloodGame_BackgroundCell_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABackgroundCell(ABackgroundCell&&); \
	NO_API ABackgroundCell(const ABackgroundCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackgroundCell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackgroundCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABackgroundCell)


#define Team9_Source_BloodGame_BackgroundCell_h_15_PRIVATE_PROPERTY_OFFSET
#define Team9_Source_BloodGame_BackgroundCell_h_12_PROLOG
#define Team9_Source_BloodGame_BackgroundCell_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_BackgroundCell_h_15_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_BackgroundCell_h_15_RPC_WRAPPERS \
	Team9_Source_BloodGame_BackgroundCell_h_15_INCLASS \
	Team9_Source_BloodGame_BackgroundCell_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team9_Source_BloodGame_BackgroundCell_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_BackgroundCell_h_15_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_BackgroundCell_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Team9_Source_BloodGame_BackgroundCell_h_15_INCLASS_NO_PURE_DECLS \
	Team9_Source_BloodGame_BackgroundCell_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team9_Source_BloodGame_BackgroundCell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
