// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/FindingHoomanGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindingHoomanGameMode() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AFindingHoomanGameMode_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AFindingHoomanGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void AFindingHoomanGameMode::StaticRegisterNativesAFindingHoomanGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFindingHoomanGameMode_NoRegister()
	{
		return AFindingHoomanGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFindingHoomanGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFindingHoomanGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FindingHoomanGameMode.h" },
		{ "ModuleRelativePath", "FindingHoomanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFindingHoomanGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFindingHoomanGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFindingHoomanGameMode_Statics::ClassParams = {
		&AFindingHoomanGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFindingHoomanGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFindingHoomanGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFindingHoomanGameMode, 3408488802);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AFindingHoomanGameMode>()
	{
		return AFindingHoomanGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFindingHoomanGameMode(Z_Construct_UClass_AFindingHoomanGameMode, &AFindingHoomanGameMode::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AFindingHoomanGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFindingHoomanGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
