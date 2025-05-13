// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_pickupObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_pickupObjectInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_pickupObjectInterface();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_pickupObjectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	DEFINE_FUNCTION(ICode_pickupObjectInterface::execUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Use_Implementation();
		P_NATIVE_END;
	}
	void ICode_pickupObjectInterface::Use()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Use instead.");
	}
	void UCode_pickupObjectInterface::StaticRegisterNativesUCode_pickupObjectInterface()
	{
		UClass* Class = UCode_pickupObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Use", &ICode_pickupObjectInterface::execUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCode_pickupObjectInterface_Use_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCode_pickupObjectInterface_Use_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_pickupObjectInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCode_pickupObjectInterface_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCode_pickupObjectInterface, nullptr, "Use", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCode_pickupObjectInterface_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_pickupObjectInterface_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCode_pickupObjectInterface_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCode_pickupObjectInterface_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCode_pickupObjectInterface);
	UClass* Z_Construct_UClass_UCode_pickupObjectInterface_NoRegister()
	{
		return UCode_pickupObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCode_pickupObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCode_pickupObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCode_pickupObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCode_pickupObjectInterface_Use, "Use" }, // 4176426468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCode_pickupObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_pickupObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCode_pickupObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICode_pickupObjectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCode_pickupObjectInterface_Statics::ClassParams = {
		&UCode_pickupObjectInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCode_pickupObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCode_pickupObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCode_pickupObjectInterface()
	{
		if (!Z_Registration_Info_UClass_UCode_pickupObjectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCode_pickupObjectInterface.OuterSingleton, Z_Construct_UClass_UCode_pickupObjectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCode_pickupObjectInterface.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<UCode_pickupObjectInterface>()
	{
		return UCode_pickupObjectInterface::StaticClass();
	}
	UCode_pickupObjectInterface::UCode_pickupObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCode_pickupObjectInterface);
	UCode_pickupObjectInterface::~UCode_pickupObjectInterface() {}
	static FName NAME_UCode_pickupObjectInterface_Use = FName(TEXT("Use"));
	void ICode_pickupObjectInterface::Execute_Use(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCode_pickupObjectInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCode_pickupObjectInterface_Use);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICode_pickupObjectInterface*)(O->GetNativeInterfaceAddress(UCode_pickupObjectInterface::StaticClass())))
		{
			I->Use_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_pickupObjectInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_pickupObjectInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCode_pickupObjectInterface, UCode_pickupObjectInterface::StaticClass, TEXT("UCode_pickupObjectInterface"), &Z_Registration_Info_UClass_UCode_pickupObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCode_pickupObjectInterface), 4281880880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_pickupObjectInterface_h_681543726(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_pickupObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_pickupObjectInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
