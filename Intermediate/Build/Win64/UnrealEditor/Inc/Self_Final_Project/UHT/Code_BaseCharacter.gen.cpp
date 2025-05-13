// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_BaseCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_BaseCharacter();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_BaseCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ACode_BaseCharacter::StaticRegisterNativesACode_BaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_BaseCharacter);
	UClass* Z_Construct_UClass_ACode_BaseCharacter_NoRegister()
	{
		return ACode_BaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACode_BaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_BaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Code_BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Code_BaseCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_BaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_BaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_BaseCharacter_Statics::ClassParams = {
		&ACode_BaseCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_BaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_BaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ACode_BaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_BaseCharacter.OuterSingleton, Z_Construct_UClass_ACode_BaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_BaseCharacter.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_BaseCharacter>()
	{
		return ACode_BaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_BaseCharacter);
	ACode_BaseCharacter::~ACode_BaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_BaseCharacter, ACode_BaseCharacter::StaticClass, TEXT("ACode_BaseCharacter"), &Z_Registration_Info_UClass_ACode_BaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_BaseCharacter), 3903753383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BaseCharacter_h_2996411811(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
