// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterPortals/BetterPortalsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBetterPortalsGameModeBase() {}
// Cross Module References
	BETTERPORTALS_API UClass* Z_Construct_UClass_ABetterPortalsGameModeBase_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_ABetterPortalsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BetterPortals();
// End Cross Module References
	DEFINE_FUNCTION(ABetterPortalsGameModeBase::execUpdatePortals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePortals();
		P_NATIVE_END;
	}
	void ABetterPortalsGameModeBase::StaticRegisterNativesABetterPortalsGameModeBase()
	{
		UClass* Class = ABetterPortalsGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdatePortals", &ABetterPortalsGameModeBase::execUpdatePortals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portals" },
		{ "Comment", "/* Function to update portals in the world based off player location relative to each of them. */" },
		{ "ModuleRelativePath", "BetterPortalsGameModeBase.h" },
		{ "ToolTip", "Function to update portals in the world based off player location relative to each of them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABetterPortalsGameModeBase, nullptr, "UpdatePortals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABetterPortalsGameModeBase_NoRegister()
	{
		return ABetterPortalsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABetterPortalsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_performantPortals_MetaData[];
#endif
		static void NewProp_performantPortals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_performantPortals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_checkDirection_MetaData[];
#endif
		static void NewProp_checkDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_portalUpdateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_portalUpdateRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPortalRenderDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxPortalRenderDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABetterPortalsGameModeBase_UpdatePortals, "UpdatePortals" }, // 4236916630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Manages updating portals and when to set them active and inactive. */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BetterPortalsGameModeBase.h" },
		{ "ModuleRelativePath", "BetterPortalsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Manages updating portals and when to set them active and inactive." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Should the game mode class activate/deactivate portals based on player location and distance. */" },
		{ "ModuleRelativePath", "BetterPortalsGameModeBase.h" },
		{ "ToolTip", "Should the game mode class activate/deactivate portals based on player location and distance." },
	};
#endif
	void Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals_SetBit(void* Obj)
	{
		((ABetterPortalsGameModeBase*)Obj)->performantPortals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals = { "performantPortals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABetterPortalsGameModeBase), &Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Should check the direction of the portals relative to the way the player is looking. \n\x09 * NOTE: Doesn't work that well but with more work relative to how far right the player is its possible to improve this. */" },
		{ "ModuleRelativePath", "BetterPortalsGameModeBase.h" },
		{ "ToolTip", "Should check the direction of the portals relative to the way the player is looking.\n       * NOTE: Doesn't work that well but with more work relative to how far right the player is its possible to improve this." },
	};
#endif
	void Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection_SetBit(void* Obj)
	{
		((ABetterPortalsGameModeBase*)Obj)->checkDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection = { "checkDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABetterPortalsGameModeBase), &Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_portalUpdateRate_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Check for portals being rendered on screen every portalUpdateRate seconds. */" },
		{ "ModuleRelativePath", "BetterPortalsGameModeBase.h" },
		{ "ToolTip", "Check for portals being rendered on screen every portalUpdateRate seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_portalUpdateRate = { "portalUpdateRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABetterPortalsGameModeBase, portalUpdateRate), METADATA_PARAMS(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_portalUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_portalUpdateRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_maxPortalRenderDistance_MetaData[] = {
		{ "Category", "Portal" },
		{ "Comment", "/* Max distance to render a portal at. */" },
		{ "ModuleRelativePath", "BetterPortalsGameModeBase.h" },
		{ "ToolTip", "Max distance to render a portal at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_maxPortalRenderDistance = { "maxPortalRenderDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABetterPortalsGameModeBase, maxPortalRenderDistance), METADATA_PARAMS(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_maxPortalRenderDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_maxPortalRenderDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_performantPortals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_checkDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_portalUpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::NewProp_maxPortalRenderDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABetterPortalsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::ClassParams = {
		&ABetterPortalsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABetterPortalsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABetterPortalsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABetterPortalsGameModeBase, 2981663633);
	template<> BETTERPORTALS_API UClass* StaticClass<ABetterPortalsGameModeBase>()
	{
		return ABetterPortalsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABetterPortalsGameModeBase(Z_Construct_UClass_ABetterPortalsGameModeBase, &ABetterPortalsGameModeBase::StaticClass, TEXT("/Script/BetterPortals"), TEXT("ABetterPortalsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABetterPortalsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
