// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UI_DEMO_UI_DemoCharacter_generated_h
#error "UI_DemoCharacter.generated.h already included, missing '#pragma once' in UI_DemoCharacter.h"
#endif
#define UI_DEMO_UI_DemoCharacter_generated_h

#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmmoIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetAmmoIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmmoIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetAmmoIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_DemoCharacter(); \
	friend struct Z_Construct_UClass_AUI_DemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AUI_DemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UI_Demo"), NO_API) \
	DECLARE_SERIALIZER(AUI_DemoCharacter)


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAUI_DemoCharacter(); \
	friend struct Z_Construct_UClass_AUI_DemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AUI_DemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UI_Demo"), NO_API) \
	DECLARE_SERIALIZER(AUI_DemoCharacter)


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI_DemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI_DemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_DemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_DemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_DemoCharacter(AUI_DemoCharacter&&); \
	NO_API AUI_DemoCharacter(const AUI_DemoCharacter&); \
public:


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_DemoCharacter(AUI_DemoCharacter&&); \
	NO_API AUI_DemoCharacter(const AUI_DemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_DemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_DemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUI_DemoCharacter)


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUI_DemoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUI_DemoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUI_DemoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUI_DemoCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUI_DemoCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUI_DemoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUI_DemoCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUI_DemoCharacter, L_MotionController); }


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_11_PROLOG
#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_RPC_WRAPPERS \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_INCLASS \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_INCLASS_NO_PURE_DECLS \
	UI_Demo_Source_UI_Demo_UI_DemoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UI_DEMO_API UClass* StaticClass<class AUI_DemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UI_Demo_Source_UI_Demo_UI_DemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
