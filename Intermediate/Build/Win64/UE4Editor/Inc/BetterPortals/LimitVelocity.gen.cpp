// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterPortals/LimitVelocity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimitVelocity() {}
// Cross Module References
	BETTERPORTALS_API UClass* Z_Construct_UClass_ULimitVelocity_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_ULimitVelocity();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BetterPortals();
// End Cross Module References
	void ULimitVelocity::StaticRegisterNativesULimitVelocity()
	{
	}
	UClass* Z_Construct_UClass_ULimitVelocity_NoRegister()
	{
		return ULimitVelocity::StaticClass();
	}
	struct Z_Construct_UClass_ULimitVelocity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackedCompName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_trackedCompName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULimitVelocity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitVelocity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Portals" },
		{ "Comment", "/* FOR SOME REASON IT JUST BREAKS THE PLAYER WHEN ADDED TO IT? */" },
		{ "IncludePath", "LimitVelocity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LimitVelocity.h" },
		{ "ToolTip", "FOR SOME REASON IT JUST BREAKS THE PLAYER WHEN ADDED TO IT?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitVelocity_Statics::NewProp_trackedCompName_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/* The component to tracks name. */" },
		{ "ModuleRelativePath", "LimitVelocity.h" },
		{ "ToolTip", "The component to tracks name." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULimitVelocity_Statics::NewProp_trackedCompName = { "trackedCompName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULimitVelocity, trackedCompName), METADATA_PARAMS(Z_Construct_UClass_ULimitVelocity_Statics::NewProp_trackedCompName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitVelocity_Statics::NewProp_trackedCompName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitVelocity_Statics::NewProp_maxVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/* Max linear velocity the specified component can reach. */" },
		{ "ModuleRelativePath", "LimitVelocity.h" },
		{ "ToolTip", "Max linear velocity the specified component can reach." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULimitVelocity_Statics::NewProp_maxVelocity = { "maxVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULimitVelocity, maxVelocity), METADATA_PARAMS(Z_Construct_UClass_ULimitVelocity_Statics::NewProp_maxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitVelocity_Statics::NewProp_maxVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimitVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimitVelocity_Statics::NewProp_trackedCompName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimitVelocity_Statics::NewProp_maxVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULimitVelocity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimitVelocity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULimitVelocity_Statics::ClassParams = {
		&ULimitVelocity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULimitVelocity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULimitVelocity_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULimitVelocity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitVelocity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULimitVelocity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULimitVelocity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULimitVelocity, 883989363);
	template<> BETTERPORTALS_API UClass* StaticClass<ULimitVelocity>()
	{
		return ULimitVelocity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULimitVelocity(Z_Construct_UClass_ULimitVelocity, &ULimitVelocity::StaticClass, TEXT("/Script/BetterPortals"), TEXT("ULimitVelocity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULimitVelocity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
