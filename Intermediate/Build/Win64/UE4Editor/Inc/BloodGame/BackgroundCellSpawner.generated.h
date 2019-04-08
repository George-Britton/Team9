// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOODGAME_BackgroundCellSpawner_generated_h
#error "BackgroundCellSpawner.generated.h already included, missing '#pragma once' in BackgroundCellSpawner.h"
#endif
#define BLOODGAME_BackgroundCellSpawner_generated_h

#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABackgroundCellSpawner(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ABackgroundCellSpawner(); \
public: \
	DECLARE_CLASS(ABackgroundCellSpawner, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ABackgroundCellSpawner) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABackgroundCellSpawner(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ABackgroundCellSpawner(); \
public: \
	DECLARE_CLASS(ABackgroundCellSpawner, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ABackgroundCellSpawner) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABackgroundCellSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABackgroundCellSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackgroundCellSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackgroundCellSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABackgroundCellSpawner(ABackgroundCellSpawner&&); \
	NO_API ABackgroundCellSpawner(const ABackgroundCellSpawner&); \
public:


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABackgroundCellSpawner(ABackgroundCellSpawner&&); \
	NO_API ABackgroundCellSpawner(const ABackgroundCellSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackgroundCellSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackgroundCellSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABackgroundCellSpawner)


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_PRIVATE_PROPERTY_OFFSET
#define Team9_Source_BloodGame_BackgroundCellSpawner_h_10_PROLOG
#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_RPC_WRAPPERS \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_INCLASS \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team9_Source_BloodGame_BackgroundCellSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_INCLASS_NO_PURE_DECLS \
	Team9_Source_BloodGame_BackgroundCellSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team9_Source_BloodGame_BackgroundCellSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
