// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneProject_07_07/MyAIPerceptionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIPerceptionComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_UMyAIPerceptionComponent();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_UMyAIPerceptionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneProject_07_07();
// End Cross Module References
	void UMyAIPerceptionComponent::StaticRegisterNativesUMyAIPerceptionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAIPerceptionComponent);
	UClass* Z_Construct_UClass_UMyAIPerceptionComponent_NoRegister()
	{
		return UMyAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneProject_07_07,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAIPerceptionComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "MyAIPerceptionComponent.h" },
		{ "ModuleRelativePath", "MyAIPerceptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAIPerceptionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAIPerceptionComponent_Statics::ClassParams = {
		&UMyAIPerceptionComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAIPerceptionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAIPerceptionComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyAIPerceptionComponent()
	{
		if (!Z_Registration_Info_UClass_UMyAIPerceptionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAIPerceptionComponent.OuterSingleton, Z_Construct_UClass_UMyAIPerceptionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAIPerceptionComponent.OuterSingleton;
	}
	template<> DRONEPROJECT_07_07_API UClass* StaticClass<UMyAIPerceptionComponent>()
	{
		return UMyAIPerceptionComponent::StaticClass();
	}
	UMyAIPerceptionComponent::UMyAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAIPerceptionComponent);
	UMyAIPerceptionComponent::~UMyAIPerceptionComponent() {}
	struct Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyAIPerceptionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyAIPerceptionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAIPerceptionComponent, UMyAIPerceptionComponent::StaticClass, TEXT("UMyAIPerceptionComponent"), &Z_Registration_Info_UClass_UMyAIPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAIPerceptionComponent), 3175790160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyAIPerceptionComponent_h_2003091325(TEXT("/Script/DroneProject_07_07"),
		Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyAIPerceptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_MyAIPerceptionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
