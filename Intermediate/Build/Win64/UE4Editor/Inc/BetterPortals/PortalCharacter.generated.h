// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
#ifdef BETTERPORTALS_PortalCharacter_generated_h
#error "PortalCharacter.generated.h already included, missing '#pragma once' in PortalCharacter.h"
#endif
#define BETTERPORTALS_PortalCharacter_generated_h

#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrouchSettings_Statics; \
	BETTERPORTALS_API static class UScriptStruct* StaticStruct();


template<> BETTERPORTALS_API UScriptStruct* StaticStruct<struct FCrouchSettings>();

#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_SPARSE_DATA
#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPortalTraceSingleExample); \
	DECLARE_FUNCTION(execUpdateMouseMovement); \
	DECLARE_FUNCTION(execReturnToOrientation); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward); \
	DECLARE_FUNCTION(execFireAction); \
	DECLARE_FUNCTION(execReleaseInteractable); \
	DECLARE_FUNCTION(execInteractAction); \
	DECLARE_FUNCTION(execCrouchLerp); \
	DECLARE_FUNCTION(execCrouchAction); \
	DECLARE_FUNCTION(execRunAction); \
	DECLARE_FUNCTION(execJumpAction);


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPortalTraceSingleExample); \
	DECLARE_FUNCTION(execUpdateMouseMovement); \
	DECLARE_FUNCTION(execReturnToOrientation); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward); \
	DECLARE_FUNCTION(execFireAction); \
	DECLARE_FUNCTION(execReleaseInteractable); \
	DECLARE_FUNCTION(execInteractAction); \
	DECLARE_FUNCTION(execCrouchLerp); \
	DECLARE_FUNCTION(execCrouchAction); \
	DECLARE_FUNCTION(execRunAction); \
	DECLARE_FUNCTION(execJumpAction);


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalCharacter(); \
	friend struct Z_Construct_UClass_APortalCharacter_Statics; \
public: \
	DECLARE_CLASS(APortalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterPortals"), NO_API) \
	DECLARE_SERIALIZER(APortalCharacter)


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_INCLASS \
private: \
	static void StaticRegisterNativesAPortalCharacter(); \
	friend struct Z_Construct_UClass_APortalCharacter_Statics; \
public: \
	DECLARE_CLASS(APortalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterPortals"), NO_API) \
	DECLARE_SERIALIZER(APortalCharacter)


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalCharacter(APortalCharacter&&); \
	NO_API APortalCharacter(const APortalCharacter&); \
public:


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalCharacter(APortalCharacter&&); \
	NO_API APortalCharacter(const APortalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortalCharacter)


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_36_PROLOG
#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_SPARSE_DATA \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_RPC_WRAPPERS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_INCLASS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_SPARSE_DATA \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_INCLASS_NO_PURE_DECLS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BETTERPORTALS_API UClass* StaticClass<class APortalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Plugins_BetterPortals_Source_BetterPortals_PortalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
