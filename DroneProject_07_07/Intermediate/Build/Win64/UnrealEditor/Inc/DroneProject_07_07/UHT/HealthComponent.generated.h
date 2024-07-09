// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
#ifdef DRONEPROJECT_07_07_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define DRONEPROJECT_07_07_HealthComponent_generated_h

#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_SPARSE_DATA
#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execGetHealthPrecent); \
	DECLARE_FUNCTION(execIsDead);


#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_ACCESSORS
#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneProject_07_07"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_12_PROLOG
#define FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_SPARSE_DATA \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_ACCESSORS \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEPROJECT_07_07_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DroneProject_07_07_Source_DroneProject_07_07_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
