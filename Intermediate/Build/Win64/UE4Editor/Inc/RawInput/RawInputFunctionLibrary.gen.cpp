// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RawInput/Public/RawInputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputFunctionLibrary() {}
// Cross Module References
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_RawInput();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RAWINPUT_API UFunction* Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices();
// End Cross Module References
class UScriptStruct* FRegisteredDeviceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredDeviceInfo, Z_Construct_UPackage__Script_RawInput(), TEXT("RegisteredDeviceInfo"), sizeof(FRegisteredDeviceInfo), Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRegisteredDeviceInfo(FRegisteredDeviceInfo::StaticStruct, TEXT("/Script/RawInput"), TEXT("RegisteredDeviceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RawInput_StaticRegisterNativesFRegisteredDeviceInfo
{
	FScriptStruct_RawInput_StaticRegisterNativesFRegisteredDeviceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RegisteredDeviceInfo")),new UScriptStruct::TCppStructOps<FRegisteredDeviceInfo>);
	}
} ScriptStruct_RawInput_StaticRegisterNativesFRegisteredDeviceInfo;
	struct Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VendorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredDeviceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
		{ "ToolTip", "Driver supplied device name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
		{ "ToolTip", "Integer representation of the product ID (e.g. 0xC262 = 49762)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID = { UE4CodeGen_Private::EPropertyClass::Int, "ProductID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
		{ "ToolTip", "Integer representation of the vendor ID (e.g. 0xC262 = 49762)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID = { UE4CodeGen_Private::EPropertyClass::Int, "VendorID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle = { UE4CodeGen_Private::EPropertyClass::Int, "Handle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RegisteredDeviceInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FRegisteredDeviceInfo),
		alignof(FRegisteredDeviceInfo),
		Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RegisteredDeviceInfo"), sizeof(FRegisteredDeviceInfo), Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegisteredDeviceInfo_CRC() { return 3143858117U; }
	void URawInputFunctionLibrary::StaticRegisterNativesURawInputFunctionLibrary()
	{
		UClass* Class = URawInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRegisteredDevices", &URawInputFunctionLibrary::execGetRegisteredDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics
	{
		struct RawInputFunctionLibrary_eventGetRegisteredDevices_Parms
		{
			TArray<FRegisteredDeviceInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RawInputFunctionLibrary_eventGetRegisteredDevices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRegisteredDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URawInputFunctionLibrary, "GetRegisteredDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(RawInputFunctionLibrary_eventGetRegisteredDevices_Parms), Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister()
	{
		return URawInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URawInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URawInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices, "GetRegisteredDevices" }, // 3557889347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RawInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URawInputFunctionLibrary_Statics::ClassParams = {
		&URawInputFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URawInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URawInputFunctionLibrary, 3118633480);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URawInputFunctionLibrary(Z_Construct_UClass_URawInputFunctionLibrary, &URawInputFunctionLibrary::StaticClass, TEXT("/Script/RawInput"), TEXT("URawInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
