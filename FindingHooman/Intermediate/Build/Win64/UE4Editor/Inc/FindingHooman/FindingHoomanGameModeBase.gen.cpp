// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/FindingHoomanGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindingHoomanGameModeBase() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AFindingHoomanGameModeBase_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AFindingHoomanGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	void AFindingHoomanGameModeBase::StaticRegisterNativesAFindingHoomanGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFindingHoomanGameModeBase_NoRegister()
	{
		return AFindingHoomanGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFindingHoomanGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FindingHoomanGameModeBase.h" },
		{ "ModuleRelativePath", "FindingHoomanGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFindingHoomanGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::ClassParams = {
		&AFindingHoomanGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFindingHoomanGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFindingHoomanGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFindingHoomanGameModeBase, 3274513324);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AFindingHoomanGameModeBase>()
	{
		return AFindingHoomanGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFindingHoomanGameModeBase(Z_Construct_UClass_AFindingHoomanGameModeBase, &AFindingHoomanGameModeBase::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AFindingHoomanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFindingHoomanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
