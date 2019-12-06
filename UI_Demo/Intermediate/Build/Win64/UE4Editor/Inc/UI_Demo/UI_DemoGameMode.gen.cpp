// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI_Demo/UI_DemoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_DemoGameMode() {}
// Cross Module References
	UI_DEMO_API UClass* Z_Construct_UClass_AUI_DemoGameMode_NoRegister();
	UI_DEMO_API UClass* Z_Construct_UClass_AUI_DemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UI_Demo();
// End Cross Module References
	void AUI_DemoGameMode::StaticRegisterNativesAUI_DemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUI_DemoGameMode_NoRegister()
	{
		return AUI_DemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUI_DemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUI_DemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UI_Demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_DemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UI_DemoGameMode.h" },
		{ "ModuleRelativePath", "UI_DemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUI_DemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUI_DemoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUI_DemoGameMode_Statics::ClassParams = {
		&AUI_DemoGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUI_DemoGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUI_DemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUI_DemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUI_DemoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUI_DemoGameMode, 149775624);
	template<> UI_DEMO_API UClass* StaticClass<AUI_DemoGameMode>()
	{
		return AUI_DemoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUI_DemoGameMode(Z_Construct_UClass_AUI_DemoGameMode, &AUI_DemoGameMode::StaticClass, TEXT("/Script/UI_Demo"), TEXT("AUI_DemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUI_DemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
