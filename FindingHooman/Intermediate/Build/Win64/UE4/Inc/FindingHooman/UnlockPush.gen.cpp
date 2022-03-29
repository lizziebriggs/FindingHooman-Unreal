// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/MiniGames/UnlockPush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockPush() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockPush_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockPush();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AMiniGame();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void AUnlockPush::StaticRegisterNativesAUnlockPush()
	{
	}
	UClass* Z_Construct_UClass_AUnlockPush_NoRegister()
	{
		return AUnlockPush::StaticClass();
	}
	struct Z_Construct_UClass_AUnlockPush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnlockPush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiniGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockPush_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniGames/UnlockPush.h" },
		{ "ModuleRelativePath", "MiniGames/UnlockPush.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnlockPush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnlockPush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnlockPush_Statics::ClassParams = {
		&AUnlockPush::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnlockPush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockPush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnlockPush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnlockPush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnlockPush, 2010706764);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AUnlockPush>()
	{
		return AUnlockPush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnlockPush(Z_Construct_UClass_AUnlockPush, &AUnlockPush::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AUnlockPush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnlockPush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
