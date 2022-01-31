// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterPortals/PortalPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalPawn() {}
// Cross Module References
	BETTERPORTALS_API UEnum* Z_Construct_UEnum_BetterPortals_EMovementState();
	UPackage* Z_Construct_UPackage__Script_BetterPortals();
	BETTERPORTALS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDebugSettings();
	BETTERPORTALS_API UScriptStruct* Z_Construct_UScriptStruct_FCrouchLerp();
	BETTERPORTALS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortalPawn_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortalPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
// End Cross Module References
	static UEnum* EMovementState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BetterPortals_EMovementState, Z_Construct_UPackage__Script_BetterPortals(), TEXT("EMovementState"));
		}
		return Singleton;
	}
	template<> BETTERPORTALS_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementState(EMovementState_StaticEnum, TEXT("/Script/BetterPortals"), TEXT("EMovementState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BetterPortals_EMovementState_Hash() { return 2244501794U; }
	UEnum* Z_Construct_UEnum_BetterPortals_EMovementState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementState"), 0, Get_Z_Construct_UEnum_BetterPortals_EMovementState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementState::RUNNING", (int64)EMovementState::RUNNING },
				{ "EMovementState::WALKING", (int64)EMovementState::WALKING },
				{ "EMovementState::CROUCHING", (int64)EMovementState::CROUCHING },
				{ "EMovementState::FALLING", (int64)EMovementState::FALLING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Enum for holding movement state of the player. */" },
				{ "CROUCHING.DisplayName", "Crouching" },
				{ "CROUCHING.Name", "EMovementState::CROUCHING" },
				{ "FALLING.DisplayName", "Falling" },
				{ "FALLING.Name", "EMovementState::FALLING" },
				{ "ModuleRelativePath", "PortalPawn.h" },
				{ "RUNNING.DisplayName", "Running" },
				{ "RUNNING.Name", "EMovementState::RUNNING" },
				{ "ToolTip", "Enum for holding movement state of the player." },
				{ "WALKING.DisplayName", "Walking" },
				{ "WALKING.Name", "EMovementState::WALKING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BetterPortals,
				nullptr,
				"EMovementState",
				"EMovementState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCharacterDebugSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BETTERPORTALS_API uint32 Get_Z_Construct_UScriptStruct_FCharacterDebugSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDebugSettings, Z_Construct_UPackage__Script_BetterPortals(), TEXT("CharacterDebugSettings"), sizeof(FCharacterDebugSettings), Get_Z_Construct_UScriptStruct_FCharacterDebugSettings_Hash());
	}
	return Singleton;
}
template<> BETTERPORTALS_API UScriptStruct* StaticStruct<FCharacterDebugSettings>()
{
	return FCharacterDebugSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterDebugSettings(FCharacterDebugSettings::StaticStruct, TEXT("/Script/BetterPortals"), TEXT("CharacterDebugSettings"), false, nullptr, nullptr);
static struct FScriptStruct_BetterPortals_StaticRegisterNativesFCharacterDebugSettings
{
	FScriptStruct_BetterPortals_StaticRegisterNativesFCharacterDebugSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterDebugSettings")),new UScriptStruct::TCppStructOps<FCharacterDebugSettings>);
	}
} ScriptStruct_BetterPortals_StaticRegisterNativesFCharacterDebugSettings;
	struct Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugMouseMovement_MetaData[];
#endif
		static void NewProp_debugMouseMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_debugMouseMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugInteractionTrace_MetaData[];
#endif
		static void NewProp_debugInteractionTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_debugInteractionTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugGroundTrace_MetaData[];
#endif
		static void NewProp_debugGroundTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_debugGroundTrace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Debug structure for enabling debug features within the class. \n * NOTE: Removed using CHAR_DEBUG macro thats set to ENGINE_ONLY by default but can be changed above. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Debug structure for enabling debug features within the class.\n* NOTE: Removed using CHAR_DEBUG macro thats set to ENGINE_ONLY by default but can be changed above." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDebugSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Print off information from the mouse input. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Print off information from the mouse input." },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement_SetBit(void* Obj)
	{
		((FCharacterDebugSettings*)Obj)->debugMouseMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement = { "debugMouseMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDebugSettings), &Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Show visual line trace view of interaction trace. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Show visual line trace view of interaction trace." },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace_SetBit(void* Obj)
	{
		((FCharacterDebugSettings*)Obj)->debugInteractionTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace = { "debugInteractionTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDebugSettings), &Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Show visual line trace view of the ground check line trace looking for channel ECC_Pawn blocking.... */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Show visual line trace view of the ground check line trace looking for channel ECC_Pawn blocking...." },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace_SetBit(void* Obj)
	{
		((FCharacterDebugSettings*)Obj)->debugGroundTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace = { "debugGroundTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterDebugSettings), &Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugMouseMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugInteractionTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::NewProp_debugGroundTrace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
		nullptr,
		&NewStructOps,
		"CharacterDebugSettings",
		sizeof(FCharacterDebugSettings),
		alignof(FCharacterDebugSettings),
		Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterDebugSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterDebugSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterDebugSettings"), sizeof(FCharacterDebugSettings), Get_Z_Construct_UScriptStruct_FCharacterDebugSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterDebugSettings_Hash() { return 1417342513U; }
class UScriptStruct* FCrouchLerp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BETTERPORTALS_API uint32 Get_Z_Construct_UScriptStruct_FCrouchLerp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrouchLerp, Z_Construct_UPackage__Script_BetterPortals(), TEXT("CrouchLerp"), sizeof(FCrouchLerp), Get_Z_Construct_UScriptStruct_FCrouchLerp_Hash());
	}
	return Singleton;
}
template<> BETTERPORTALS_API UScriptStruct* StaticStruct<FCrouchLerp>()
{
	return FCrouchLerp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrouchLerp(FCrouchLerp::StaticStruct, TEXT("/Script/BetterPortals"), TEXT("CrouchLerp"), false, nullptr, nullptr);
static struct FScriptStruct_BetterPortals_StaticRegisterNativesFCrouchLerp
{
	FScriptStruct_BetterPortals_StaticRegisterNativesFCrouchLerp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrouchLerp")),new UScriptStruct::TCppStructOps<FCrouchLerp>);
	}
} ScriptStruct_BetterPortals_StaticRegisterNativesFCrouchLerp;
	struct Z_Construct_UScriptStruct_FCrouchLerp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrouchLerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Structure to hold crouching lerp information. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Structure to hold crouching lerp information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrouchLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrouchLerp>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrouchLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
		nullptr,
		&NewStructOps,
		"CrouchLerp",
		sizeof(FCrouchLerp),
		alignof(FCrouchLerp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrouchLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrouchLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrouchLerp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrouchLerp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrouchLerp"), sizeof(FCrouchLerp), Get_Z_Construct_UScriptStruct_FCrouchLerp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrouchLerp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrouchLerp_Hash() { return 710348930U; }
class UScriptStruct* FCharacterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BETTERPORTALS_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSettings, Z_Construct_UPackage__Script_BetterPortals(), TEXT("CharacterSettings"), sizeof(FCharacterSettings), Get_Z_Construct_UScriptStruct_FCharacterSettings_Hash());
	}
	return Singleton;
}
template<> BETTERPORTALS_API UScriptStruct* StaticStruct<FCharacterSettings>()
{
	return FCharacterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSettings(FCharacterSettings::StaticStruct, TEXT("/Script/BetterPortals"), TEXT("CharacterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_BetterPortals_StaticRegisterNativesFCharacterSettings
{
	FScriptStruct_BetterPortals_StaticRegisterNativesFCharacterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSettings")),new UScriptStruct::TCppStructOps<FCharacterSettings>);
	}
} ScriptStruct_BetterPortals_StaticRegisterNativesFCharacterSettings;
	struct Z_Construct_UScriptStruct_FCharacterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_throwForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throwForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastInteractHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastInteractHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastGroundHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastGroundHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orientationCorrectionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_orientationCorrectionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mouseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_standingHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_standingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crouchingHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_crouchingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeedMul_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeedMul;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementDragMul_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementDragMul;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upForceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_upForceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxUpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxUpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groundCheckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_groundCheckDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_airSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_airSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_runSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_runSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crouchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_crouchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crouchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_crouchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_jumpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doubleJump_MetaData[];
#endif
		static void NewProp_doubleJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_doubleJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_movementDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_linVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsMaterialGrounded_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsMaterialGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsMaterialAir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsMaterialAir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Movement structure to store any movement options for the portal character. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement structure to store any movement options for the portal character." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_interactionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Interaction trace distance. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Interaction trace distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_interactionDistance = { "interactionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, interactionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_interactionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_interactionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_throwForce_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Force to throw something. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Force to throw something." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_throwForce = { "throwForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, throwForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_throwForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_throwForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastInteractHit_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Last interaction hit result. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Last interaction hit result." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastInteractHit = { "lastInteractHit", nullptr, (EPropertyFlags)0x0010008000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, lastInteractHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastInteractHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastInteractHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastGroundHit_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Last ground check hit result. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Last ground check hit result." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastGroundHit = { "lastGroundHit", nullptr, (EPropertyFlags)0x0010008000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, lastGroundHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastGroundHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastGroundHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_orientationCorrectionTime_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/* How fast to correct the players orientation after a teleport event. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "How fast to correct the players orientation after a teleport event." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_orientationCorrectionTime = { "orientationCorrectionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, orientationCorrectionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_orientationCorrectionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_orientationCorrectionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_cameraPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "85.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Camera pitch amount */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Camera pitch amount" },
		{ "UIMax", "85.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_cameraPitch = { "cameraPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, cameraPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_cameraPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_cameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/* Camera movement speed amount */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Camera movement speed amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseSpeed = { "mouseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, mouseSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_standingHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* The half height of the capsule when standing. NOTE: Will override the capsules half height on begin play. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "The half height of the capsule when standing. NOTE: Will override the capsules half height on begin play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_standingHeight = { "standingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, standingHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_standingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_standingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchingHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* The half height of the capsule when crouching. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "The half height of the capsule when crouching." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchingHeight = { "crouchingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, crouchingHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementSpeedMul_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Movement speed multiplier for adjusting. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement speed multiplier for adjusting." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementSpeedMul = { "movementSpeedMul", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, movementSpeedMul), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementSpeedMul_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementSpeedMul_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDragMul_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Movement dampening force for removing too much force and acceleration being added to the player. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement dampening force for removing too much force and acceleration being added to the player." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDragMul = { "movementDragMul", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, movementDragMul), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDragMul_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDragMul_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_upForceMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* The up force multiplier to be applied while grounded and moving. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "The up force multiplier to be applied while grounded and moving." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_upForceMultiplier = { "upForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, upForceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_upForceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_upForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_maxUpForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* The maximum up force multiplier to be applied while grounded and moving. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "The maximum up force multiplier to be applied while grounded and moving." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_maxUpForce = { "maxUpForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, maxUpForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_maxUpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_maxUpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_groundCheckDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Distance to look for the floor at the base of the characters capsule. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Distance to look for the floor at the base of the characters capsule." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_groundCheckDistance = { "groundCheckDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, groundCheckDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_groundCheckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_groundCheckDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_airSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/*  Movement speed for air movement split into X and Y movement for different forces for strafing. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement speed for air movement split into X and Y movement for different forces for strafing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_airSpeed = { "airSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, airSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_airSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_airSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Movement speed for walking. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement speed for walking." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, walkSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_runSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Movement speed for running. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement speed for running." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_runSpeed = { "runSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, runSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_runSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_runSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Movement speed while crouched. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Movement speed while crouched." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchSpeed = { "crouchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, crouchSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Time it takes to crouch down or up. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Time it takes to crouch down or up." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchTime = { "crouchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, crouchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_jumpForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Amount of force multiplier to apply upwards along the capsules current up axis. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Amount of force multiplier to apply upwards along the capsules current up axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_jumpForce = { "jumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, jumpForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_jumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_jumpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Characters mass. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Characters mass." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mass = { "mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Can double jump? */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Can double jump?" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump_SetBit(void* Obj)
	{
		((FCharacterSettings*)Obj)->doubleJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump = { "doubleJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterSettings), &Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Current mouse input. NOTE: X - is turn. Y is lookUp. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Current mouse input. NOTE: X - is turn. Y is lookUp." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseMovement = { "mouseMovement", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, mouseMovement), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDir_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Current movement input. NOTE: X - Right. Y Forward. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Current movement input. NOTE: X - Right. Y Forward." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDir = { "movementDir", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, movementDir), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_linVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Current linear physics velocity. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Current linear physics velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_linVelocity = { "linVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, linVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_linVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_linVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_rotVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Current angular physics velocity. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Current angular physics velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_rotVelocity = { "rotVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, rotVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_rotVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_rotVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialGrounded_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Players grounded physics material.\n\x09 * NOTE: will override physics material on capsule while grounded. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Players grounded physics material.\n       * NOTE: will override physics material on capsule while grounded." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialGrounded = { "physicsMaterialGrounded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, physicsMaterialGrounded), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Players air physics material.\n\x09 * NOTE: will override physics material on capsule while in the air. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Players air physics material.\n       * NOTE: will override physics material on capsule while in the air." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialAir = { "physicsMaterialAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSettings, physicsMaterialAir), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialAir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_interactionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_throwForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastInteractHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_lastGroundHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_orientationCorrectionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_cameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_standingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementSpeedMul,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDragMul,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_upForceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_maxUpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_groundCheckDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_airSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_runSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_crouchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_jumpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_doubleJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_mouseMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_movementDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_linVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_rotVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSettings_Statics::NewProp_physicsMaterialAir,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
		nullptr,
		&NewStructOps,
		"CharacterSettings",
		sizeof(FCharacterSettings),
		alignof(FCharacterSettings),
		Z_Construct_UScriptStruct_FCharacterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSettings"), sizeof(FCharacterSettings), Get_Z_Construct_UScriptStruct_FCharacterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSettings_Hash() { return 3880299992U; }
	DEFINE_FUNCTION(APortalPawn::execPortalTraceSingleExample)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHit);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_end);
		P_GET_PROPERTY(FByteProperty,Z_Param_objectType);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxPortalTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PortalTraceSingleExample(Z_Param_Out_outHit,Z_Param_Out_start,Z_Param_Out_end,ECollisionChannel(Z_Param_objectType),Z_Param_maxPortalTrace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execReturnToOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Right(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Forward(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execFireAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execReleaseInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execInteractAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execCrouchLerp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchLerp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execCrouchAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execRunAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalPawn::execJumpAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	void APortalPawn::StaticRegisterNativesAPortalPawn()
	{
		UClass* Class = APortalPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrouchAction", &APortalPawn::execCrouchAction },
			{ "CrouchLerp", &APortalPawn::execCrouchLerp },
			{ "FireAction", &APortalPawn::execFireAction },
			{ "Forward", &APortalPawn::execForward },
			{ "InteractAction", &APortalPawn::execInteractAction },
			{ "JumpAction", &APortalPawn::execJumpAction },
			{ "LookUp", &APortalPawn::execLookUp },
			{ "PortalTraceSingleExample", &APortalPawn::execPortalTraceSingleExample },
			{ "ReleaseInteractable", &APortalPawn::execReleaseInteractable },
			{ "ReturnToOrientation", &APortalPawn::execReturnToOrientation },
			{ "Right", &APortalPawn::execRight },
			{ "RunAction", &APortalPawn::execRunAction },
			{ "Turn", &APortalPawn::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortalPawn_CrouchAction_Statics
	{
		struct PortalPawn_eventCrouchAction_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalPawn_eventCrouchAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPawn_eventCrouchAction_Parms), &Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "CrouchAction", nullptr, nullptr, sizeof(PortalPawn_eventCrouchAction_Parms), Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_CrouchAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_CrouchAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_CrouchLerp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_CrouchLerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Crouch lerp function. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Crouch lerp function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_CrouchLerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "CrouchLerp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_CrouchLerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_CrouchLerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_CrouchLerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_CrouchLerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_FireAction_Statics
	{
		struct PortalPawn_eventFireAction_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortalPawn_FireAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalPawn_eventFireAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalPawn_FireAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPawn_eventFireAction_Parms), &Z_Construct_UFunction_APortalPawn_FireAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_FireAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_FireAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_FireAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_FireAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "FireAction", nullptr, nullptr, sizeof(PortalPawn_eventFireAction_Parms), Z_Construct_UFunction_APortalPawn_FireAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_FireAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_FireAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_FireAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_FireAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_FireAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_Forward_Statics
	{
		struct PortalPawn_eventForward_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalPawn_Forward_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventForward_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_Forward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_Forward_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_Forward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Move forward axis. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Move forward axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "Forward", nullptr, nullptr, sizeof(PortalPawn_eventForward_Parms), Z_Construct_UFunction_APortalPawn_Forward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_Forward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_InteractAction_Statics
	{
		struct PortalPawn_eventInteractAction_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortalPawn_InteractAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalPawn_eventInteractAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalPawn_InteractAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPawn_eventInteractAction_Parms), &Z_Construct_UFunction_APortalPawn_InteractAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_InteractAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_InteractAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_InteractAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "PortalPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_InteractAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "InteractAction", nullptr, nullptr, sizeof(PortalPawn_eventInteractAction_Parms), Z_Construct_UFunction_APortalPawn_InteractAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_InteractAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_InteractAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_InteractAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_InteractAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_InteractAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_JumpAction_Statics
	{
		struct PortalPawn_eventJumpAction_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortalPawn_JumpAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalPawn_eventJumpAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalPawn_JumpAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPawn_eventJumpAction_Parms), &Z_Construct_UFunction_APortalPawn_JumpAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_JumpAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_JumpAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_JumpAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_JumpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "JumpAction", nullptr, nullptr, sizeof(PortalPawn_eventJumpAction_Parms), Z_Construct_UFunction_APortalPawn_JumpAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_JumpAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_JumpAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_JumpAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_JumpAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_JumpAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_LookUp_Statics
	{
		struct PortalPawn_eventLookUp_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalPawn_LookUp_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventLookUp_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_LookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_LookUp_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_LookUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Rotational movement along the roll axis with the mouse. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Rotational movement along the roll axis with the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "LookUp", nullptr, nullptr, sizeof(PortalPawn_eventLookUp_Parms), Z_Construct_UFunction_APortalPawn_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics
	{
		struct PortalPawn_eventPortalTraceSingleExample_Parms
		{
			FHitResult outHit;
			FVector start;
			FVector end;
			TEnumAsByte<ECollisionChannel> objectType;
			int32 maxPortalTrace;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_objectType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxPortalTrace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_outHit = { "outHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventPortalTraceSingleExample_Parms, outHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventPortalTraceSingleExample_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventPortalTraceSingleExample_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_end_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_objectType = { "objectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventPortalTraceSingleExample_Parms, objectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_maxPortalTrace = { "maxPortalTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventPortalTraceSingleExample_Parms, maxPortalTrace), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PortalPawn_eventPortalTraceSingleExample_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPawn_eventPortalTraceSingleExample_Parms), &Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_outHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_objectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_maxPortalTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* An example function showing how to set up traces with portals with a recursion amount which is how many times it can go through a portal.\n\x09 * Returns if it went through a portal during the trace. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "An example function showing how to set up traces with portals with a recursion amount which is how many times it can go through a portal.\n       * Returns if it went through a portal during the trace." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "PortalTraceSingleExample", nullptr, nullptr, sizeof(PortalPawn_eventPortalTraceSingleExample_Parms), Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_ReleaseInteractable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_ReleaseInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Release anything grabbed with the physics handle. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Release anything grabbed with the physics handle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_ReleaseInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "ReleaseInteractable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_ReleaseInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_ReleaseInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_ReleaseInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_ReleaseInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_ReturnToOrientation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_ReturnToOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Timer function to return the player to the correct orientation after a teleport event from a portal class. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Timer function to return the player to the correct orientation after a teleport event from a portal class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_ReturnToOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "ReturnToOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_ReturnToOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_ReturnToOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_ReturnToOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_ReturnToOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_Right_Statics
	{
		struct PortalPawn_eventRight_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalPawn_Right_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventRight_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_Right_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_Right_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Move right axis. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Move right axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "Right", nullptr, nullptr, sizeof(PortalPawn_eventRight_Parms), Z_Construct_UFunction_APortalPawn_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_Right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_RunAction_Statics
	{
		struct PortalPawn_eventRunAction_Parms
		{
			bool pressed;
		};
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APortalPawn_RunAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalPawn_eventRunAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalPawn_RunAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPawn_eventRunAction_Parms), &Z_Construct_UFunction_APortalPawn_RunAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_RunAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_RunAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_RunAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_RunAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "RunAction", nullptr, nullptr, sizeof(PortalPawn_eventRunAction_Parms), Z_Construct_UFunction_APortalPawn_RunAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_RunAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_RunAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_RunAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_RunAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_RunAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalPawn_Turn_Statics
	{
		struct PortalPawn_eventTurn_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalPawn_Turn_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPawn_eventTurn_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalPawn_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalPawn_Turn_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalPawn_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Rotational movement along the yaw axis with the mouse. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Rotational movement along the yaw axis with the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalPawn_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalPawn, nullptr, "Turn", nullptr, nullptr, sizeof(PortalPawn_eventTurn_Parms), Z_Construct_UFunction_APortalPawn_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalPawn_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalPawn_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalPawn_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalPawn_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortalPawn_NoRegister()
	{
		return APortalPawn::StaticClass();
	}
	struct Z_Construct_UClass_APortalPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_debugSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortalPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalPawn_CrouchAction, "CrouchAction" }, // 4044285081
		{ &Z_Construct_UFunction_APortalPawn_CrouchLerp, "CrouchLerp" }, // 1955471332
		{ &Z_Construct_UFunction_APortalPawn_FireAction, "FireAction" }, // 1192925589
		{ &Z_Construct_UFunction_APortalPawn_Forward, "Forward" }, // 3147047508
		{ &Z_Construct_UFunction_APortalPawn_InteractAction, "InteractAction" }, // 3257843684
		{ &Z_Construct_UFunction_APortalPawn_JumpAction, "JumpAction" }, // 1985413106
		{ &Z_Construct_UFunction_APortalPawn_LookUp, "LookUp" }, // 1205371310
		{ &Z_Construct_UFunction_APortalPawn_PortalTraceSingleExample, "PortalTraceSingleExample" }, // 1683737197
		{ &Z_Construct_UFunction_APortalPawn_ReleaseInteractable, "ReleaseInteractable" }, // 3093843450
		{ &Z_Construct_UFunction_APortalPawn_ReturnToOrientation, "ReturnToOrientation" }, // 461391717
		{ &Z_Construct_UFunction_APortalPawn_Right, "Right" }, // 3638571552
		{ &Z_Construct_UFunction_APortalPawn_RunAction, "RunAction" }, // 272904337
		{ &Z_Construct_UFunction_APortalPawn_Turn, "Turn" }, // 1178214781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* A character class to allow portal functionality while moving etc.\n * NOTE: Class will be based on physics based movement using sub-stepping. */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PortalPawn.h" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "A character class to allow portal functionality while moving etc.\n* NOTE: Class will be based on physics based movement using sub-stepping." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_playerMesh_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Pointer to mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Pointer to mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_playerMesh = { "playerMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, playerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_playerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_playerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_playerCapsule_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/*  Pointer to capsule */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Pointer to capsule" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_playerCapsule = { "playerCapsule", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, playerCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_playerCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_playerCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Game/Player Camera. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Game/Player Camera." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_cameraHolder_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Camera holding component to allow rotation while parent is simulating physics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Camera holding component to allow rotation while parent is simulating physics." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_cameraHolder = { "cameraHolder", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, cameraHolder), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_cameraHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_cameraHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_physicsHandle_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Physics handle component to hold physics object in-front of player. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Physics handle component to hold physics object in-front of player." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_physicsHandle = { "physicsHandle", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, physicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_physicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_physicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_characterSettings_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Settings structures to manipulate the way the pawn moves etc. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Settings structures to manipulate the way the pawn moves etc." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_characterSettings = { "characterSettings", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, characterSettings), Z_Construct_UScriptStruct_FCharacterSettings, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_characterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_characterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalPawn_Statics::NewProp_debugSettings_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Settings for the debugging features in the pawn class. */" },
		{ "ModuleRelativePath", "PortalPawn.h" },
		{ "ToolTip", "Settings for the debugging features in the pawn class." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalPawn_Statics::NewProp_debugSettings = { "debugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalPawn, debugSettings), Z_Construct_UScriptStruct_FCharacterDebugSettings, METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::NewProp_debugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::NewProp_debugSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_playerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_playerCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_cameraHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_physicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_characterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalPawn_Statics::NewProp_debugSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortalPawn_Statics::ClassParams = {
		&APortalPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortalPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortalPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortalPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortalPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortalPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortalPawn, 2468874425);
	template<> BETTERPORTALS_API UClass* StaticClass<APortalPawn>()
	{
		return APortalPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortalPawn(Z_Construct_UClass_APortalPawn, &APortalPawn::StaticClass, TEXT("/Script/BetterPortals"), TEXT("APortalPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
