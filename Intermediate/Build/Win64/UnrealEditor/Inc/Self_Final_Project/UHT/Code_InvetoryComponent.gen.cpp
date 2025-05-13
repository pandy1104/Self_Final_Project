// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_InvetoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_InvetoryComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_PickupAbleObject_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_InvetoryComponent();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_UCode_InvetoryComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	DEFINE_FUNCTION(UCode_InvetoryComponent::execGetActiveItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACode_PickupAbleObject**)Z_Param__Result=P_THIS->GetActiveItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCode_InvetoryComponent::execSetActiveSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCode_InvetoryComponent::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCode_InvetoryComponent::execPickUp)
	{
		P_GET_OBJECT(ACode_PickupAbleObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp(Z_Param_Item);
		P_NATIVE_END;
	}
	void UCode_InvetoryComponent::StaticRegisterNativesUCode_InvetoryComponent()
	{
		UClass* Class = UCode_InvetoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &UCode_InvetoryComponent::execDrop },
			{ "GetActiveItem", &UCode_InvetoryComponent::execGetActiveItem },
			{ "PickUp", &UCode_InvetoryComponent::execPickUp },
			{ "SetActiveSlot", &UCode_InvetoryComponent::execSetActiveSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCode_InvetoryComponent_Drop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCode_InvetoryComponent_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCode_InvetoryComponent_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCode_InvetoryComponent, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCode_InvetoryComponent_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCode_InvetoryComponent_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCode_InvetoryComponent_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics
	{
		struct Code_InvetoryComponent_eventGetActiveItem_Parms
		{
			ACode_PickupAbleObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_InvetoryComponent_eventGetActiveItem_Parms, ReturnValue), Z_Construct_UClass_ACode_PickupAbleObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCode_InvetoryComponent, nullptr, "GetActiveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::Code_InvetoryComponent_eventGetActiveItem_Parms), Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics
	{
		struct Code_InvetoryComponent_eventPickUp_Parms
		{
			ACode_PickupAbleObject* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_InvetoryComponent_eventPickUp_Parms, Item), Z_Construct_UClass_ACode_PickupAbleObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCode_InvetoryComponent, nullptr, "PickUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::Code_InvetoryComponent_eventPickUp_Parms), Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCode_InvetoryComponent_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCode_InvetoryComponent_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics
	{
		struct Code_InvetoryComponent_eventSetActiveSlot_Parms
		{
			int32 Slot;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_InvetoryComponent_eventSetActiveSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCode_InvetoryComponent, nullptr, "SetActiveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::Code_InvetoryComponent_eventSetActiveSlot_Parms), Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCode_InvetoryComponent);
	UClass* Z_Construct_UClass_UCode_InvetoryComponent_NoRegister()
	{
		return UCode_InvetoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCode_InvetoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InventorySize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCode_InvetoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCode_InvetoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCode_InvetoryComponent_Drop, "Drop" }, // 2309258992
		{ &Z_Construct_UFunction_UCode_InvetoryComponent_GetActiveItem, "GetActiveItem" }, // 2211438184
		{ &Z_Construct_UFunction_UCode_InvetoryComponent_PickUp, "PickUp" }, // 393845889
		{ &Z_Construct_UFunction_UCode_InvetoryComponent_SetActiveSlot, "SetActiveSlot" }, // 2435145295
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCode_InvetoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Code_InvetoryComponent.h" },
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_InventorySize_MetaData[] = {
		{ "Category", "Code_InvetoryComponent" },
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCode_InvetoryComponent, InventorySize), METADATA_PARAMS(Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_InventorySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_InventorySize_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACode_PickupAbleObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Code_InvetoryComponent" },
		{ "ModuleRelativePath", "Public/Code_InvetoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCode_InvetoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCode_InvetoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_InventorySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCode_InvetoryComponent_Statics::NewProp_Inventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCode_InvetoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCode_InvetoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCode_InvetoryComponent_Statics::ClassParams = {
		&UCode_InvetoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCode_InvetoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCode_InvetoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCode_InvetoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCode_InvetoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCode_InvetoryComponent()
	{
		if (!Z_Registration_Info_UClass_UCode_InvetoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCode_InvetoryComponent.OuterSingleton, Z_Construct_UClass_UCode_InvetoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCode_InvetoryComponent.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<UCode_InvetoryComponent>()
	{
		return UCode_InvetoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCode_InvetoryComponent);
	UCode_InvetoryComponent::~UCode_InvetoryComponent() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_InvetoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_InvetoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCode_InvetoryComponent, UCode_InvetoryComponent::StaticClass, TEXT("UCode_InvetoryComponent"), &Z_Registration_Info_UClass_UCode_InvetoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCode_InvetoryComponent), 4251893888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_InvetoryComponent_h_3169810638(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_InvetoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_InvetoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
