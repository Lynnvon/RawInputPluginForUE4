// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRegisteredDeviceInfo;
#ifdef RAWINPUT_RawInputFunctionLibrary_generated_h
#error "RawInputFunctionLibrary.generated.h already included, missing '#pragma once' in RawInputFunctionLibrary.h"
#endif
#define RAWINPUT_RawInputFunctionLibrary_generated_h

#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRegisteredDevices) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FRegisteredDeviceInfo>*)Z_Param__Result=URawInputFunctionLibrary::GetRegisteredDevices(); \
		P_NATIVE_END; \
	}


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRegisteredDevices) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FRegisteredDeviceInfo>*)Z_Param__Result=URawInputFunctionLibrary::GetRegisteredDevices(); \
		P_NATIVE_END; \
	}


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_URawInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URawInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RawInput"), NO_API) \
	DECLARE_SERIALIZER(URawInputFunctionLibrary)


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_INCLASS \
private: \
	static void StaticRegisterNativesURawInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_URawInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URawInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RawInput"), NO_API) \
	DECLARE_SERIALIZER(URawInputFunctionLibrary)


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawInputFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URawInputFunctionLibrary(URawInputFunctionLibrary&&); \
	NO_API URawInputFunctionLibrary(const URawInputFunctionLibrary&); \
public:


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URawInputFunctionLibrary(URawInputFunctionLibrary&&); \
	NO_API URawInputFunctionLibrary(const URawInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawInputFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawInputFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawInputFunctionLibrary)


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_PRIVATE_PROPERTY_OFFSET
#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_140_PROLOG
#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_PRIVATE_PROPERTY_OFFSET \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_RPC_WRAPPERS \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_INCLASS \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_PRIVATE_PROPERTY_OFFSET \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_INCLASS_NO_PURE_DECLS \
	FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlightSim_Plugins_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
