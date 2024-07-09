// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneProject_07_07/BasePickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePickupActor() {}
// Cross Module References
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_ABasePickupActor();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_ABasePickupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneProject_07_07();
// End Cross Module References
	void ABasePickupActor::StaticRegisterNativesABasePickupActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePickupActor);
	UClass* Z_Construct_UClass_ABasePickupActor_NoRegister()
	{
		return ABasePickupActor::StaticClass();
	}
	struct Z_Construct_UClass_ABasePickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneProject_07_07,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickupActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePickupActor.h" },
		{ "ModuleRelativePath", "BasePickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickupActor_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePickupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePickupActor_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePickupActor, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickupActor_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_ABasePickupActor_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickupActor_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "BasePickupActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePickupActor_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePickupActor, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickupActor_Statics::NewProp_RespawnTime_MetaData), Z_Construct_UClass_ABasePickupActor_Statics::NewProp_RespawnTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePickupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePickupActor_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePickupActor_Statics::NewProp_RespawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePickupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePickupActor_Statics::ClassParams = {
		&ABasePickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasePickupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickupActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePickupActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickupActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABasePickupActor()
	{
		if (!Z_Registration_Info_UClass_ABasePickupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePickupActor.OuterSingleton, Z_Construct_UClass_ABasePickupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasePickupActor.OuterSingleton;
	}
	template<> DRONEPROJECT_07_07_API UClass* StaticClass<ABasePickupActor>()
	{
		return ABasePickupActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePickupActor);
	ABasePickupActor::~ABasePickupActor() {}
	struct Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_BasePickupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_BasePickupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasePickupActor, ABasePickupActor::StaticClass, TEXT("ABasePickupActor"), &Z_Registration_Info_UClass_ABasePickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePickupActor), 3342443028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_BasePickupActor_h_2046882711(TEXT("/Script/DroneProject_07_07"),
		Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_BasePickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_BasePickupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
