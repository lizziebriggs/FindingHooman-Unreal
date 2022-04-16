// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/HatMetagame/Acorn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcorn() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AAcorn_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AAcorn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	DEFINE_FUNCTION(AAcorn::execSetActive)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_state);
		P_NATIVE_END;
	}
	void AAcorn::StaticRegisterNativesAAcorn()
	{
		UClass* Class = AAcorn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetActive", &AAcorn::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAcorn_SetActive_Statics
	{
		struct Acorn_eventSetActive_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAcorn_SetActive_Statics::NewProp_state_SetBit(void* Obj)
	{
		((Acorn_eventSetActive_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAcorn_SetActive_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Acorn_eventSetActive_Parms), &Z_Construct_UFunction_AAcorn_SetActive_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAcorn_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAcorn_SetActive_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAcorn_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HatMetagame/Acorn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAcorn_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAcorn, nullptr, "SetActive", nullptr, nullptr, sizeof(Acorn_eventSetActive_Parms), Z_Construct_UFunction_AAcorn_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAcorn_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAcorn_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAcorn_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAcorn_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAcorn_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAcorn_NoRegister()
	{
		return AAcorn::StaticClass();
	}
	struct Z_Construct_UClass_AAcorn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAcorn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAcorn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAcorn_SetActive, "SetActive" }, // 1253773059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAcorn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HatMetagame/Acorn.h" },
		{ "ModuleRelativePath", "HatMetagame/Acorn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAcorn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAcorn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAcorn_Statics::ClassParams = {
		&AAcorn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAcorn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAcorn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAcorn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAcorn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAcorn, 3845391092);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AAcorn>()
	{
		return AAcorn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAcorn(Z_Construct_UClass_AAcorn, &AAcorn::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AAcorn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAcorn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
