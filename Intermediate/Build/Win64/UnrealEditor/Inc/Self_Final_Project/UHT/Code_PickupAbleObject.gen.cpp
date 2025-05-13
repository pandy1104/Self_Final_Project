// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_PickupAbleObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_PickupAbleObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupAbleObject();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupAbleObject_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_pickupObjectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	void ACode_PickupAbleObject::StaticRegisterNativesACode_PickupAbleObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_PickupAbleObject);
	UClass* Z_Construct_UClass_ACode_PickupAbleObject_NoRegister()
	{
		return ACode_PickupAbleObject::StaticClass();
	}
	struct Z_Construct_UClass_ACode_PickupAbleObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_PickupAbleObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_PickupAbleObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Code_PickupAbleObject.h" },
		{ "ModuleRelativePath", "Public/Code_PickupAbleObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Code_PickupAbleObject" },
		{ "ModuleRelativePath", "Public/Code_PickupAbleObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_PickupAbleObject, Name), METADATA_PARAMS(Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Code_PickupAbleObject" },
		{ "ModuleRelativePath", "Public/Code_PickupAbleObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_PickupAbleObject, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACode_PickupAbleObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_PickupAbleObject_Statics::NewProp_Icon,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACode_PickupAbleObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCode_pickupObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ACode_PickupAbleObject, ICode_pickupObjectInterface), false },  // 4281880880
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_PickupAbleObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_PickupAbleObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_PickupAbleObject_Statics::ClassParams = {
		&ACode_PickupAbleObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACode_PickupAbleObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupAbleObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_PickupAbleObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_PickupAbleObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_PickupAbleObject()
	{
		if (!Z_Registration_Info_UClass_ACode_PickupAbleObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_PickupAbleObject.OuterSingleton, Z_Construct_UClass_ACode_PickupAbleObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_PickupAbleObject.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_PickupAbleObject>()
	{
		return ACode_PickupAbleObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_PickupAbleObject);
	ACode_PickupAbleObject::~ACode_PickupAbleObject() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupAbleObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupAbleObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_PickupAbleObject, ACode_PickupAbleObject::StaticClass, TEXT("ACode_PickupAbleObject"), &Z_Registration_Info_UClass_ACode_PickupAbleObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_PickupAbleObject), 2143320291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupAbleObject_h_1355302227(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupAbleObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_PickupAbleObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
