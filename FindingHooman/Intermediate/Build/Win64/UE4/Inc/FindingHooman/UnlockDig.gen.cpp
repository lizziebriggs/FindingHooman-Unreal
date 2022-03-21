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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonesToCollect_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bonesToCollect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonesCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bonesCollected;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesToCollect_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockDig.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesToCollect = { "bonesToCollect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockDig, bonesToCollect), METADATA_PARAMS(Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesToCollect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesToCollect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesCollected_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockDig.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesCollected = { "bonesCollected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockDig, bonesCollected), METADATA_PARAMS(Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesCollected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnlockDig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesToCollect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockDig_Statics::NewProp_bonesCollected,
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
	IMPLEMENT_CLASS(AUnlockDig, 4210214585);
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
