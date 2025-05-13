// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Self_Final_Project/Public/Code_LightSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCode_LightSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_InteractableObject();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_LightBulb_NoRegister();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_LightSwitch();
	SELF_FINAL_PROJECT_API UClass* Z_Construct_UClass_ACode_LightSwitch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Self_Final_Project();
// End Cross Module References
	DEFINE_FUNCTION(ACode_LightSwitch::execOnPlayerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerExit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACode_LightSwitch::execOnPlayerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACode_LightSwitch::StaticRegisterNativesACode_LightSwitch()
	{
		UClass* Class = ACode_LightSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnter", &ACode_LightSwitch::execOnPlayerEnter },
			{ "OnPlayerExit", &ACode_LightSwitch::execOnPlayerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics
	{
		struct Code_LightSwitch_eventOnPlayerEnter_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Code_LightSwitch_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Code_LightSwitch_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACode_LightSwitch, nullptr, "OnPlayerEnter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::Code_LightSwitch_eventOnPlayerEnter_Parms), Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics
	{
		struct Code_LightSwitch_eventOnPlayerExit_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerExit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Code_LightSwitch_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACode_LightSwitch, nullptr, "OnPlayerExit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::Code_LightSwitch_eventOnPlayerExit_Parms), Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACode_LightSwitch);
	UClass* Z_Construct_UClass_ACode_LightSwitch_NoRegister()
	{
		return ACode_LightSwitch::StaticClass();
	}
	struct Z_Construct_UClass_ACode_LightSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchFrame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedBulb_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConnectedBulb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACode_LightSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACode_InteractableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Self_Final_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACode_LightSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACode_LightSwitch_OnPlayerEnter, "OnPlayerEnter" }, // 1881359014
		{ &Z_Construct_UFunction_ACode_LightSwitch_OnPlayerExit, "OnPlayerExit" }, // 2287090916
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightSwitch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Code_LightSwitch.h" },
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchFrame_MetaData[] = {
		{ "Category", "Code_LightSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchFrame = { "SwitchFrame", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightSwitch, SwitchFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchMesh_MetaData[] = {
		{ "Category", "Code_LightSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchMesh = { "SwitchMesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightSwitch, SwitchMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_InteractCollision_MetaData[] = {
		{ "Category", "Code_LightSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_InteractCollision = { "InteractCollision", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightSwitch, InteractCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_InteractCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_InteractCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_ConnectedBulb_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/Code_LightSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_ConnectedBulb = { "ConnectedBulb", nullptr, (EPropertyFlags)0x0024080000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACode_LightSwitch, ConnectedBulb), Z_Construct_UClass_ACode_LightBulb_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_ConnectedBulb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_ConnectedBulb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACode_LightSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_SwitchMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_InteractCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACode_LightSwitch_Statics::NewProp_ConnectedBulb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACode_LightSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACode_LightSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACode_LightSwitch_Statics::ClassParams = {
		&ACode_LightSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACode_LightSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACode_LightSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACode_LightSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACode_LightSwitch()
	{
		if (!Z_Registration_Info_UClass_ACode_LightSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACode_LightSwitch.OuterSingleton, Z_Construct_UClass_ACode_LightSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACode_LightSwitch.OuterSingleton;
	}
	template<> SELF_FINAL_PROJECT_API UClass* StaticClass<ACode_LightSwitch>()
	{
		return ACode_LightSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACode_LightSwitch);
	ACode_LightSwitch::~ACode_LightSwitch() {}
	struct Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACode_LightSwitch, ACode_LightSwitch::StaticClass, TEXT("ACode_LightSwitch"), &Z_Registration_Info_UClass_ACode_LightSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACode_LightSwitch), 3384993493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightSwitch_h_730995905(TEXT("/Script/Self_Final_Project"),
		Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Self_Final_Project_Source_Self_Final_Project_Public_Code_LightSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
