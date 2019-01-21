// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RawInput.h"
#include "RawInputFunctionLibrary.h"
#include "IInputDeviceModule.h"
#include "IInputDevice.h"

#if PLATFORM_WINDOWS
	#include "Windows/RawInputWindows.h"
#endif

#define LOCTEXT_NAMESPACE "RawInputPlugin"

// Generic USB controller (Wheels, flight sticks etc. These require the rawinput plugin to be enabled)
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis1( "GenericUSBController_Axis1" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis2( "GenericUSBController_Axis2" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis3( "GenericUSBController_Axis3" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis4( "GenericUSBController_Axis4" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis5( "GenericUSBController_Axis5" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis6( "GenericUSBController_Axis6" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis7( "GenericUSBController_Axis7" );
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Axis8( "GenericUSBController_Axis8" );

const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button1("GenericUSBController_Button1");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button2("GenericUSBController_Button2");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button3("GenericUSBController_Button3");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button4("GenericUSBController_Button4");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button5("GenericUSBController_Button5");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button6("GenericUSBController_Button6");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button7("GenericUSBController_Button7");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button8("GenericUSBController_Button8");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button9("GenericUSBController_Button9");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button10("GenericUSBController_Button10");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button11("GenericUSBController_Button11");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button12("GenericUSBController_Button12");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button13("GenericUSBController_Button13");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button14("GenericUSBController_Button14");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button15("GenericUSBController_Button15");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button16("GenericUSBController_Button16");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button17("GenericUSBController_Button17");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button18("GenericUSBController_Button18");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button19("GenericUSBController_Button19");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button20("GenericUSBController_Button20");

const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button21("GenericUSBController_Button21");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button22("GenericUSBController_Button22");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button23("GenericUSBController_Button23");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button24("GenericUSBController_Button24");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button25("GenericUSBController_Button25");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button26("GenericUSBController_Button26");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button27("GenericUSBController_Button27");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button28("GenericUSBController_Button28");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button29("GenericUSBController_Button29");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button30("GenericUSBController_Button30");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button31("GenericUSBController_Button31");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button32("GenericUSBController_Button32");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button33("GenericUSBController_Button33");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button34("GenericUSBController_Button34");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button35("GenericUSBController_Button35");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button36("GenericUSBController_Button36");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button37("GenericUSBController_Button37");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button38("GenericUSBController_Button38");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button39("GenericUSBController_Button39");
const FGamepadKeyNames::Type FRawInputKeyNames::GenericUSBController_Button40("GenericUSBController_Button40");

// USB controller (Wheels, flight stick etc)
const FKey FRawInputKeys::GenericUSBController_Axis1(FRawInputKeyNames::GenericUSBController_Axis1);
const FKey FRawInputKeys::GenericUSBController_Axis2(FRawInputKeyNames::GenericUSBController_Axis2);
const FKey FRawInputKeys::GenericUSBController_Axis3(FRawInputKeyNames::GenericUSBController_Axis3);
const FKey FRawInputKeys::GenericUSBController_Axis4(FRawInputKeyNames::GenericUSBController_Axis4);
const FKey FRawInputKeys::GenericUSBController_Axis5(FRawInputKeyNames::GenericUSBController_Axis5);
const FKey FRawInputKeys::GenericUSBController_Axis6(FRawInputKeyNames::GenericUSBController_Axis6);
const FKey FRawInputKeys::GenericUSBController_Axis7(FRawInputKeyNames::GenericUSBController_Axis7);
const FKey FRawInputKeys::GenericUSBController_Axis8(FRawInputKeyNames::GenericUSBController_Axis8);

const FKey FRawInputKeys::GenericUSBController_Button1(FRawInputKeyNames::GenericUSBController_Button1);
const FKey FRawInputKeys::GenericUSBController_Button2(FRawInputKeyNames::GenericUSBController_Button2);
const FKey FRawInputKeys::GenericUSBController_Button3(FRawInputKeyNames::GenericUSBController_Button3);
const FKey FRawInputKeys::GenericUSBController_Button4(FRawInputKeyNames::GenericUSBController_Button4);
const FKey FRawInputKeys::GenericUSBController_Button5(FRawInputKeyNames::GenericUSBController_Button5);
const FKey FRawInputKeys::GenericUSBController_Button6(FRawInputKeyNames::GenericUSBController_Button6);
const FKey FRawInputKeys::GenericUSBController_Button7(FRawInputKeyNames::GenericUSBController_Button7);
const FKey FRawInputKeys::GenericUSBController_Button8(FRawInputKeyNames::GenericUSBController_Button8);
const FKey FRawInputKeys::GenericUSBController_Button9(FRawInputKeyNames::GenericUSBController_Button9);
const FKey FRawInputKeys::GenericUSBController_Button10(FRawInputKeyNames::GenericUSBController_Button10);
const FKey FRawInputKeys::GenericUSBController_Button11(FRawInputKeyNames::GenericUSBController_Button11);
const FKey FRawInputKeys::GenericUSBController_Button12(FRawInputKeyNames::GenericUSBController_Button12);
const FKey FRawInputKeys::GenericUSBController_Button13(FRawInputKeyNames::GenericUSBController_Button13);
const FKey FRawInputKeys::GenericUSBController_Button14(FRawInputKeyNames::GenericUSBController_Button14);
const FKey FRawInputKeys::GenericUSBController_Button15(FRawInputKeyNames::GenericUSBController_Button15);
const FKey FRawInputKeys::GenericUSBController_Button16(FRawInputKeyNames::GenericUSBController_Button16);
const FKey FRawInputKeys::GenericUSBController_Button17(FRawInputKeyNames::GenericUSBController_Button17);
const FKey FRawInputKeys::GenericUSBController_Button18(FRawInputKeyNames::GenericUSBController_Button18);
const FKey FRawInputKeys::GenericUSBController_Button19(FRawInputKeyNames::GenericUSBController_Button19);
const FKey FRawInputKeys::GenericUSBController_Button20(FRawInputKeyNames::GenericUSBController_Button20);

const FKey FRawInputKeys::GenericUSBController_Button21(FRawInputKeyNames::GenericUSBController_Button21);
const FKey FRawInputKeys::GenericUSBController_Button22(FRawInputKeyNames::GenericUSBController_Button22);
const FKey FRawInputKeys::GenericUSBController_Button23(FRawInputKeyNames::GenericUSBController_Button23);
const FKey FRawInputKeys::GenericUSBController_Button24(FRawInputKeyNames::GenericUSBController_Button24);
const FKey FRawInputKeys::GenericUSBController_Button25(FRawInputKeyNames::GenericUSBController_Button25);
const FKey FRawInputKeys::GenericUSBController_Button26(FRawInputKeyNames::GenericUSBController_Button26);
const FKey FRawInputKeys::GenericUSBController_Button27(FRawInputKeyNames::GenericUSBController_Button27);
const FKey FRawInputKeys::GenericUSBController_Button28(FRawInputKeyNames::GenericUSBController_Button28);
const FKey FRawInputKeys::GenericUSBController_Button29(FRawInputKeyNames::GenericUSBController_Button29);
const FKey FRawInputKeys::GenericUSBController_Button30(FRawInputKeyNames::GenericUSBController_Button30);
const FKey FRawInputKeys::GenericUSBController_Button31(FRawInputKeyNames::GenericUSBController_Button31);
const FKey FRawInputKeys::GenericUSBController_Button32(FRawInputKeyNames::GenericUSBController_Button32);
const FKey FRawInputKeys::GenericUSBController_Button33(FRawInputKeyNames::GenericUSBController_Button33);
const FKey FRawInputKeys::GenericUSBController_Button34(FRawInputKeyNames::GenericUSBController_Button34);
const FKey FRawInputKeys::GenericUSBController_Button35(FRawInputKeyNames::GenericUSBController_Button35);
const FKey FRawInputKeys::GenericUSBController_Button36(FRawInputKeyNames::GenericUSBController_Button36);
const FKey FRawInputKeys::GenericUSBController_Button37(FRawInputKeyNames::GenericUSBController_Button37);
const FKey FRawInputKeys::GenericUSBController_Button38(FRawInputKeyNames::GenericUSBController_Button38);
const FKey FRawInputKeys::GenericUSBController_Button39(FRawInputKeyNames::GenericUSBController_Button39);
const FKey FRawInputKeys::GenericUSBController_Button40(FRawInputKeyNames::GenericUSBController_Button40);

IRawInput::IRawInput(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler)
	: MessageHandler(InMessageHandler)
	, LastAssignedInputHandle(0)
{
};

TSharedPtr< class IInputDevice > FRawInputPlugin::CreateInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler)
{
	RawInputDevice = MakeShareable( new FPlatformRawInput(InMessageHandler) ); 
	return RawInputDevice;
}

void FRawInputPlugin::StartupModule()
{
	IInputDeviceModule::StartupModule();

	const FName NAME_GenericUSBController(TEXT("GenericUSBController"));

	// Generic USB Controllers (Wheel, Flightstick etc.)
	EKeys::AddMenuCategoryDisplayInfo(NAME_GenericUSBController, LOCTEXT("GenericUSBControllerSubCateogry", "GenericUSBController"), TEXT("GraphEditor.KeyEvent_16x"));

	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis1, LOCTEXT("GenericUSBController_Axis1", "GenericUSBController Axis 1"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis2, LOCTEXT("GenericUSBController_Axis2", "GenericUSBController Axis 2"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis3, LOCTEXT("GenericUSBController_Axis3", "GenericUSBController Axis 3"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis4, LOCTEXT("GenericUSBController_Axis4", "GenericUSBController Axis 4"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis5, LOCTEXT("GenericUSBController_Axis5", "GenericUSBController Axis 5"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis6, LOCTEXT("GenericUSBController_Axis6", "GenericUSBController Axis 6"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis7, LOCTEXT("GenericUSBController_Axis7", "GenericUSBController Axis 7"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Axis8, LOCTEXT("GenericUSBController_Axis8", "GenericUSBController Axis 8"), FKeyDetails::GamepadKey, NAME_GenericUSBController));

	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button1, LOCTEXT("GenericUSBController_Button1", "GenericUSBController Button 1"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button2, LOCTEXT("GenericUSBController_Button2", "GenericUSBController Button 2"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button3, LOCTEXT("GenericUSBController_Button3", "GenericUSBController Button 3"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button4, LOCTEXT("GenericUSBController_Button4", "GenericUSBController Button 4"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button5, LOCTEXT("GenericUSBController_Button5", "GenericUSBController Button 5"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button6, LOCTEXT("GenericUSBController_Button6", "GenericUSBController Button 6"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button7, LOCTEXT("GenericUSBController_Button7", "GenericUSBController Button 7"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button8, LOCTEXT("GenericUSBController_Button8", "GenericUSBController Button 8"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button9, LOCTEXT("GenericUSBController_Button9", "GenericUSBController Button 9"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button10, LOCTEXT("GenericUSBController_Button10", "GenericUSBController Button 10"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button11, LOCTEXT("GenericUSBController_Button11", "GenericUSBController Button 11"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button12, LOCTEXT("GenericUSBController_Button12", "GenericUSBController Button 12"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button13, LOCTEXT("GenericUSBController_Button13", "GenericUSBController Button 13"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button14, LOCTEXT("GenericUSBController_Button14", "GenericUSBController Button 14"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button15, LOCTEXT("GenericUSBController_Button15", "GenericUSBController Button 15"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button16, LOCTEXT("GenericUSBController_Button16", "GenericUSBController Button 16"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button17, LOCTEXT("GenericUSBController_Button17", "GenericUSBController Button 17"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button18, LOCTEXT("GenericUSBController_Button18", "GenericUSBController Button 18"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button19, LOCTEXT("GenericUSBController_Button19", "GenericUSBController Button 19"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button20, LOCTEXT("GenericUSBController_Button20", "GenericUSBController Button 20"), FKeyDetails::GamepadKey, NAME_GenericUSBController));

	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button21, LOCTEXT("GenericUSBController_Button21", "GenericUSBController Button 21"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button22, LOCTEXT("GenericUSBController_Button22", "GenericUSBController Button 22"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button23, LOCTEXT("GenericUSBController_Button23", "GenericUSBController Button 23"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button24, LOCTEXT("GenericUSBController_Button24", "GenericUSBController Button 24"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button25, LOCTEXT("GenericUSBController_Button25", "GenericUSBController Button 25"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button26, LOCTEXT("GenericUSBController_Button26", "GenericUSBController Button 26"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button27, LOCTEXT("GenericUSBController_Button27", "GenericUSBController Button 27"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button28, LOCTEXT("GenericUSBController_Button28", "GenericUSBController Button 28"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button29, LOCTEXT("GenericUSBController_Button29", "GenericUSBController Button 29"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button30, LOCTEXT("GenericUSBController_Button30", "GenericUSBController Button 30"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button31, LOCTEXT("GenericUSBController_Button31", "GenericUSBController Button 31"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button32, LOCTEXT("GenericUSBController_Button32", "GenericUSBController Button 32"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button33, LOCTEXT("GenericUSBController_Button33", "GenericUSBController Button 33"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button34, LOCTEXT("GenericUSBController_Button34", "GenericUSBController Button 34"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button35, LOCTEXT("GenericUSBController_Button35", "GenericUSBController Button 35"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button36, LOCTEXT("GenericUSBController_Button36", "GenericUSBController Button 36"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button37, LOCTEXT("GenericUSBController_Button37", "GenericUSBController Button 37"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button38, LOCTEXT("GenericUSBController_Button38", "GenericUSBController Button 38"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button39, LOCTEXT("GenericUSBController_Button39", "GenericUSBController Button 39"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
	EKeys::AddKey(FKeyDetails(FRawInputKeys::GenericUSBController_Button40, LOCTEXT("GenericUSBController_Button40", "GenericUSBController Button 40"), FKeyDetails::GamepadKey, NAME_GenericUSBController));
}

IMPLEMENT_MODULE( FRawInputPlugin, RawInput)

#undef LOCTEXT_NAMESPACE
