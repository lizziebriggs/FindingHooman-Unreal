// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/FindingHoomanCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindingHoomanCharacter() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AFindingHoomanCharacter_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_AFindingHoomanCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFindingHoomanCharacter::StaticRegisterNativesAFindingHoomanCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFindingHoomanCharacter_NoRegister()
	{
		return AFindingHoomanCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFindingHoomanCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFindingHoomanCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FindingHoomanCharacter.h" },
		{ "ModuleRelativePath", "FindingHoomanCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FindingHoomanCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFindingHoomanCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FindingHoomanCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFindingHoomanCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "FindingHoomanCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFindingHoomanCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "FindingHoomanCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFindingHoomanCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFindingHoomanCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFindingHoomanCharacter_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFindingHoomanCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFindingHoomanCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFindingHoomanCharacter_Statics::ClassParams = {
		&AFindingHoomanCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFindingHoomanCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFindingHoomanCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFindingHoomanCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFindingHoomanCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFindingHoomanCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFindingHoomanCharacter, 3599599322);
	template<> FINDINGHOOMAN_API UClass* StaticClass<AFindingHoomanCharacter>()
	{
		return AFindingHoomanCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFindingHoomanCharacter(Z_Construct_UClass_AFindingHoomanCharacter, &AFindingHoomanCharacter::StaticClass, TEXT("/Script/FindingHooman"), TEXT("AFindingHoomanCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFindingHoomanCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
