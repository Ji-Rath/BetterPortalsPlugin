// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterPortals/PortalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalPlayer() {}
// Cross Module References
	BETTERPORTALS_API UClass* Z_Construct_UClass_UPortalPlayer_NoRegister();
	BETTERPORTALS_API UClass* Z_Construct_UClass_UPortalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_BetterPortals();
// End Cross Module References
	void UPortalPlayer::StaticRegisterNativesUPortalPlayer()
	{
	}
	UClass* Z_Construct_UClass_UPortalPlayer_NoRegister()
	{
		return UPortalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UPortalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPortalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_BetterPortals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* New local player class to add camera cutting to the view settings and projection matrix retrieval functions. */" },
		{ "IncludePath", "PortalPlayer.h" },
		{ "ModuleRelativePath", "PortalPlayer.h" },
		{ "ToolTip", "New local player class to add camera cutting to the view settings and projection matrix retrieval functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPortalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPortalPlayer_Statics::ClassParams = {
		&UPortalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPortalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPortalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPortalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalPlayer, 336073271);
	template<> BETTERPORTALS_API UClass* StaticClass<UPortalPlayer>()
	{
		return UPortalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalPlayer(Z_Construct_UClass_UPortalPlayer, &UPortalPlayer::StaticClass, TEXT("/Script/BetterPortals"), TEXT("UPortalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
