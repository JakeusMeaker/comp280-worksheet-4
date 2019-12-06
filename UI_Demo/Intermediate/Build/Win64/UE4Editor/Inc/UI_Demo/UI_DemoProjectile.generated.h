// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UI_DEMO_UI_DemoProjectile_generated_h
#error "UI_DemoProjectile.generated.h already included, missing '#pragma once' in UI_DemoProjectile.h"
#endif
#define UI_DEMO_UI_DemoProjectile_generated_h

#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_DemoProjectile(); \
	friend struct Z_Construct_UClass_AUI_DemoProjectile_Statics; \
public: \
	DECLARE_CLASS(AUI_DemoProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UI_Demo"), NO_API) \
	DECLARE_SERIALIZER(AUI_DemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUI_DemoProjectile(); \
	friend struct Z_Construct_UClass_AUI_DemoProjectile_Statics; \
public: \
	DECLARE_CLASS(AUI_DemoProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UI_Demo"), NO_API) \
	DECLARE_SERIALIZER(AUI_DemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI_DemoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI_DemoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_DemoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_DemoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_DemoProjectile(AUI_DemoProjectile&&); \
	NO_API AUI_DemoProjectile(const AUI_DemoProjectile&); \
public:


#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_DemoProjectile(AUI_DemoProjectile&&); \
	NO_API AUI_DemoProjectile(const AUI_DemoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_DemoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_DemoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUI_DemoProjectile)


#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUI_DemoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUI_DemoProjectile, ProjectileMovement); }


#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_9_PROLOG
#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_RPC_WRAPPERS \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_INCLASS \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_INCLASS_NO_PURE_DECLS \
	UI_Demo_Source_UI_Demo_UI_DemoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UI_DEMO_API UClass* StaticClass<class AUI_DemoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UI_Demo_Source_UI_Demo_UI_DemoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
