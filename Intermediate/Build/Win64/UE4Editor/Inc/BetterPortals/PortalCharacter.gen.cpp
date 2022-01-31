// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterPortals/PortalCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalCharacter() {}
// Cross Module References
	BETTERPORTALS_API UScriptStruct* Z_Construct_UScriptStruct_FCrouchSettings();
	UPackage* Z_Construct_UPackage__Script_BetterPortals();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortalCharacter_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_APortalCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FCrouchSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BETTERPORTALS_API uint32 Get_Z_Construct_UScriptStruct_FCrouchSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrouchSettings, Z_Construct_UPackage__Script_BetterPortals(), TEXT("CrouchSettings"), sizeof(FCrouchSettings), Get_Z_Construct_UScriptStruct_FCrouchSettings_Hash());
	}
	return Singleton;
}
template<> BETTERPORTALS_API UScriptStruct* StaticStruct<FCrouchSettings>()
{
	return FCrouchSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrouchSettings(FCrouchSettings::StaticStruct, TEXT("/Script/BetterPortals"), TEXT("CrouchSettings"), false, nullptr, nullptr);
static struct FScriptStruct_BetterPortals_StaticRegisterNativesFCrouchSettings
{
	FScriptStruct_BetterPortals_StaticRegisterNativesFCrouchSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrouchSettings")),new UScriptStruct::TCppStructOps<FCrouchSettings>);
	}
} ScriptStruct_BetterPortals_StaticRegisterNativesFCrouchSettings;
	struct Z_Construct_UScriptStruct_FCrouchSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrouchSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Structure to hold crouching lerp information. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Structure to hold crouching lerp information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrouchSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrouchSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrouchSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
		nullptr,
		&NewStructOps,
		"CrouchSettings",
		sizeof(FCrouchSettings),
		alignof(FCrouchSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrouchSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrouchSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrouchSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrouchSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BetterPortals();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrouchSettings"), sizeof(FCrouchSettings), Get_Z_Construct_UScriptStruct_FCrouchSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrouchSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrouchSettings_Hash() { return 2956569314U; }
	DEFINE_FUNCTION(APortalCharacter::execPortalTraceSingleExample)
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
	DEFINE_FUNCTION(APortalCharacter::execUpdateMouseMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMouseMovement(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execReturnToOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Right(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Forward(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execFireAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execReleaseInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execInteractAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execCrouchLerp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchLerp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execCrouchAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execRunAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalCharacter::execJumpAction)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpAction(Z_Param_pressed);
		P_NATIVE_END;
	}
	void APortalCharacter::StaticRegisterNativesAPortalCharacter()
	{
		UClass* Class = APortalCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrouchAction", &APortalCharacter::execCrouchAction },
			{ "CrouchLerp", &APortalCharacter::execCrouchLerp },
			{ "FireAction", &APortalCharacter::execFireAction },
			{ "Forward", &APortalCharacter::execForward },
			{ "InteractAction", &APortalCharacter::execInteractAction },
			{ "JumpAction", &APortalCharacter::execJumpAction },
			{ "LookUp", &APortalCharacter::execLookUp },
			{ "PortalTraceSingleExample", &APortalCharacter::execPortalTraceSingleExample },
			{ "ReleaseInteractable", &APortalCharacter::execReleaseInteractable },
			{ "ReturnToOrientation", &APortalCharacter::execReturnToOrientation },
			{ "Right", &APortalCharacter::execRight },
			{ "RunAction", &APortalCharacter::execRunAction },
			{ "Turn", &APortalCharacter::execTurn },
			{ "UpdateMouseMovement", &APortalCharacter::execUpdateMouseMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics
	{
		struct PortalCharacter_eventCrouchAction_Parms
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
	void Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalCharacter_eventCrouchAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalCharacter_eventCrouchAction_Parms), &Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "CrouchAction", nullptr, nullptr, sizeof(PortalCharacter_eventCrouchAction_Parms), Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_CrouchAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_CrouchAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_CrouchLerp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_CrouchLerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Crouch lerp function. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Crouch lerp function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_CrouchLerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "CrouchLerp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_CrouchLerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_CrouchLerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_CrouchLerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_CrouchLerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_FireAction_Statics
	{
		struct PortalCharacter_eventFireAction_Parms
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
	void Z_Construct_UFunction_APortalCharacter_FireAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalCharacter_eventFireAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalCharacter_FireAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalCharacter_eventFireAction_Parms), &Z_Construct_UFunction_APortalCharacter_FireAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_FireAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_FireAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_FireAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_FireAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "FireAction", nullptr, nullptr, sizeof(PortalCharacter_eventFireAction_Parms), Z_Construct_UFunction_APortalCharacter_FireAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_FireAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_FireAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_FireAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_FireAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_FireAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_Forward_Statics
	{
		struct PortalCharacter_eventForward_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalCharacter_Forward_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventForward_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_Forward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_Forward_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_Forward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Move forward axis. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Move forward axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "Forward", nullptr, nullptr, sizeof(PortalCharacter_eventForward_Parms), Z_Construct_UFunction_APortalCharacter_Forward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_Forward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_InteractAction_Statics
	{
		struct PortalCharacter_eventInteractAction_Parms
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
	void Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalCharacter_eventInteractAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalCharacter_eventInteractAction_Parms), &Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "InteractAction", nullptr, nullptr, sizeof(PortalCharacter_eventInteractAction_Parms), Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_InteractAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_InteractAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_JumpAction_Statics
	{
		struct PortalCharacter_eventJumpAction_Parms
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
	void Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalCharacter_eventJumpAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalCharacter_eventJumpAction_Parms), &Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "JumpAction", nullptr, nullptr, sizeof(PortalCharacter_eventJumpAction_Parms), Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_JumpAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_JumpAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_LookUp_Statics
	{
		struct PortalCharacter_eventLookUp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalCharacter_LookUp_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventLookUp_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_LookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_LookUp_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Rotational movement along the roll axis with the mouse. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Rotational movement along the roll axis with the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "LookUp", nullptr, nullptr, sizeof(PortalCharacter_eventLookUp_Parms), Z_Construct_UFunction_APortalCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics
	{
		struct PortalCharacter_eventPortalTraceSingleExample_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_outHit = { "outHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventPortalTraceSingleExample_Parms, outHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventPortalTraceSingleExample_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventPortalTraceSingleExample_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_end_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_objectType = { "objectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventPortalTraceSingleExample_Parms, objectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_maxPortalTrace = { "maxPortalTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventPortalTraceSingleExample_Parms, maxPortalTrace), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PortalCharacter_eventPortalTraceSingleExample_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalCharacter_eventPortalTraceSingleExample_Parms), &Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_outHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_objectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_maxPortalTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* An example function showing how to set up traces with portals with a recursion amount which is how many times it can go through a portal.\n\x09 * Returns if it went through a portal during the trace. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "An example function showing how to set up traces with portals with a recursion amount which is how many times it can go through a portal.\n       * Returns if it went through a portal during the trace." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "PortalTraceSingleExample", nullptr, nullptr, sizeof(PortalCharacter_eventPortalTraceSingleExample_Parms), Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_ReleaseInteractable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_ReleaseInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/* Release anything grabbed with the physics handle. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Release anything grabbed with the physics handle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_ReleaseInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "ReleaseInteractable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_ReleaseInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_ReleaseInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_ReleaseInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_ReleaseInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_ReturnToOrientation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_ReturnToOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Timer function to return the player to the correct orientation after a teleport event from a portal class. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Timer function to return the player to the correct orientation after a teleport event from a portal class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_ReturnToOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "ReturnToOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_ReturnToOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_ReturnToOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_ReturnToOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_ReturnToOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_Right_Statics
	{
		struct PortalCharacter_eventRight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalCharacter_Right_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventRight_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_Right_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_Right_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Move right axis. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Move right axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "Right", nullptr, nullptr, sizeof(PortalCharacter_eventRight_Parms), Z_Construct_UFunction_APortalCharacter_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_Right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_RunAction_Statics
	{
		struct PortalCharacter_eventRunAction_Parms
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
	void Z_Construct_UFunction_APortalCharacter_RunAction_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((PortalCharacter_eventRunAction_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalCharacter_RunAction_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalCharacter_eventRunAction_Parms), &Z_Construct_UFunction_APortalCharacter_RunAction_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_RunAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_RunAction_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_RunAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_RunAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "RunAction", nullptr, nullptr, sizeof(PortalCharacter_eventRunAction_Parms), Z_Construct_UFunction_APortalCharacter_RunAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_RunAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_RunAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_RunAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_RunAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_RunAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_Turn_Statics
	{
		struct PortalCharacter_eventTurn_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalCharacter_Turn_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventTurn_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_Turn_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Rotational movement along the yaw axis with the mouse. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Rotational movement along the yaw axis with the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "Turn", nullptr, nullptr, sizeof(PortalCharacter_eventTurn_Parms), Z_Construct_UFunction_APortalCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics
	{
		struct PortalCharacter_eventUpdateMouseMovement_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalCharacter_eventUpdateMouseMovement_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalCharacter, nullptr, "UpdateMouseMovement", nullptr, nullptr, sizeof(PortalCharacter_eventUpdateMouseMovement_Parms), Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortalCharacter_NoRegister()
	{
		return APortalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APortalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crouchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_crouchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_runMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_runMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crouchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_crouchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mouseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orientationCorrectionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_orientationCorrectionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doubleJump_MetaData[];
#endif
		static void NewProp_doubleJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_doubleJump;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortalCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalCharacter_CrouchAction, "CrouchAction" }, // 3334859421
		{ &Z_Construct_UFunction_APortalCharacter_CrouchLerp, "CrouchLerp" }, // 3494406588
		{ &Z_Construct_UFunction_APortalCharacter_FireAction, "FireAction" }, // 4090847434
		{ &Z_Construct_UFunction_APortalCharacter_Forward, "Forward" }, // 3899324606
		{ &Z_Construct_UFunction_APortalCharacter_InteractAction, "InteractAction" }, // 575847774
		{ &Z_Construct_UFunction_APortalCharacter_JumpAction, "JumpAction" }, // 881393667
		{ &Z_Construct_UFunction_APortalCharacter_LookUp, "LookUp" }, // 3820031042
		{ &Z_Construct_UFunction_APortalCharacter_PortalTraceSingleExample, "PortalTraceSingleExample" }, // 3872234078
		{ &Z_Construct_UFunction_APortalCharacter_ReleaseInteractable, "ReleaseInteractable" }, // 520233505
		{ &Z_Construct_UFunction_APortalCharacter_ReturnToOrientation, "ReturnToOrientation" }, // 218634777
		{ &Z_Construct_UFunction_APortalCharacter_Right, "Right" }, // 1471721402
		{ &Z_Construct_UFunction_APortalCharacter_RunAction, "RunAction" }, // 2602073567
		{ &Z_Construct_UFunction_APortalCharacter_Turn, "Turn" }, // 3898833755
		{ &Z_Construct_UFunction_APortalCharacter_UpdateMouseMovement, "UpdateMouseMovement" }, // 537001339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PortalCharacter.h" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_cameraHolder_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Camera scene loc. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Camera scene loc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_cameraHolder = { "cameraHolder", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, cameraHolder), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_cameraHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_cameraHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Game/Player Camera. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Game/Player Camera." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_physicsHandle_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Physics handle component to hold physics object in-front of player. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Physics handle component to hold physics object in-front of player." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_physicsHandle = { "physicsHandle", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, physicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_physicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_physicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Speed multiplier from base speed for crouching movement */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Speed multiplier from base speed for crouching movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchMultiplier = { "crouchMultiplier", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, crouchMultiplier), METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_runMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Speed multiplier from base speed for running movement */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Speed multiplier from base speed for running movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_runMultiplier = { "runMultiplier", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, runMultiplier), METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_runMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_runMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Speed at which to transition to a crouched state. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Speed at which to transition to a crouched state." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchSpeed = { "crouchSpeed", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, crouchSpeed), METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_mouseSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Mosue camera movement speed. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Mosue camera movement speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_mouseSpeed = { "mouseSpeed", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, mouseSpeed), METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_mouseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_mouseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_interactDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Distance player can interact with objects from. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Distance player can interact with objects from." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_interactDistance = { "interactDistance", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, interactDistance), METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_interactDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_interactDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_orientationCorrectionTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Time to take re orientating character. */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Time to take re orientating character." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_orientationCorrectionTime = { "orientationCorrectionTime", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalCharacter, orientationCorrectionTime), METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_orientationCorrectionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_orientationCorrectionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Can player double jump? */" },
		{ "ModuleRelativePath", "PortalCharacter.h" },
		{ "ToolTip", "Can player double jump?" },
	};
#endif
	void Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump_SetBit(void* Obj)
	{
		((APortalCharacter*)Obj)->doubleJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump = { "doubleJump", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortalCharacter), &Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_cameraHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_physicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_runMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_crouchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_mouseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_interactDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_orientationCorrectionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalCharacter_Statics::NewProp_doubleJump,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortalCharacter_Statics::ClassParams = {
		&APortalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortalCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortalCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortalCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortalCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortalCharacter, 3772524440);
	template<> BETTERPORTALS_API UClass* StaticClass<APortalCharacter>()
	{
		return APortalCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortalCharacter(Z_Construct_UClass_APortalCharacter, &APortalCharacter::StaticClass, TEXT("/Script/BetterPortals"), TEXT("APortalCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
