// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_Interactable_Interface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_Interactable_Interface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_Interactable_Interface();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_Interactable_Interface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	DEFINE_FUNCTION(ICode_Interactable_Interface::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation();
		P_NATIVE_END;
	}
	void ICode_Interactable_Interface::Interact()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UCode_Interactable_Interface::StaticRegisterNativesUCode_Interactable_Interface()
	{
		UClass* Class = UCode_Interactable_Interface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ICode_Interactable_Interface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCode_Interactable_Interface_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCode_Interactable_Interface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_Interactable_Interface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCode_Interactable_Interface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCode_Interactable_Interface, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCode_Interactable_Interface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_Interactable_Interface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCode_Interactable_Interface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCode_Interactable_Interface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCode_Interactable_Interface);
	UClass* Z_Construct_UClass_UCode_Interactable_Interface_NoRegister()
	{
		return UCode_Interactable_Interface::StaticClass();
	}
	struct Z_Construct_UClass_UCode_Interactable_Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCode_Interactable_Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCode_Interactable_Interface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCode_Interactable_Interface_Interact, "Interact" }, // 857288838
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCode_Interactable_Interface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_Interactable_Interface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCode_Interactable_Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICode_Interactable_Interface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCode_Interactable_Interface_Statics::ClassParams = {
		&UCode_Interactable_Interface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCode_Interactable_Interface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCode_Interactable_Interface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCode_Interactable_Interface()
	{
		if (!Z_Registration_Info_UClass_UCode_Interactable_Interface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCode_Interactable_Interface.OuterSingleton, Z_Construct_UClass_UCode_Interactable_Interface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCode_Interactable_Interface.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<UCode_Interactable_Interface>()
	{
		return UCode_Interactable_Interface::StaticClass();
	}
	UCode_Interactable_Interface::UCode_Interactable_Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCode_Interactable_Interface);
	UCode_Interactable_Interface::~UCode_Interactable_Interface() {}
	static FName NAME_UCode_Interactable_Interface_Interact = FName(TEXT("Interact"));
	void ICode_Interactable_Interface::Execute_Interact(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCode_Interactable_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCode_Interactable_Interface_Interact);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICode_Interactable_Interface*)(O->GetNativeInterfaceAddress(UCode_Interactable_Interface::StaticClass())))
		{
			I->Interact_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_Interactable_Interface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_Interactable_Interface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCode_Interactable_Interface, UCode_Interactable_Interface::StaticClass, TEXT("UCode_Interactable_Interface"), &Z_Registration_Info_UClass_UCode_Interactable_Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCode_Interactable_Interface), 3557154919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_Interactable_Interface_h_1361359076(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_Interactable_Interface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_Interactable_Interface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
