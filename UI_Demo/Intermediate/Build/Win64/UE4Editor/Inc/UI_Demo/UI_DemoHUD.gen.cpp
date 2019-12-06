// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI_Demo/UI_DemoHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_DemoHUD() {}
// Cross Module References
	UI_DEMO_API UClass* Z_Construct_UClass_AUI_DemoHUD_NoRegister();
	UI_DEMO_API UClass* Z_Construct_UClass_AUI_DemoHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UI_Demo();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AUI_DemoHUD::StaticRegisterNativesAUI_DemoHUD()
	{
	}
	UClass* Z_Construct_UClass_AUI_DemoHUD_NoRegister()
	{
		return AUI_DemoHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUI_DemoHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUI_DemoHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UI_Demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_DemoHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI_DemoHUD.h" },
		{ "ModuleRelativePath", "UI_DemoHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI_DemoHUD.h" },
		{ "ToolTip", "new" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_DemoHUD, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "UI_DemoHUD.h" },
		{ "ToolTip", "new" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_DemoHUD, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_HUDWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_HUDWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUI_DemoHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_DemoHUD_Statics::NewProp_HUDWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUI_DemoHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUI_DemoHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUI_DemoHUD_Statics::ClassParams = {
		&AUI_DemoHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUI_DemoHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AUI_DemoHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUI_DemoHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUI_DemoHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUI_DemoHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUI_DemoHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUI_DemoHUD, 2395079812);
	template<> UI_DEMO_API UClass* StaticClass<AUI_DemoHUD>()
	{
		return AUI_DemoHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUI_DemoHUD(Z_Construct_UClass_AUI_DemoHUD, &AUI_DemoHUD::StaticClass, TEXT("/Script/UI_Demo"), TEXT("AUI_DemoHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUI_DemoHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
