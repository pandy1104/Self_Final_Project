// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_PickupKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_PickupKey() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupAbleObject();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupKey();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupKey_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ACode_PickupKey::StaticRegisterNativesACode_PickupKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_PickupKey);
	UClass* Z_Construct_UClass_ACode_PickupKey_NoRegister()
	{
		return ACode_PickupKey::StaticClass();
	}
	struct Z_Construct_UClass_ACode_PickupKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_PickupKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACode_PickupAbleObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_PickupKey_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Code_PickupKey.h" },
		{ "ModuleRelativePath", "Public/Code_PickupKey.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_PickupKey_Statics::NewProp_KeyMesh_MetaData[] = {
		{ "Category", "Code_PickupKey" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_PickupKey.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_PickupKey_Statics::NewProp_KeyMesh = { "KeyMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_PickupKey, KeyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_PickupKey_Statics::NewProp_KeyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupKey_Statics::NewProp_KeyMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACode_PickupKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_PickupKey_Statics::NewProp_KeyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_PickupKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_PickupKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_PickupKey_Statics::ClassParams = {
		&ACode_PickupKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACode_PickupKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupKey_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_PickupKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_PickupKey()
	{
		if (!Z_Registration_Info_UClass_ACode_PickupKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_PickupKey.OuterSingleton, Z_Construct_UClass_ACode_PickupKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_PickupKey.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_PickupKey>()
	{
		return ACode_PickupKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_PickupKey);
	ACode_PickupKey::~ACode_PickupKey() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_PickupKey, ACode_PickupKey::StaticClass, TEXT("ACode_PickupKey"), &Z_Registration_Info_UClass_ACode_PickupKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_PickupKey), 2114060316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupKey_h_1419011801(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
