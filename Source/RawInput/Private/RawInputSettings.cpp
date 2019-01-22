// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RawInputSettings.h"
#include "RawInputFunctionLibrary.h"

#if PLATFORM_WINDOWS
	#include "Windows/RawInputWindows.h"
#endif

FRawInputDeviceConfiguration::FRawInputDeviceConfiguration()
{
	ButtonProperties.AddDefaulted(MAX_NUM_CONTROLLER_BUTTONS);
	AxisProperties.AddDefaulted(MAX_NUM_CONTROLLER_ANALOG);

	ButtonProperties[0].Key = FRawInputKeys::GenericUSBController_Button1;
	ButtonProperties[1].Key = FRawInputKeys::GenericUSBController_Button2;
	ButtonProperties[2].Key = FRawInputKeys::GenericUSBController_Button3;
	ButtonProperties[3].Key = FRawInputKeys::GenericUSBController_Button4;
	ButtonProperties[4].Key = FRawInputKeys::GenericUSBController_Button5;
	ButtonProperties[5].Key = FRawInputKeys::GenericUSBController_Button6;
	ButtonProperties[6].Key = FRawInputKeys::GenericUSBController_Button7;
	ButtonProperties[7].Key = FRawInputKeys::GenericUSBController_Button8;
	ButtonProperties[8].Key = FRawInputKeys::GenericUSBController_Button9;
	ButtonProperties[9].Key = FRawInputKeys::GenericUSBController_Button10;
	ButtonProperties[10].Key = FRawInputKeys::GenericUSBController_Button11;
	ButtonProperties[11].Key = FRawInputKeys::GenericUSBController_Button12;
	ButtonProperties[12].Key = FRawInputKeys::GenericUSBController_Button13;
	ButtonProperties[13].Key = FRawInputKeys::GenericUSBController_Button14;
	ButtonProperties[14].Key = FRawInputKeys::GenericUSBController_Button15;
	ButtonProperties[15].Key = FRawInputKeys::GenericUSBController_Button16;
	ButtonProperties[16].Key = FRawInputKeys::GenericUSBController_Button17;
	ButtonProperties[17].Key = FRawInputKeys::GenericUSBController_Button18;
	ButtonProperties[18].Key = FRawInputKeys::GenericUSBController_Button19;
	ButtonProperties[19].Key = FRawInputKeys::GenericUSBController_Button20;

	ButtonProperties[20].Key = FRawInputKeys::GenericUSBController_Button21;
	ButtonProperties[21].Key = FRawInputKeys::GenericUSBController_Button22;
	ButtonProperties[22].Key = FRawInputKeys::GenericUSBController_Button23;
	ButtonProperties[23].Key = FRawInputKeys::GenericUSBController_Button24;
	ButtonProperties[24].Key = FRawInputKeys::GenericUSBController_Button25;
	ButtonProperties[25].Key = FRawInputKeys::GenericUSBController_Button26;
	ButtonProperties[26].Key = FRawInputKeys::GenericUSBController_Button27;
	ButtonProperties[27].Key = FRawInputKeys::GenericUSBController_Button28;
	ButtonProperties[28].Key = FRawInputKeys::GenericUSBController_Button29;
	ButtonProperties[29].Key = FRawInputKeys::GenericUSBController_Button30;
	ButtonProperties[30].Key = FRawInputKeys::GenericUSBController_Button31;
	ButtonProperties[31].Key = FRawInputKeys::GenericUSBController_Button32;
	ButtonProperties[32].Key = FRawInputKeys::GenericUSBController_Button33;
	ButtonProperties[33].Key = FRawInputKeys::GenericUSBController_Button34;
	ButtonProperties[34].Key = FRawInputKeys::GenericUSBController_Button35;
	ButtonProperties[35].Key = FRawInputKeys::GenericUSBController_Button36;
	ButtonProperties[36].Key = FRawInputKeys::GenericUSBController_Button37;
	ButtonProperties[37].Key = FRawInputKeys::GenericUSBController_Button38;
	ButtonProperties[38].Key = FRawInputKeys::GenericUSBController_Button39;
	ButtonProperties[39].Key = FRawInputKeys::GenericUSBController_Button40;

	AxisProperties[0].Key = FRawInputKeys::GenericUSBController_Axis1;
	AxisProperties[1].Key = FRawInputKeys::GenericUSBController_Axis2;
	AxisProperties[2].Key = FRawInputKeys::GenericUSBController_Axis3;
	AxisProperties[3].Key = FRawInputKeys::GenericUSBController_Axis4;
	AxisProperties[4].Key = FRawInputKeys::GenericUSBController_Axis5;
	AxisProperties[5].Key = FRawInputKeys::GenericUSBController_Axis6;
	AxisProperties[6].Key = FRawInputKeys::GenericUSBController_Axis7;
	AxisProperties[7].Key = FRawInputKeys::GenericUSBController_Axis8;
	AxisProperties[8].Key = FRawInputKeys::GenericUSBController_Axis9;
	AxisProperties[9].Key = FRawInputKeys::GenericUSBController_Axis10;
	AxisProperties[10].Key = FRawInputKeys::GenericUSBController_Axis11;
	AxisProperties[11].Key = FRawInputKeys::GenericUSBController_Axis12;
	AxisProperties[12].Key = FRawInputKeys::GenericUSBController_Axis13;
	AxisProperties[13].Key = FRawInputKeys::GenericUSBController_Axis14;
	AxisProperties[14].Key = FRawInputKeys::GenericUSBController_Axis15;
	AxisProperties[15].Key = FRawInputKeys::GenericUSBController_Axis16;


}

FName URawInputSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

#if WITH_EDITOR
FText URawInputSettings::GetSectionText() const
{
	return NSLOCTEXT("RawInputPlugin", "RawInputSettingsSection", "Raw Input");
}

void URawInputSettings::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
	
#if PLATFORM_WINDOWS
	FRawInputWindows* RawInput = static_cast<FRawInputWindows*>(static_cast<FRawInputPlugin*>(&FRawInputPlugin::Get())->GetRawInputDevice().Get());

	for (const TPair<int32, FRawWindowsDeviceEntry>& RegisteredDevice : RawInput->RegisteredDeviceList)
	{		
		const FRawWindowsDeviceEntry& DeviceEntry = RegisteredDevice.Value;
		if (DeviceEntry.bIsConnected)
		{
			RawInput->SetupBindings(RegisteredDevice.Key, false);
		}
	}

#endif
}
#endif