// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/MiniGames/UnlockDig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockDig() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockDig_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockDig();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AMiniGame();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void AUnlockDig::StaticRegisterNativesAUnlockDig()
	{
	}
	UClass* Z_Construct_UClass_AUnlockDig_NoRegister()
	{
		return AUnlockDig::StaticClass();
	}
	struct Z_Construct_UClass_AUnlockDig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountToDig_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amountToDig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountDigged_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amountDigged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_goalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_goalTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnlockDig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiniGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockDig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniGames/UnlockDig.h" },
		{ "ModuleRelativePath", "MiniGames/UnlockDig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountToDig_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockDig.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountToDig = { "amountToDig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockDig, amountToDig), METADATA_PARAMS(Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountToDig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountToDig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountDigged_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockDig.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountDigged = { "amountDigged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockDig, amountDigged), METADATA_PARAMS(Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountDigged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountDigged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockDig_Statics::NewProp_goalTime_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockDig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnlockDig_Statics::NewProp_goalTime = { "goalTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockDig, goalTime), METADATA_PARAMS(Z_Construct_UClass_AUnlockDig_Statics::NewProp_goalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::NewProp_goalTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnlockDig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountToDig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockDig_Statics::NewProp_amountDigged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockDig_Statics::NewProp_goalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnlockDig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnlockDig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnlockDig_Statics::ClassParams = {
		&AUnlockDig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnlockDig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnlockDig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnlockDig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnlockDig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnlockDig, 19791262);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AUnlockDig>()
	{
		return AUnlockDig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnlockDig(Z_Construct_UClass_AUnlockDig, &AUnlockDig::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AUnlockDig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnlockDig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
