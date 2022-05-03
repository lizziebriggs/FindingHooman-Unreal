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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasMirror_MetaData[];
#endif
		static void NewProp_hasMirror_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasMirror;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasBracelet_MetaData[];
#endif
		static void NewProp_hasBracelet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasBracelet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasPearlCollar_MetaData[];
#endif
		static void NewProp_hasPearlCollar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasPearlCollar;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)\n\x09\x09int scoreToWin;\n\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)\n\x09\x09int valueScore;*/" },
		{ "ModuleRelativePath", "MiniGames/UnlockOpen.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)\n               int scoreToWin;\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGameSettings)\n               int valueScore;" },
	};
#endif
	void Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror_SetBit(void* Obj)
	{
		((AUnlockOpen*)Obj)->hasMirror = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror = { "hasMirror", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockOpen), &Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockOpen.h" },
	};
#endif
	void Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet_SetBit(void* Obj)
	{
		((AUnlockOpen*)Obj)->hasBracelet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet = { "hasBracelet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockOpen), &Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar_MetaData[] = {
		{ "Category", "MiniGameSettings" },
		{ "ModuleRelativePath", "MiniGames/UnlockOpen.h" },
	};
#endif
	void Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar_SetBit(void* Obj)
	{
		((AUnlockOpen*)Obj)->hasPearlCollar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar = { "hasPearlCollar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnlockOpen), &Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnlockOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasMirror,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasBracelet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnlockOpen_Statics::NewProp_hasPearlCollar,
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
	IMPLEMENT_CLASS(AUnlockOpen, 3049438924);
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
