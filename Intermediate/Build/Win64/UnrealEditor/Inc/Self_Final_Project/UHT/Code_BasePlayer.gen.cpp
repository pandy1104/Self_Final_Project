// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_BasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_BasePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_BaseCharacter();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_BasePlayer();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_BasePlayer_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_InvetoryComponent_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_PlayerHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ACode_BasePlayer::StaticRegisterNativesACode_BasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_BasePlayer);
	UClass* Z_Construct_UClass_ACode_BasePlayer_NoRegister()
	{
		return ACode_BasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACode_BasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_BasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACode_BaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BasePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Code_BasePlayer.h" },
		{ "ModuleRelativePath", "Public/Code_BasePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Code_BasePlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_BasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_BasePlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Code_BasePlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_BasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_BasePlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Code_BasePlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_BasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_BasePlayer, InventoryComponent), Z_Construct_UClass_UCode_InvetoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Code_BasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_BasePlayer, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCode_PlayerHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpotLight_MetaData[] = {
		{ "Category", "Code_BasePlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_BasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_BasePlayer, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpotLight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACode_BasePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_InventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_BasePlayer_Statics::NewProp_SpotLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_BasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_BasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_BasePlayer_Statics::ClassParams = {
		&ACode_BasePlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACode_BasePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_BasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_BasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_BasePlayer()
	{
		if (!Z_Registration_Info_UClass_ACode_BasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_BasePlayer.OuterSingleton, Z_Construct_UClass_ACode_BasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_BasePlayer.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_BasePlayer>()
	{
		return ACode_BasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_BasePlayer);
	ACode_BasePlayer::~ACode_BasePlayer() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_BasePlayer, ACode_BasePlayer::StaticClass, TEXT("ACode_BasePlayer"), &Z_Registration_Info_UClass_ACode_BasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_BasePlayer), 114891518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BasePlayer_h_479923611(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_BasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
