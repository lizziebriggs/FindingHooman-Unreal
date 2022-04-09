// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindingHooman/Interfaces/BarkInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarkInterface() {}
// Cross Module References
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UBarkInterface_NoRegister();
	FINDINGHOOMAN_API UClass* Z_Construct_UClass_UBarkInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FindingHooman();
// End Cross Module References
	DEFINE_FUNCTION(IBarkInterface::execBarkEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BarkEvent_Implementation();
		P_NATIVE_END;
	}
	void IBarkInterface::BarkEvent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BarkEvent instead.");
	}
	void UBarkInterface::StaticRegisterNativesUBarkInterface()
	{
		UClass* Class = UBarkInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BarkEvent", &IBarkInterface::execBarkEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBarkInterface_BarkEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarkInterface_BarkEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/BarkInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarkInterface_BarkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarkInterface, nullptr, "BarkEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarkInterface_BarkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarkInterface_BarkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarkInterface_BarkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBarkInterface_BarkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBarkInterface_NoRegister()
	{
		return UBarkInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBarkInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBarkInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FindingHooman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBarkInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBarkInterface_BarkEvent, "BarkEvent" }, // 4174568571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarkInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/BarkInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBarkInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBarkInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBarkInterface_Statics::ClassParams = {
		&UBarkInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBarkInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBarkInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBarkInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBarkInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBarkInterface, 4189794371);
	template<> FINDINGHOOMAN_API UClass* StaticClass<UBarkInterface>()
	{
		return UBarkInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBarkInterface(Z_Construct_UClass_UBarkInterface, &UBarkInterface::StaticClass, TEXT("/Script/FindingHooman"), TEXT("UBarkInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBarkInterface);
	static FName NAME_UBarkInterface_BarkEvent = FName(TEXT("BarkEvent"));
	void IBarkInterface::Execute_BarkEvent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBarkInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBarkInterface_BarkEvent);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBarkInterface*)(O->GetNativeInterfaceAddress(UBarkInterface::StaticClass())))
		{
			I->BarkEvent_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
