// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneProject_07_07/FindPlayerService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindPlayerService() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_UFindPlayerService();
	DRONEPROJECT_07_07_API UClass* Z_Construct_UClass_UFindPlayerService_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneProject_07_07();
// End Cross Module References
	void UFindPlayerService::StaticRegisterNativesUFindPlayerService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindPlayerService);
	UClass* Z_Construct_UClass_UFindPlayerService_NoRegister()
	{
		return UFindPlayerService::StaticClass();
	}
	struct Z_Construct_UClass_UFindPlayerService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindPlayerService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneProject_07_07,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerService_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerService_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FindPlayerService.h" },
		{ "ModuleRelativePath", "FindPlayerService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerService_Statics::NewProp_PlayerActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "FindPlayerService.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFindPlayerService_Statics::NewProp_PlayerActorKey = { "PlayerActorKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindPlayerService, PlayerActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerService_Statics::NewProp_PlayerActorKey_MetaData), Z_Construct_UClass_UFindPlayerService_Statics::NewProp_PlayerActorKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindPlayerService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerService_Statics::NewProp_PlayerActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindPlayerService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindPlayerService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindPlayerService_Statics::ClassParams = {
		&UFindPlayerService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindPlayerService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerService_Statics::Class_MetaDataParams), Z_Construct_UClass_UFindPlayerService_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerService_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFindPlayerService()
	{
		if (!Z_Registration_Info_UClass_UFindPlayerService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindPlayerService.OuterSingleton, Z_Construct_UClass_UFindPlayerService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindPlayerService.OuterSingleton;
	}
	template<> DRONEPROJECT_07_07_API UClass* StaticClass<UFindPlayerService>()
	{
		return UFindPlayerService::StaticClass();
	}
	UFindPlayerService::UFindPlayerService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindPlayerService);
	UFindPlayerService::~UFindPlayerService() {}
	struct Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_FindPlayerService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_FindPlayerService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindPlayerService, UFindPlayerService::StaticClass, TEXT("UFindPlayerService"), &Z_Registration_Info_UClass_UFindPlayerService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindPlayerService), 1732978381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_FindPlayerService_h_632679938(TEXT("/Script/DroneProject_07_07"),
		Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_FindPlayerService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneProject_07_07_Source_DroneProject_07_07_FindPlayerService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
