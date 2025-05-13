// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Self_Final_ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelf_Final_ProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ASelf_Final_ProjectGameModeBase();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ASelf_Final_ProjectGameModeBase::StaticRegisterNativesASelf_Final_ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASelf_Final_ProjectGameModeBase);
	UClass* Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_NoRegister()
	{
		return ASelf_Final_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Self_Final_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Self_Final_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelf_Final_ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::ClassParams = {
		&ASelf_Final_ProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelf_Final_ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASelf_Final_ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelf_Final_ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_ASelf_Final_ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASelf_Final_ProjectGameModeBase.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ASelf_Final_ProjectGameModeBase>()
	{
		return ASelf_Final_ProjectGameModeBase::StaticClass();
	}
	ASelf_Final_ProjectGameModeBase::ASelf_Final_ProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelf_Final_ProjectGameModeBase);
	ASelf_Final_ProjectGameModeBase::~ASelf_Final_ProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Self_Final_ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Self_Final_ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASelf_Final_ProjectGameModeBase, ASelf_Final_ProjectGameModeBase::StaticClass, TEXT("ASelf_Final_ProjectGameModeBase"), &Z_Registration_Info_UClass_ASelf_Final_ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelf_Final_ProjectGameModeBase), 3146903936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Self_Final_ProjectGameModeBase_h_574298995(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Self_Final_ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Self_Final_ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
