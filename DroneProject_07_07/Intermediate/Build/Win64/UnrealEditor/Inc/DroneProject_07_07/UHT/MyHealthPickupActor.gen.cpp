// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneProject_07_07/MyHealthPickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHealthPickupActor() {}
// Cross Module References
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_ABasePickupActor();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_AMyHealthPickupActor();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_AMyHealthPickupActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneProject_07_07();
// End Cross Module References
	void AMyHealthPickupActor::StaticRegisterNativesAMyHealthPickupActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHealthPickupActor);
	UClass* Z_Construct_UClass_AMyHealthPickupActor_NoRegister()
	{
		return AMyHealthPickupActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyHealthPickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHealthPickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePickupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneProject_07_07,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHealthPickupActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHealthPickupActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyHealthPickupActor.h" },
		{ "ModuleRelativePath", "MyHealthPickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHealthPickupActor_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyHealthPickupActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyHealthPickupActor_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHealthPickupActor, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHealthPickupActor_Statics::NewProp_HealAmount_MetaData), Z_Construct_UClass_AMyHealthPickupActor_Statics::NewProp_HealAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHealthPickupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHealthPickupActor_Statics::NewProp_HealAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHealthPickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHealthPickupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHealthPickupActor_Statics::ClassParams = {
		&AMyHealthPickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyHealthPickupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyHealthPickupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHealthPickupActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHealthPickupActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHealthPickupActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyHealthPickupActor()
	{
		if (!Z_Registration_Info_UClass_AMyHealthPickupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHealthPickupActor.OuterSingleton, Z_Construct_UClass_AMyHealthPickupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyHealthPickupActor.OuterSingleton;
	}
	template<> DRONEPROJECT_07_07_API UClass* StaticClass<AMyHealthPickupActor>()
	{
		return AMyHealthPickupActor::StaticClass();
	}
	AMyHealthPickupActor::AMyHealthPickupActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHealthPickupActor);
	AMyHealthPickupActor::~AMyHealthPickupActor() {}
	struct Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyHealthPickupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyHealthPickupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyHealthPickupActor, AMyHealthPickupActor::StaticClass, TEXT("AMyHealthPickupActor"), &Z_Registration_Info_UClass_AMyHealthPickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHealthPickupActor), 2473378770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyHealthPickupActor_h_670657650(TEXT("/Script/DroneProject_07_07"),
		Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyHealthPickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyHealthPickupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
