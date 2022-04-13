// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/HatMetagame/SquirrelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquirrelActor() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ASquirrelActor_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ASquirrelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AAcorn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASquirrelActor::execThrowAcorn)
	{
		P_GET_STRUCT(FVector,Z_Param_spawnPos);
		P_GET_STRUCT(FVector,Z_Param_throwTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowAcorn(Z_Param_spawnPos,Z_Param_throwTo);
		P_NATIVE_END;
	}
	void ASquirrelActor::StaticRegisterNativesASquirrelActor()
	{
		UClass* Class = ASquirrelActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ThrowAcorn", &ASquirrelActor::execThrowAcorn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics
	{
		struct SquirrelActor_eventThrowAcorn_Parms
		{
			FVector spawnPos;
			FVector throwTo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_throwTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::NewProp_spawnPos = { "spawnPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquirrelActor_eventThrowAcorn_Parms, spawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::NewProp_throwTo = { "throwTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquirrelActor_eventThrowAcorn_Parms, throwTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::NewProp_spawnPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::NewProp_throwTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquirrelActor, nullptr, "ThrowAcorn", nullptr, nullptr, sizeof(SquirrelActor_eventThrowAcorn_Parms), Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquirrelActor_ThrowAcorn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquirrelActor_ThrowAcorn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASquirrelActor_NoRegister()
	{
		return ASquirrelActor::StaticClass();
	}
	struct Z_Construct_UClass_ASquirrelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acornBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_acornBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_poolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_poolSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_acornPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acornPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_acornPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextAcorn_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nextAcorn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASquirrelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASquirrelActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquirrelActor_ThrowAcorn, "ThrowAcorn" }, // 2085033578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquirrelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HatMetagame/SquirrelActor.h" },
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornBP_MetaData[] = {
		{ "Category", "AcornPool" },
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornBP = { "acornBP", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquirrelActor, acornBP), Z_Construct_UClass_AAcorn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquirrelActor_Statics::NewProp_poolSize_MetaData[] = {
		{ "Category", "AcornPool" },
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASquirrelActor_Statics::NewProp_poolSize = { "poolSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquirrelActor, poolSize), METADATA_PARAMS(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_poolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_poolSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool_Inner = { "acornPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAcorn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool_MetaData[] = {
		{ "Category", "AcornPool" },
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool = { "acornPool", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquirrelActor, acornPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquirrelActor_Statics::NewProp_nextAcorn_MetaData[] = {
		{ "Category", "AcornPool" },
		{ "ModuleRelativePath", "HatMetagame/SquirrelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASquirrelActor_Statics::NewProp_nextAcorn = { "nextAcorn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquirrelActor, nextAcorn), METADATA_PARAMS(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_nextAcorn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::NewProp_nextAcorn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquirrelActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquirrelActor_Statics::NewProp_poolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquirrelActor_Statics::NewProp_acornPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquirrelActor_Statics::NewProp_nextAcorn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASquirrelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquirrelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASquirrelActor_Statics::ClassParams = {
		&ASquirrelActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASquirrelActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASquirrelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASquirrelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASquirrelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASquirrelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASquirrelActor, 3769657469);
	template<> FINDINGHOOMAN_API UClass* StaticClass<ASquirrelActor>()
	{
		return ASquirrelActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASquirrelActor(Z_Construct_UClass_ASquirrelActor, &ASquirrelActor::StaticClass, TEXT("/Script/FindingHooman"), TEXT("ASquirrelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASquirrelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
