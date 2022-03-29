// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/NPCs/BirbActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBirbActor() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ABirbActor_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ABirbActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ABirbActor::execRandomPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->RandomPosition();
		P_NATIVE_END;
	}
	void ABirbActor::StaticRegisterNativesABirbActor()
	{
		UClass* Class = ABirbActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RandomPosition", &ABirbActor::execRandomPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABirbActor_RandomPosition_Statics
	{
		struct BirbActor_eventRandomPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BirbActor_eventRandomPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPCs/BirbActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABirbActor, nullptr, "RandomPosition", nullptr, nullptr, sizeof(BirbActor_eventRandomPosition_Parms), Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABirbActor_RandomPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABirbActor_RandomPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABirbActor_NoRegister()
	{
		return ABirbActor::StaticClass();
	}
	struct Z_Construct_UClass_ABirbActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeInAir_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAir_MetaData[];
#endif
		static void NewProp_inAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inAir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABirbActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABirbActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABirbActor_RandomPosition, "RandomPosition" }, // 3929580980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirbActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPCs/BirbActor.h" },
		{ "ModuleRelativePath", "NPCs/BirbActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirbActor_Statics::NewProp_timeInAir_MetaData[] = {
		{ "Category", "BirbActor" },
		{ "ModuleRelativePath", "NPCs/BirbActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirbActor_Statics::NewProp_timeInAir = { "timeInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirbActor, timeInAir), METADATA_PARAMS(Z_Construct_UClass_ABirbActor_Statics::NewProp_timeInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirbActor_Statics::NewProp_timeInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirbActor_Statics::NewProp_fTimer_MetaData[] = {
		{ "Category", "BirbActor" },
		{ "ModuleRelativePath", "NPCs/BirbActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABirbActor_Statics::NewProp_fTimer = { "fTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirbActor, fTimer), METADATA_PARAMS(Z_Construct_UClass_ABirbActor_Statics::NewProp_fTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirbActor_Statics::NewProp_fTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirbActor_Statics::NewProp_startPos_MetaData[] = {
		{ "Category", "BirbActor" },
		{ "ModuleRelativePath", "NPCs/BirbActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABirbActor_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABirbActor, startPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABirbActor_Statics::NewProp_startPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirbActor_Statics::NewProp_startPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir_MetaData[] = {
		{ "Category", "BirbActor" },
		{ "ModuleRelativePath", "NPCs/BirbActor.h" },
	};
#endif
	void Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir_SetBit(void* Obj)
	{
		((ABirbActor*)Obj)->inAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir = { "inAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABirbActor), &Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABirbActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirbActor_Statics::NewProp_timeInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirbActor_Statics::NewProp_fTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirbActor_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABirbActor_Statics::NewProp_inAir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABirbActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirbActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABirbActor_Statics::ClassParams = {
		&ABirbActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABirbActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABirbActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABirbActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABirbActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABirbActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABirbActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABirbActor, 610012651);
	template<> FINDINGHOOMAN_API UClass* StaticClass<ABirbActor>()
	{
		return ABirbActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABirbActor(Z_Construct_UClass_ABirbActor, &ABirbActor::StaticClass, TEXT("/Script/FindingHooman"), TEXT("ABirbActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABirbActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
