// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_LightBulb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_LightBulb() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_LightBulb();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_LightBulb_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ACode_LightBulb::StaticRegisterNativesACode_LightBulb()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_LightBulb);
	UClass* Z_Construct_UClass_ACode_LightBulb_NoRegister()
	{
		return ACode_LightBulb::StaticClass();
	}
	struct Z_Construct_UClass_ACode_LightBulb_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HangerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HangerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulbMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulbMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOn_MetaData[];
#endif
		static void NewProp_isOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_LightBulb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Code_LightBulb.h" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_HangerMesh_MetaData[] = {
		{ "Category", "Code_LightBulb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_HangerMesh = { "HangerMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightBulb, HangerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_HangerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_HangerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_BulbMesh_MetaData[] = {
		{ "Category", "Code_LightBulb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_BulbMesh = { "BulbMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightBulb, BulbMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_BulbMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_BulbMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_SpotLight_MetaData[] = {
		{ "Category", "Code_LightBulb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightBulb, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_SpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_SpotLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OnMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OnMaterial = { "OnMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightBulb, OnMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OnMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OnMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OffMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OffMaterial = { "OffMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightBulb, OffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn_MetaData[] = {
		{ "Category", "Code_LightBulb" },
		{ "ModuleRelativePath", "Public/Code_LightBulb.h" },
	};
#endif
	void Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn_SetBit(void* Obj)
	{
		((ACode_LightBulb*)Obj)->isOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn = { "isOn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACode_LightBulb), &Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACode_LightBulb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_HangerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_BulbMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_SpotLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OnMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_OffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightBulb_Statics::NewProp_isOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_LightBulb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_LightBulb>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_LightBulb_Statics::ClassParams = {
		&ACode_LightBulb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACode_LightBulb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_LightBulb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightBulb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_LightBulb()
	{
		if (!Z_Registration_Info_UClass_ACode_LightBulb.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_LightBulb.OuterSingleton, Z_Construct_UClass_ACode_LightBulb_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_LightBulb.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_LightBulb>()
	{
		return ACode_LightBulb::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_LightBulb);
	ACode_LightBulb::~ACode_LightBulb() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightBulb_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightBulb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_LightBulb, ACode_LightBulb::StaticClass, TEXT("ACode_LightBulb"), &Z_Registration_Info_UClass_ACode_LightBulb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_LightBulb), 2929490608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightBulb_h_3587943450(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightBulb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightBulb_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
