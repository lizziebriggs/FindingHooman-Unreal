// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/MiniGames/UnlockOpen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockOpen() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockOpen_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockOpen();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AMiniGame();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void AUnlockOpen::StaticRegisterNativesAUnlockOpen()
	{
	}
	UClass* Z_Construct_UClass_AUnlockOpen_NoRegister()
	{
		return AUnlockOpen::StaticClass();
	}
	struct Z_Construct_UClass_AUnlockOpen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scoreToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_valueScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_valueScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnlockOpen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiniGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockOpen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniGames/UnlockOpen.h" },
		{ "ModuleRelativePath", "MiniGames/UnlockOpen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockOpen_Statics::NewProp_scoreToWin_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockOpen.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnlockOpen_Statics::NewProp_scoreToWin = { "scoreToWin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockOpen, scoreToWin), METADATA_PARAMS(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_scoreToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_scoreToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockOpen_Statics::NewProp_valueScore_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockOpen.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUnlockOpen_Statics::NewProp_valueScore = { "valueScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockOpen, valueScore), METADATA_PARAMS(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_valueScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_valueScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnlockOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockOpen_Statics::NewProp_scoreToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockOpen_Statics::NewProp_valueScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnlockOpen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnlockOpen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnlockOpen_Statics::ClassParams = {
		&AUnlockOpen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnlockOpen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnlockOpen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnlockOpen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnlockOpen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnlockOpen, 2750284690);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AUnlockOpen>()
	{
		return AUnlockOpen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnlockOpen(Z_Construct_UClass_AUnlockOpen, &AUnlockOpen::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AUnlockOpen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnlockOpen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
