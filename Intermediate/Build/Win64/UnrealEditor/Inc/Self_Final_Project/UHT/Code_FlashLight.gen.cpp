// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_FlashLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_FlashLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_FlashLight();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_FlashLight_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupAbleObject();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ACode_FlashLight::StaticRegisterNativesACode_FlashLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_FlashLight);
	UClass* Z_Construct_UClass_ACode_FlashLight_NoRegister()
	{
		return ACode_FlashLight::StaticClass();
	}
	struct Z_Construct_UClass_ACode_FlashLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashLightMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashLightMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_FlashLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACode_PickupAbleObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_FlashLight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Code_FlashLight.h" },
		{ "ModuleRelativePath", "Public/Code_FlashLight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_FlashLight_Statics::NewProp_FlashLightMesh_MetaData[] = {
		{ "Category", "Code_FlashLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_FlashLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_FlashLight_Statics::NewProp_FlashLightMesh = { "FlashLightMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_FlashLight, FlashLightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_FlashLight_Statics::NewProp_FlashLightMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_FlashLight_Statics::NewProp_FlashLightMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACode_FlashLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_FlashLight_Statics::NewProp_FlashLightMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_FlashLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_FlashLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_FlashLight_Statics::ClassParams = {
		&ACode_FlashLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACode_FlashLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACode_FlashLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_FlashLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_FlashLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_FlashLight()
	{
		if (!Z_Registration_Info_UClass_ACode_FlashLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_FlashLight.OuterSingleton, Z_Construct_UClass_ACode_FlashLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_FlashLight.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_FlashLight>()
	{
		return ACode_FlashLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_FlashLight);
	ACode_FlashLight::~ACode_FlashLight() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_FlashLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_FlashLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_FlashLight, ACode_FlashLight::StaticClass, TEXT("ACode_FlashLight"), &Z_Registration_Info_UClass_ACode_FlashLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_FlashLight), 34412064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_FlashLight_h_1538422652(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_FlashLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_FlashLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
