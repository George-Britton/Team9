// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOODGAME_RedBloodCell_generated_h
#error "RedBloodCell.generated.h already included, missing '#pragma once' in RedBloodCell.h"
#endif
#define BLOODGAME_RedBloodCell_generated_h

#define Team9_Source_BloodGame_RedBloodCell_h_22_RPC_WRAPPERS
#define Team9_Source_BloodGame_RedBloodCell_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Team9_Source_BloodGame_RedBloodCell_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARedBloodCell(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ARedBloodCell(); \
public: \
	DECLARE_CLASS(ARedBloodCell, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ARedBloodCell) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_RedBloodCell_h_22_INCLASS \
private: \
	static void StaticRegisterNativesARedBloodCell(); \
	friend BLOODGAME_API class UClass* Z_Construct_UClass_ARedBloodCell(); \
public: \
	DECLARE_CLASS(ARedBloodCell, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BloodGame"), NO_API) \
	DECLARE_SERIALIZER(ARedBloodCell) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Team9_Source_BloodGame_RedBloodCell_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARedBloodCell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARedBloodCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedBloodCell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedBloodCell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedBloodCell(ARedBloodCell&&); \
	NO_API ARedBloodCell(const ARedBloodCell&); \
public:


#define Team9_Source_BloodGame_RedBloodCell_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedBloodCell(ARedBloodCell&&); \
	NO_API ARedBloodCell(const ARedBloodCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedBloodCell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedBloodCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARedBloodCell)


#define Team9_Source_BloodGame_RedBloodCell_h_22_PRIVATE_PROPERTY_OFFSET
#define Team9_Source_BloodGame_RedBloodCell_h_19_PROLOG
#define Team9_Source_BloodGame_RedBloodCell_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_RedBloodCell_h_22_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_RedBloodCell_h_22_RPC_WRAPPERS \
	Team9_Source_BloodGame_RedBloodCell_h_22_INCLASS \
	Team9_Source_BloodGame_RedBloodCell_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team9_Source_BloodGame_RedBloodCell_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team9_Source_BloodGame_RedBloodCell_h_22_PRIVATE_PROPERTY_OFFSET \
	Team9_Source_BloodGame_RedBloodCell_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Team9_Source_BloodGame_RedBloodCell_h_22_INCLASS_NO_PURE_DECLS \
	Team9_Source_BloodGame_RedBloodCell_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team9_Source_BloodGame_RedBloodCell_h


#define FOREACH_ENUM_MOVEMENTDIRECTIONENUM(op) \
	op(MovementDirectionEnum::UpMovement) \
	op(MovementDirectionEnum::DownMovement) \
	op(MovementDirectionEnum::LeftMovement) \
	op(MovementDirectionEnum::RightMovement) \
	op(MovementDirectionEnum::NoMovement) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
