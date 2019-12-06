// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UI_DEMO_UI_DemoGameMode_generated_h
#error "UI_DemoGameMode.generated.h already included, missing '#pragma once' in UI_DemoGameMode.h"
#endif
#define UI_DEMO_UI_DemoGameMode_generated_h

#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_RPC_WRAPPERS
#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_DemoGameMode(); \
	friend struct Z_Construct_UClass_AUI_DemoGameMode_Statics; \
public: \
	DECLARE_CLASS(AUI_DemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UI_Demo"), UI_DEMO_API) \
	DECLARE_SERIALIZER(AUI_DemoGameMode)


#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUI_DemoGameMode(); \
	friend struct Z_Construct_UClass_AUI_DemoGameMode_Statics; \
public: \
	DECLARE_CLASS(AUI_DemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UI_Demo"), UI_DEMO_API) \
	DECLARE_SERIALIZER(AUI_DemoGameMode)


#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UI_DEMO_API AUI_DemoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI_DemoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UI_DEMO_API, AUI_DemoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_DemoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UI_DEMO_API AUI_DemoGameMode(AUI_DemoGameMode&&); \
	UI_DEMO_API AUI_DemoGameMode(const AUI_DemoGameMode&); \
public:


#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UI_DEMO_API AUI_DemoGameMode(AUI_DemoGameMode&&); \
	UI_DEMO_API AUI_DemoGameMode(const AUI_DemoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UI_DEMO_API, AUI_DemoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_DemoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUI_DemoGameMode)


#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_9_PROLOG
#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_RPC_WRAPPERS \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_INCLASS \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_INCLASS_NO_PURE_DECLS \
	UI_Demo_Source_UI_Demo_UI_DemoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UI_DEMO_API UClass* StaticClass<class AUI_DemoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UI_Demo_Source_UI_Demo_UI_DemoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
