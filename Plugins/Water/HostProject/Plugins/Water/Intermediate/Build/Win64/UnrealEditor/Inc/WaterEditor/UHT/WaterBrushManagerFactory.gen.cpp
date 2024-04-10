// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/WaterBrushManagerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBrushManagerFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBrushManagerFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBrushManagerFactory_NoRegister();
// End Cross Module References
	void UWaterBrushManagerFactory::StaticRegisterNativesUWaterBrushManagerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBrushManagerFactory);
	UClass* Z_Construct_UClass_UWaterBrushManagerFactory_NoRegister()
	{
		return UWaterBrushManagerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBrushManagerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBrushManagerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBrushManagerFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBrushManagerFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBrushManagerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBrushManagerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBrushManagerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBrushManagerFactory_Statics::ClassParams = {
		&UWaterBrushManagerFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBrushManagerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBrushManagerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBrushManagerFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBrushManagerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBrushManagerFactory.OuterSingleton, Z_Construct_UClass_UWaterBrushManagerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBrushManagerFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBrushManagerFactory>()
	{
		return UWaterBrushManagerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBrushManagerFactory);
	UWaterBrushManagerFactory::~UWaterBrushManagerFactory() {}
	struct Z_CompiledInDeferFile_FID_Skillbox_Plugins_Water_HostProject_Plugins_Water_Source_Editor_Private_WaterBrushManagerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Skillbox_Plugins_Water_HostProject_Plugins_Water_Source_Editor_Private_WaterBrushManagerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBrushManagerFactory, UWaterBrushManagerFactory::StaticClass, TEXT("UWaterBrushManagerFactory"), &Z_Registration_Info_UClass_UWaterBrushManagerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBrushManagerFactory), 4095022390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Skillbox_Plugins_Water_HostProject_Plugins_Water_Source_Editor_Private_WaterBrushManagerFactory_h_3724008950(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Skillbox_Plugins_Water_HostProject_Plugins_Water_Source_Editor_Private_WaterBrushManagerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Skillbox_Plugins_Water_HostProject_Plugins_Water_Source_Editor_Private_WaterBrushManagerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS