// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor; class AActor;
struct FVector;
struct FRotator;
class APortal;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BETTERPORTALS_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define BETTERPORTALS_Portal_generated_h

#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPostPhysicsTick_Statics; \
	BETTERPORTALS_API static class UScriptStruct* StaticStruct(); \
	typedef FActorTickFunction Super;


template<> BETTERPORTALS_API UScriptStruct* StaticStruct<struct FPostPhysicsTick>();

#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackedActor_Statics; \
	BETTERPORTALS_API static class UScriptStruct* StaticStruct();


template<> BETTERPORTALS_API UScriptStruct* StaticStruct<struct FTrackedActor>();

#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_SPARSE_DATA
#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDuplicateMap); \
	DECLARE_FUNCTION(execGetNumberOfTrackedActors); \
	DECLARE_FUNCTION(execLocationInsidePortal); \
	DECLARE_FUNCTION(execConvertRotationToPortal); \
	DECLARE_FUNCTION(execConvertLocationToPortal); \
	DECLARE_FUNCTION(execConvertDirectionToTarget); \
	DECLARE_FUNCTION(execIsInfront); \
	DECLARE_FUNCTION(execClearPortalView); \
	DECLARE_FUNCTION(execUpdatePortalView); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapStart); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapStart); \
	DECLARE_FUNCTION(execSetup);


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDuplicateMap); \
	DECLARE_FUNCTION(execGetNumberOfTrackedActors); \
	DECLARE_FUNCTION(execLocationInsidePortal); \
	DECLARE_FUNCTION(execConvertRotationToPortal); \
	DECLARE_FUNCTION(execConvertLocationToPortal); \
	DECLARE_FUNCTION(execConvertDirectionToTarget); \
	DECLARE_FUNCTION(execIsInfront); \
	DECLARE_FUNCTION(execClearPortalView); \
	DECLARE_FUNCTION(execUpdatePortalView); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapStart); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapStart); \
	DECLARE_FUNCTION(execSetup);


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterPortals"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_INCLASS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterPortals"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public:


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal)


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__portalController() { return STRUCT_OFFSET(APortal, portalController); } \
	FORCEINLINE static uint32 __PPO__portalPawn() { return STRUCT_OFFSET(APortal, portalPawn); } \
	FORCEINLINE static uint32 __PPO__portalCharacter() { return STRUCT_OFFSET(APortal, portalCharacter); } \
	FORCEINLINE static uint32 __PPO__renderTarget() { return STRUCT_OFFSET(APortal, renderTarget); } \
	FORCEINLINE static uint32 __PPO__renderTargets() { return STRUCT_OFFSET(APortal, renderTargets); } \
	FORCEINLINE static uint32 __PPO__portalMaterial() { return STRUCT_OFFSET(APortal, portalMaterial); } \
	FORCEINLINE static uint32 __PPO__trackedActors() { return STRUCT_OFFSET(APortal, trackedActors); } \
	FORCEINLINE static uint32 __PPO__duplicateMap() { return STRUCT_OFFSET(APortal, duplicateMap); }


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_67_PROLOG
#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_SPARSE_DATA \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_RPC_WRAPPERS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_INCLASS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_SPARSE_DATA \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_INCLASS_NO_PURE_DECLS \
	MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BETTERPORTALS_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Plugins_BetterPortals_Source_BetterPortals_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
