// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/MiniGames/UnlockBark.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockBark() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockBark_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AUnlockBark();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AMiniGame();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_ABirbActor_NoRegister();
// End Cross Module References
	void AUnlockBark::StaticRegisterNativesAUnlockBark()
	{
	}
	UClass* Z_Construct_UClass_AUnlockBark_NoRegister()
	{
		return AUnlockBark::StaticClass();
	}
	struct Z_Construct_UClass_AUnlockBark_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_birbs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_birbs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_birbs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_goalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_goalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_infinite_MetaData[];
#endif
		static void NewProp_infinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_infinite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnlockBark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiniGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockBark_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiniGames/UnlockBark.h" },
		{ "ModuleRelativePath", "MiniGames/UnlockBark.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs_Inner = { "birbs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABirbActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockBark.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs = { "birbs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockBark, birbs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockBark_Statics::NewProp_goalTime_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockBark.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnlockBark_Statics::NewProp_goalTime = { "goalTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnlockBark, goalTime), METADATA_PARAMS(Z_Construct_UClass_AUnlockBark_Statics::NewProp_goalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockBark_Statics::NewProp_goalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockBark.h" },
	};
#endif
	void Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite_SetBit(void* Obj)
	{
		((AUnlockBark*)Obj)->infinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite = { "infinite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockBark), &Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnlockBark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockBark_Statics::NewProp_birbs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockBark_Statics::NewProp_goalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockBark_Statics::NewProp_infinite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnlockBark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnlockBark>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnlockBark_Statics::ClassParams = {
		&AUnlockBark::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnlockBark_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockBark_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnlockBark_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockBark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnlockBark()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnlockBark_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnlockBark, 648639571);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AUnlockBark>()
	{
		return AUnlockBark::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnlockBark(Z_Construct_UClass_AUnlockBark, &AUnlockBark::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AUnlockBark"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnlockBark);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
