// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericPlatform/GenericApplicationMessageHandler.h"
#include "RawInputFunctionLibrary.generated.h"

struct RAWINPUT_API FRawInputKeyNames
{
	static const FGamepadKeyNames::Type GenericUSBController_Axis1;
	static const FGamepadKeyNames::Type GenericUSBController_Axis2;
	static const FGamepadKeyNames::Type GenericUSBController_Axis3;
	static const FGamepadKeyNames::Type GenericUSBController_Axis4;
	static const FGamepadKeyNames::Type GenericUSBController_Axis5;
	static const FGamepadKeyNames::Type GenericUSBController_Axis6;
	static const FGamepadKeyNames::Type GenericUSBController_Axis7;
	static const FGamepadKeyNames::Type GenericUSBController_Axis8;

	static const FGamepadKeyNames::Type GenericUSBController_Button1;
	static const FGamepadKeyNames::Type GenericUSBController_Button2;
	static const FGamepadKeyNames::Type GenericUSBController_Button3;
	static const FGamepadKeyNames::Type GenericUSBController_Button4;
	static const FGamepadKeyNames::Type GenericUSBController_Button5;
	static const FGamepadKeyNames::Type GenericUSBController_Button6;
	static const FGamepadKeyNames::Type GenericUSBController_Button7;
	static const FGamepadKeyNames::Type GenericUSBController_Button8;
	static const FGamepadKeyNames::Type GenericUSBController_Button9;
	static const FGamepadKeyNames::Type GenericUSBController_Button10;
	static const FGamepadKeyNames::Type GenericUSBController_Button11;
	static const FGamepadKeyNames::Type GenericUSBController_Button12;
	static const FGamepadKeyNames::Type GenericUSBController_Button13;
	static const FGamepadKeyNames::Type GenericUSBController_Button14;
	static const FGamepadKeyNames::Type GenericUSBController_Button15;
	static const FGamepadKeyNames::Type GenericUSBController_Button16;
	static const FGamepadKeyNames::Type GenericUSBController_Button17;
	static const FGamepadKeyNames::Type GenericUSBController_Button18;
	static const FGamepadKeyNames::Type GenericUSBController_Button19;
	static const FGamepadKeyNames::Type GenericUSBController_Button20;

	static const FGamepadKeyNames::Type GenericUSBController_Button21;
	static const FGamepadKeyNames::Type GenericUSBController_Button22;
	static const FGamepadKeyNames::Type GenericUSBController_Button23;
	static const FGamepadKeyNames::Type GenericUSBController_Button24;
	static const FGamepadKeyNames::Type GenericUSBController_Button25;
	static const FGamepadKeyNames::Type GenericUSBController_Button26;
	static const FGamepadKeyNames::Type GenericUSBController_Button27;
	static const FGamepadKeyNames::Type GenericUSBController_Button28;
	static const FGamepadKeyNames::Type GenericUSBController_Button29;
	static const FGamepadKeyNames::Type GenericUSBController_Button30;
	static const FGamepadKeyNames::Type GenericUSBController_Button31;
	static const FGamepadKeyNames::Type GenericUSBController_Button32;
	static const FGamepadKeyNames::Type GenericUSBController_Button33;
	static const FGamepadKeyNames::Type GenericUSBController_Button34;
	static const FGamepadKeyNames::Type GenericUSBController_Button35;
	static const FGamepadKeyNames::Type GenericUSBController_Button36;
	static const FGamepadKeyNames::Type GenericUSBController_Button37;
	static const FGamepadKeyNames::Type GenericUSBController_Button38;
	static const FGamepadKeyNames::Type GenericUSBController_Button39;
	static const FGamepadKeyNames::Type GenericUSBController_Button40;
};

struct RAWINPUT_API FRawInputKeys
{
	static const FKey GenericUSBController_Axis1;
	static const FKey GenericUSBController_Axis2;
	static const FKey GenericUSBController_Axis3;
	static const FKey GenericUSBController_Axis4;
	static const FKey GenericUSBController_Axis5;
	static const FKey GenericUSBController_Axis6;
	static const FKey GenericUSBController_Axis7;
	static const FKey GenericUSBController_Axis8;

	static const FKey GenericUSBController_Button1;
	static const FKey GenericUSBController_Button2;
	static const FKey GenericUSBController_Button3;
	static const FKey GenericUSBController_Button4;
	static const FKey GenericUSBController_Button5;
	static const FKey GenericUSBController_Button6;
	static const FKey GenericUSBController_Button7;
	static const FKey GenericUSBController_Button8;
	static const FKey GenericUSBController_Button9;
	static const FKey GenericUSBController_Button10;
	static const FKey GenericUSBController_Button11;
	static const FKey GenericUSBController_Button12;
	static const FKey GenericUSBController_Button13;
	static const FKey GenericUSBController_Button14;
	static const FKey GenericUSBController_Button15;
	static const FKey GenericUSBController_Button16;
	static const FKey GenericUSBController_Button17;
	static const FKey GenericUSBController_Button18;
	static const FKey GenericUSBController_Button19;
	static const FKey GenericUSBController_Button20;

	static const FKey GenericUSBController_Button21;
	static const FKey GenericUSBController_Button22;
	static const FKey GenericUSBController_Button23;
	static const FKey GenericUSBController_Button24;
	static const FKey GenericUSBController_Button25;
	static const FKey GenericUSBController_Button26;
	static const FKey GenericUSBController_Button27;
	static const FKey GenericUSBController_Button28;
	static const FKey GenericUSBController_Button29;
	static const FKey GenericUSBController_Button30;
	static const FKey GenericUSBController_Button31;
	static const FKey GenericUSBController_Button32;
	static const FKey GenericUSBController_Button33;
	static const FKey GenericUSBController_Button34;
	static const FKey GenericUSBController_Button35;
	static const FKey GenericUSBController_Button36;
	static const FKey GenericUSBController_Button37;
	static const FKey GenericUSBController_Button38;
	static const FKey GenericUSBController_Button39;
	static const FKey GenericUSBController_Button40;
};

USTRUCT(BlueprintType)
struct RAWINPUT_API FRegisteredDeviceInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category="RawInput")
	int32 Handle;

	// Integer representation of the vendor ID (e.g. 0xC262 = 49762)
	UPROPERTY(BlueprintReadOnly, Category="RawInput")
	int32 VendorID;

	// Integer representation of the product ID (e.g. 0xC262 = 49762)
	UPROPERTY(BlueprintReadOnly, Category="RawInput")
	int32 ProductID;

	// Driver supplied device name
	UPROPERTY(BlueprintReadOnly, Category="RawInput")
	FString DeviceName;
};

UCLASS()
class RAWINPUT_API URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="RawInput")
	static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();

	

};

