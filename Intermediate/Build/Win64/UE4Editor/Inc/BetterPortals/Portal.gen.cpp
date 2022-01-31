// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterPortals/Portal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortal() {}
// Cross Module References
	BETTERPORTALS_API UScriptStruct* Z_Construct_UScriptStruct_FPostPhysicsTick();
	UPackage* Z_Construct_UPackage__Script_BetterPortals();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
	BETTERPORTALS_API UScriptStruct* Z_Construct_UScriptStruct_FTrackedActor();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortal_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortalPawn_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortalCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPostPhysicsTick>() == std::is_polymorphic<FActorTickFunction>(), "USTRUCT FPostPhysicsTick cannot be polymorphic unless super FActorTickFunction is polymorphic");

class UScriptStruct* FPostPhysicsTick::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BETTERPORTALS_API uint32 Get_Z_Construct_UScriptStruct_FPostPhysicsTick_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostPhysicsTick, Z_Construct_UPackage__Script_BetterPortals(), TEXT("PostPhysicsTick"), sizeof(FPostPhysicsTick), Get_Z_Construct_UScriptStruct_FPostPhysicsTick_Hash());
	}
	return Singleton;
}
template<> BETTERPORTALS_API UScriptStruct* StaticStruct<FPostPhysicsTick>()
{
	return FPostPhysicsTick::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostPhysicsTick(FPostPhysicsTick::StaticStruct, TEXT("/Script/BetterPortals"), TEXT("PostPhysicsTick"), false, nullptr, nullptr);
static struct FScriptStruct_BetterPortals_StaticRegisterNativesFPostPhysicsTick
{
	FScriptStruct_BetterPortals_StaticRegisterNativesFPostPhysicsTick()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PostPhysicsTick")),new UScriptStruct::TCppStructOps<FPostPhysicsTick>);
	}
} ScriptStruct_BetterPortals_StaticRegisterNativesFPostPhysicsTick;
	struct Z_Construct_UScriptStruct_FPostPhysicsTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostPhysicsTick_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Post physics update tick for updating position as my pawn position is physics driven. \n * NOTE: This is irrelevant for a pawn that is not physics driven.\n * NOTE: This is always relevant way of tracking actors that are moving via physics.\n * NOTE: Important for checking the tracking state of the HMD and hands. \n */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Post physics update tick for updating position as my pawn position is physics driven.\n* NOTE: This is irrelevant for a pawn that is not physics driven.\n* NOTE: This is always relevant way of tracking actors that are moving via physics.\n* NOTE: Important for checking the tracking state of the HMD and hands." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostPhysicsTick_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostPhysicsTick>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostPhysicsTick_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
		Z_Construct_UScriptStruct_FActorTickFunction,
		&NewStructOps,
		"PostPhysicsTick",
		sizeof(FPostPhysicsTick),
		alignof(FPostPhysicsTick),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostPhysicsTick_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostPhysicsTick_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostPhysicsTick()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostPhysicsTick_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostPhysicsTick"), sizeof(FPostPhysicsTick), Get_Z_Construct_UScriptStruct_FPostPhysicsTick_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostPhysicsTick_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostPhysicsTick_Hash() { return 1054881429U; }
class UScriptStruct* FTrackedActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BETTERPORTALS_API uint32 Get_Z_Construct_UScriptStruct_FTrackedActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackedActor, Z_Construct_UPackage__Script_BetterPortals(), TEXT("TrackedActor"), sizeof(FTrackedActor), Get_Z_Construct_UScriptStruct_FTrackedActor_Hash());
	}
	return Singleton;
}
template<> BETTERPORTALS_API UScriptStruct* StaticStruct<FTrackedActor>()
{
	return FTrackedActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackedActor(FTrackedActor::StaticStruct, TEXT("/Script/BetterPortals"), TEXT("TrackedActor"), false, nullptr, nullptr);
static struct FScriptStruct_BetterPortals_StaticRegisterNativesFTrackedActor
{
	FScriptStruct_BetterPortals_StaticRegisterNativesFTrackedActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackedActor")),new UScriptStruct::TCppStructOps<FTrackedActor>);
	}
} ScriptStruct_BetterPortals_StaticRegisterNativesFTrackedActor;
	struct Z_Construct_UScriptStruct_FTrackedActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Structure to hold important tracking information with each overlapping actor. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Structure to hold important tracking information with each overlapping actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackedActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackedActor>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackedActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
		nullptr,
		&NewStructOps,
		"TrackedActor",
		sizeof(FTrackedActor),
		alignof(FTrackedActor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackedActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackedActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackedActor"), sizeof(FTrackedActor), Get_Z_Construct_UScriptStruct_FTrackedActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackedActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackedActor_Hash() { return 1620589282U; }
	DEFINE_FUNCTION(APortal::execGetDuplicateMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<AActor*,AActor*>*)Z_Param__Result=P_THIS->GetDuplicateMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execGetNumberOfTrackedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTrackedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execLocationInsidePortal)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LocationInsidePortal(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execConvertRotationToPortal)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_GET_OBJECT(APortal,Z_Param_currentPortal);
		P_GET_OBJECT(APortal,Z_Param_endPortal);
		P_GET_UBOOL(Z_Param_flip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->ConvertRotationToPortal(Z_Param_rotation,Z_Param_currentPortal,Z_Param_endPortal,Z_Param_flip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execConvertLocationToPortal)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_OBJECT(APortal,Z_Param_currentPortal);
		P_GET_OBJECT(APortal,Z_Param_endPortal);
		P_GET_UBOOL(Z_Param_flip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertLocationToPortal(Z_Param_location,Z_Param_currentPortal,Z_Param_endPortal,Z_Param_flip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execConvertDirectionToTarget)
	{
		P_GET_STRUCT(FVector,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertDirectionToTarget(Z_Param_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execIsInfront)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInfront(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execClearPortalView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPortalView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execUpdatePortalView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePortalView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execSetActive)
	{
		P_GET_UBOOL(Z_Param_activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execOnPortalMeshOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_portalMeshHit);
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPortalMeshOverlapEnd(Z_Param_portalMeshHit,Z_Param_overlappedActor,Z_Param_overlappedComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execOnPortalMeshOverlapStart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_portalMeshHit);
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_fromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_portalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPortalMeshOverlapStart(Z_Param_portalMeshHit,Z_Param_overlappedActor,Z_Param_overlappedComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_portalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execOnPortalBoxOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_portalMeshHit);
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPortalBoxOverlapEnd(Z_Param_portalMeshHit,Z_Param_overlappedActor,Z_Param_overlappedComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execOnPortalBoxOverlapStart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_portalMeshHit);
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_fromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_portalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPortalBoxOverlapStart(Z_Param_portalMeshHit,Z_Param_overlappedActor,Z_Param_overlappedComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_portalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortal::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup();
		P_NATIVE_END;
	}
	void APortal::StaticRegisterNativesAPortal()
	{
		UClass* Class = APortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPortalView", &APortal::execClearPortalView },
			{ "ConvertDirectionToTarget", &APortal::execConvertDirectionToTarget },
			{ "ConvertLocationToPortal", &APortal::execConvertLocationToPortal },
			{ "ConvertRotationToPortal", &APortal::execConvertRotationToPortal },
			{ "GetDuplicateMap", &APortal::execGetDuplicateMap },
			{ "GetNumberOfTrackedActors", &APortal::execGetNumberOfTrackedActors },
			{ "IsActive", &APortal::execIsActive },
			{ "IsInfront", &APortal::execIsInfront },
			{ "LocationInsidePortal", &APortal::execLocationInsidePortal },
			{ "OnPortalBoxOverlapEnd", &APortal::execOnPortalBoxOverlapEnd },
			{ "OnPortalBoxOverlapStart", &APortal::execOnPortalBoxOverlapStart },
			{ "OnPortalMeshOverlapEnd", &APortal::execOnPortalMeshOverlapEnd },
			{ "OnPortalMeshOverlapStart", &APortal::execOnPortalMeshOverlapStart },
			{ "SetActive", &APortal::execSetActive },
			{ "Setup", &APortal::execSetup },
			{ "UpdatePortalView", &APortal::execUpdatePortalView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortal_ClearPortalView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_ClearPortalView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Clears the current render texture on the portal meshes dynamic material instance. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Clears the current render texture on the portal meshes dynamic material instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_ClearPortalView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "ClearPortalView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_ClearPortalView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ClearPortalView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_ClearPortalView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_ClearPortalView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics
	{
		struct Portal_eventConvertDirectionToTarget_Parms
		{
			FVector direction;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertDirectionToTarget_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertDirectionToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Convert a given velocity vector to the target portal. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Convert a given velocity vector to the target portal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "ConvertDirectionToTarget", nullptr, nullptr, sizeof(Portal_eventConvertDirectionToTarget_Parms), Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_ConvertDirectionToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_ConvertDirectionToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics
	{
		struct Portal_eventConvertLocationToPortal_Parms
		{
			FVector location;
			APortal* currentPortal;
			APortal* endPortal;
			bool flip;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentPortal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endPortal;
		static void NewProp_flip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertLocationToPortal_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_currentPortal = { "currentPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertLocationToPortal_Parms, currentPortal), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_endPortal = { "endPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertLocationToPortal_Parms, endPortal), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_flip_SetBit(void* Obj)
	{
		((Portal_eventConvertLocationToPortal_Parms*)Obj)->flip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_flip = { "flip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventConvertLocationToPortal_Parms), &Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_flip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertLocationToPortal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_currentPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_endPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_flip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Convert a given location to the target portal. */" },
		{ "CPP_Default_flip", "true" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Convert a given location to the target portal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "ConvertLocationToPortal", nullptr, nullptr, sizeof(Portal_eventConvertLocationToPortal_Parms), Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_ConvertLocationToPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_ConvertLocationToPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics
	{
		struct Portal_eventConvertRotationToPortal_Parms
		{
			FRotator rotation;
			APortal* currentPortal;
			APortal* endPortal;
			bool flip;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentPortal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endPortal;
		static void NewProp_flip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertRotationToPortal_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_currentPortal = { "currentPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertRotationToPortal_Parms, currentPortal), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_endPortal = { "endPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertRotationToPortal_Parms, endPortal), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_flip_SetBit(void* Obj)
	{
		((Portal_eventConvertRotationToPortal_Parms*)Obj)->flip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_flip = { "flip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventConvertRotationToPortal_Parms), &Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_flip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventConvertRotationToPortal_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_currentPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_endPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_flip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Convert a given rotation to the target portal. */" },
		{ "CPP_Default_flip", "true" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Convert a given rotation to the target portal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "ConvertRotationToPortal", nullptr, nullptr, sizeof(Portal_eventConvertRotationToPortal_Parms), Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_ConvertRotationToPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_ConvertRotationToPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_GetDuplicateMap_Statics
	{
		struct Portal_eventGetDuplicateMap_Parms
		{
			TMap<AActor*,AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventGetDuplicateMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Returns the current duplicate map for this portal. All static meshes that are duplicated and tracked are added to this list. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Returns the current duplicate map for this portal. All static meshes that are duplicated and tracked are added to this list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetDuplicateMap", nullptr, nullptr, sizeof(Portal_eventGetDuplicateMap_Parms), Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_GetDuplicateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_GetDuplicateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics
	{
		struct Portal_eventGetNumberOfTrackedActors_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventGetNumberOfTrackedActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Number of actors currently being tracked and duplicated at the target portal. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Number of actors currently being tracked and duplicated at the target portal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetNumberOfTrackedActors", nullptr, nullptr, sizeof(Portal_eventGetNumberOfTrackedActors_Parms), Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_GetNumberOfTrackedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_GetNumberOfTrackedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_IsActive_Statics
	{
		struct Portal_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortal_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Portal_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventIsActive_Parms), &Z_Construct_UFunction_APortal_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Is this portal active. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Is this portal active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "IsActive", nullptr, nullptr, sizeof(Portal_eventIsActive_Parms), Z_Construct_UFunction_APortal_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_IsInfront_Statics
	{
		struct Portal_eventIsInfront_Parms
		{
			FVector location;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_IsInfront_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventIsInfront_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortal_IsInfront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Portal_eventIsInfront_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_IsInfront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventIsInfront_Parms), &Z_Construct_UFunction_APortal_IsInfront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_IsInfront_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_IsInfront_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_IsInfront_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_IsInfront_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Is the location in-front of this portal? */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Is the location in-front of this portal?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_IsInfront_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "IsInfront", nullptr, nullptr, sizeof(Portal_eventIsInfront_Parms), Z_Construct_UFunction_APortal_IsInfront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_IsInfront_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_IsInfront_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_IsInfront_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_IsInfront()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_IsInfront_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_LocationInsidePortal_Statics
	{
		struct Portal_eventLocationInsidePortal_Parms
		{
			FVector location;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventLocationInsidePortal_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Portal_eventLocationInsidePortal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventLocationInsidePortal_Parms), &Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Is a given location inside of this portals box. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Is a given location inside of this portals box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "LocationInsidePortal", nullptr, nullptr, sizeof(Portal_eventLocationInsidePortal_Parms), Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_LocationInsidePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_LocationInsidePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics
	{
		struct Portal_eventOnPortalBoxOverlapEnd_Parms
		{
			UPrimitiveComponent* portalMeshHit;
			AActor* overlappedActor;
			UPrimitiveComponent* overlappedComp;
			int32 otherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMeshHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMeshHit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_portalMeshHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_portalMeshHit = { "portalMeshHit", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapEnd_Parms, portalMeshHit), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_portalMeshHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_portalMeshHit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapEnd_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapEnd_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapEnd_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_portalMeshHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::NewProp_otherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Called when the portal box ends one of its overlap events. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Called when the portal box ends one of its overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "OnPortalBoxOverlapEnd", nullptr, nullptr, sizeof(Portal_eventOnPortalBoxOverlapEnd_Parms), Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics
	{
		struct Portal_eventOnPortalBoxOverlapStart_Parms
		{
			UPrimitiveComponent* portalMeshHit;
			AActor* overlappedActor;
			UPrimitiveComponent* overlappedComp;
			int32 otherBodyIndex;
			bool fromSweep;
			FHitResult portalHit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMeshHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMeshHit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_portalHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalMeshHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalMeshHit = { "portalMeshHit", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapStart_Parms, portalMeshHit), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalMeshHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalMeshHit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapStart_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapStart_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapStart_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((Portal_eventOnPortalBoxOverlapStart_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_fromSweep = { "fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventOnPortalBoxOverlapStart_Parms), &Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalHit = { "portalHit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalBoxOverlapStart_Parms, portalHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalMeshHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::NewProp_portalHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Called when the portal box is overlapped. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Called when the portal box is overlapped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "OnPortalBoxOverlapStart", nullptr, nullptr, sizeof(Portal_eventOnPortalBoxOverlapStart_Parms), Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics
	{
		struct Portal_eventOnPortalMeshOverlapEnd_Parms
		{
			UPrimitiveComponent* portalMeshHit;
			AActor* overlappedActor;
			UPrimitiveComponent* overlappedComp;
			int32 otherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMeshHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMeshHit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_portalMeshHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_portalMeshHit = { "portalMeshHit", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapEnd_Parms, portalMeshHit), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_portalMeshHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_portalMeshHit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapEnd_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapEnd_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapEnd_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_portalMeshHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::NewProp_otherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Called when the portal mesh ends one of its overlap events. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Called when the portal mesh ends one of its overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "OnPortalMeshOverlapEnd", nullptr, nullptr, sizeof(Portal_eventOnPortalMeshOverlapEnd_Parms), Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics
	{
		struct Portal_eventOnPortalMeshOverlapStart_Parms
		{
			UPrimitiveComponent* portalMeshHit;
			AActor* overlappedActor;
			UPrimitiveComponent* overlappedComp;
			int32 otherBodyIndex;
			bool fromSweep;
			FHitResult portalHit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMeshHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMeshHit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_portalHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalMeshHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalMeshHit = { "portalMeshHit", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapStart_Parms, portalMeshHit), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalMeshHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalMeshHit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapStart_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapStart_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapStart_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((Portal_eventOnPortalMeshOverlapStart_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_fromSweep = { "fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventOnPortalMeshOverlapStart_Parms), &Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalHit = { "portalHit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Portal_eventOnPortalMeshOverlapStart_Parms, portalHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalMeshHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::NewProp_portalHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Called when the portal mesh ends one of its overlap events. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Called when the portal mesh ends one of its overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "OnPortalMeshOverlapStart", nullptr, nullptr, sizeof(Portal_eventOnPortalMeshOverlapStart_Parms), Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_SetActive_Statics
	{
		struct Portal_eventSetActive_Parms
		{
			bool activate;
		};
		static void NewProp_activate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortal_SetActive_Statics::NewProp_activate_SetBit(void* Obj)
	{
		((Portal_eventSetActive_Parms*)Obj)->activate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_SetActive_Statics::NewProp_activate = { "activate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Portal_eventSetActive_Parms), &Z_Construct_UFunction_APortal_SetActive_Statics::NewProp_activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_SetActive_Statics::NewProp_activate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Set if the portal is active or in-active. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Set if the portal is active or in-active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "SetActive", nullptr, nullptr, sizeof(Portal_eventSetActive_Parms), Z_Construct_UFunction_APortal_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_Setup_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Delayed setup function. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Delayed setup function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortal_UpdatePortalView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortal_UpdatePortalView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Update the render texture for this portal using the scene capture component. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Update the render texture for this portal using the scene capture component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_UpdatePortalView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "UpdatePortalView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortal_UpdatePortalView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_UpdatePortalView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortal_UpdatePortalView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortal_UpdatePortalView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortal_NoRegister()
	{
		return APortal::StaticClass();
	}
	struct Z_Construct_UClass_APortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recursionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_recursionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolutionPercentile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_resolutionPercentile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugCameraTransform_MetaData[];
#endif
		static void NewProp_debugCameraTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_debugCameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugTrackedActors_MetaData[];
#endif
		static void NewProp_debugTrackedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_debugTrackedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_renderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_renderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_renderTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_renderTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_renderTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_portalMaterial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_trackedActors_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackedActors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_trackedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_duplicateMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_duplicateMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duplicateMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_duplicateMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortal_ClearPortalView, "ClearPortalView" }, // 2674970483
		{ &Z_Construct_UFunction_APortal_ConvertDirectionToTarget, "ConvertDirectionToTarget" }, // 1948059997
		{ &Z_Construct_UFunction_APortal_ConvertLocationToPortal, "ConvertLocationToPortal" }, // 3065008338
		{ &Z_Construct_UFunction_APortal_ConvertRotationToPortal, "ConvertRotationToPortal" }, // 3380348292
		{ &Z_Construct_UFunction_APortal_GetDuplicateMap, "GetDuplicateMap" }, // 1998047912
		{ &Z_Construct_UFunction_APortal_GetNumberOfTrackedActors, "GetNumberOfTrackedActors" }, // 1035610470
		{ &Z_Construct_UFunction_APortal_IsActive, "IsActive" }, // 1836879574
		{ &Z_Construct_UFunction_APortal_IsInfront, "IsInfront" }, // 3388690784
		{ &Z_Construct_UFunction_APortal_LocationInsidePortal, "LocationInsidePortal" }, // 754284631
		{ &Z_Construct_UFunction_APortal_OnPortalBoxOverlapEnd, "OnPortalBoxOverlapEnd" }, // 407798456
		{ &Z_Construct_UFunction_APortal_OnPortalBoxOverlapStart, "OnPortalBoxOverlapStart" }, // 612754773
		{ &Z_Construct_UFunction_APortal_OnPortalMeshOverlapEnd, "OnPortalMeshOverlapEnd" }, // 2750459531
		{ &Z_Construct_UFunction_APortal_OnPortalMeshOverlapStart, "OnPortalMeshOverlapStart" }, // 3347362142
		{ &Z_Construct_UFunction_APortal_SetActive, "SetActive" }, // 2558107696
		{ &Z_Construct_UFunction_APortal_Setup, "Setup" }, // 3173697000
		{ &Z_Construct_UFunction_APortal_UpdatePortalView, "UpdatePortalView" }, // 548864431
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Portal class to handle visualizing a portal to its target portal as well as teleportation of the players\n * or any other physics objects that could move through the portal. */" },
		{ "IncludePath", "Portal.h" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Portal class to handle visualizing a portal to its target portal as well as teleportation of the players\n* or any other physics objects that could move through the portal." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalMesh_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* The portal mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The portal mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalMesh = { "portalMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalBox_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Box overlap component for teleporting actors. \n\x09 * NOTE: Used instead of overlaps with the portalMesh because the physics doesn't call overlaps if the mesh passed through something that doesn't block.\n\x09 *       This also still happens with CCD enabled as its mainly for blocking physics between frames not calling overlaps... */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Box overlap component for teleporting actors.\n       * NOTE: Used instead of overlaps with the portalMesh because the physics doesn't call overlaps if the mesh passed through something that doesn't block.\n       *       This also still happens with CCD enabled as its mainly for blocking physics between frames not calling overlaps..." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalBox = { "portalBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalCapture_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Scene capture component for creating the portal render target. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Scene capture component for creating the portal render target." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalCapture = { "portalCapture", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_targetPortal_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* The other portal actor to target. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The other portal actor to target." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_targetPortal = { "targetPortal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, targetPortal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_targetPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_targetPortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalMaterialInstance_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* The portal material instance to create the dynamic material from to update the render texture. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The portal material instance to create the dynamic material from to update the render texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalMaterialInstance = { "portalMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalMaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_recursionAmount_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* The max number of times a portal can recurse any portals. NOTE: Only target portal is supported for now. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The max number of times a portal can recurse any portals. NOTE: Only target portal is supported for now." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_recursionAmount = { "recursionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, recursionAmount), METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_recursionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_recursionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_resolutionPercentile_MetaData[] = {
		{ "Category", "Portal" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The percentage of the screen resolution to render the portal at. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The percentage of the screen resolution to render the portal at." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_resolutionPercentile = { "resolutionPercentile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, resolutionPercentile), METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_resolutionPercentile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_resolutionPercentile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform_MetaData[] = {
		{ "Category", "Portal|Debugging" },
		{ "Comment", "/* Debug the duplicated camera position and rotation relative to the other portal by drawing debug cube based of scenecapture2D transform. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Debug the duplicated camera position and rotation relative to the other portal by drawing debug cube based of scenecapture2D transform." },
	};
#endif
	void Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform_SetBit(void* Obj)
	{
		((APortal*)Obj)->debugCameraTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform = { "debugCameraTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortal), &Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors_MetaData[] = {
		{ "Category", "Portal|Debugging" },
		{ "Comment", "/* Log when a new actor is added to the trackedActors map and when one is removed. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Log when a new actor is added to the trackedActors map and when one is removed." },
	};
#endif
	void Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors_SetBit(void* Obj)
	{
		((APortal*)Obj)->debugTrackedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors = { "debugTrackedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortal), &Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalController_MetaData[] = {
		{ "Comment", "/* The player controller. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The player controller." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalController = { "portalController", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalPawn_MetaData[] = {
		{ "Comment", "/* The portal pawn. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The portal pawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalPawn = { "portalPawn", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalPawn), Z_Construct_UClass_APortalPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalCharacter_MetaData[] = {
		{ "Comment", "/* The portal character if the pawn isn't being used. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The portal character if the pawn isn't being used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalCharacter = { "portalCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalCharacter), Z_Construct_UClass_APortalCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_renderTarget_MetaData[] = {
		{ "Comment", "/* The portals render target texture. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The portals render target texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_renderTarget = { "renderTarget", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, renderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_renderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_renderTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_renderTargets_Inner = { "renderTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_renderTargets_MetaData[] = {
		{ "Comment", "/* The performance render targets used when latePortalUpdate is being used. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The performance render targets used when latePortalUpdate is being used." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_renderTargets = { "renderTargets", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, renderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_renderTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_renderTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_portalMaterial_MetaData[] = {
		{ "Comment", "/* The portals dynamic material instance. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "The portals dynamic material instance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_portalMaterial = { "portalMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, portalMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_portalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_portalMaterial_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_ValueProp = { "trackedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackedActor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_Key_KeyProp = { "trackedActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_MetaData[] = {
		{ "Comment", "/* Tracked actor map where each tracked actor has tracked settings like last location etc. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Tracked actor map where each tracked actor has tracked settings like last location etc." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_trackedActors = { "trackedActors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, trackedActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_ValueProp = { "duplicateMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_Key_KeyProp = { "duplicateMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_MetaData[] = {
		{ "Comment", "/* Map to find an original actor from a tracked duplicate actor from a hit result for example on a duplicate. */" },
		{ "ModuleRelativePath", "Portal.h" },
		{ "ToolTip", "Map to find an original actor from a tracked duplicate actor from a hit result for example on a duplicate." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap = { "duplicateMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, duplicateMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_targetPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_recursionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_resolutionPercentile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_debugCameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_debugTrackedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_renderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_renderTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_renderTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_portalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_trackedActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_trackedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_duplicateMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortal_Statics::ClassParams = {
		&APortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortal, 2749688463);
	template<> BETTERPORTALS_API UClass* StaticClass<APortal>()
	{
		return APortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortal(Z_Construct_UClass_APortal, &APortal::StaticClass, TEXT("/Script/BetterPortals"), TEXT("APortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
