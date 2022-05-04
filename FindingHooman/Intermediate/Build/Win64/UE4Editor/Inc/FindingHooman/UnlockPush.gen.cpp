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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasWrapper_MetaData[];
#endif
		static void NewProp_hasWrapper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasHotdog_MetaData[];
#endif
		static void NewProp_hasHotdog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasHotdog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasBun_MetaData[];
#endif
		static void NewProp_hasBun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasBun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockPush.h" },
	};
#endif
	void Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper_SetBit(void* Obj)
	{
		((AUnlockPush*)Obj)->hasWrapper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper = { "hasWrapper", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockPush), &Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockPush.h" },
	};
#endif
	void Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog_SetBit(void* Obj)
	{
		((AUnlockPush*)Obj)->hasHotdog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog = { "hasHotdog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockPush), &Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockPush.h" },
	};
#endif
	void Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun_SetBit(void* Obj)
	{
		((AUnlockPush*)Obj)->hasBun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun = { "hasBun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockPush), &Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnlockPush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasHotdog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockPush_Statics::NewProp_hasBun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnlockPush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnlockPush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnlockPush_Statics::ClassParams = {
		&AUnlockPush::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnlockPush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockPush_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AUnlockPush, 1132602517);
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
