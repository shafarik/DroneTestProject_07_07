// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneProject_07_07/DroneGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneGameModeBase() {}
// Cross Module References
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_ADroneGameModeBase();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_ADroneGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DroneProject_07_07();
// End Cross Module References
	void ADroneGameModeBase::StaticRegisterNativesADroneGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADroneGameModeBase);
	UClass* Z_Construct_UClass_ADroneGameModeBase_NoRegister()
	{
		return ADroneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADroneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADroneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneProject_07_07,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADroneGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DroneGameModeBase.h" },
		{ "ModuleRelativePath", "DroneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADroneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADroneGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADroneGameModeBase_Statics::ClassParams = {
		&ADroneGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADroneGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADroneGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADroneGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADroneGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADroneGameModeBase.OuterSingleton, Z_Construct_UClass_ADroneGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADroneGameModeBase.OuterSingleton;
	}
	template<> DRONEPROJECT_07_07_API UClass* StaticClass<ADroneGameModeBase>()
	{
		return ADroneGameModeBase::StaticClass();
	}
	ADroneGameModeBase::ADroneGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADroneGameModeBase);
	ADroneGameModeBase::~ADroneGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_DroneGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_DroneGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADroneGameModeBase, ADroneGameModeBase::StaticClass, TEXT("ADroneGameModeBase"), &Z_Registration_Info_UClass_ADroneGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADroneGameModeBase), 1064531606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_DroneGameModeBase_h_3912136816(TEXT("/Script/DroneProject_07_07"),
		Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_DroneGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_DroneGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
