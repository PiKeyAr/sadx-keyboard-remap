#include "stdafx.h"
#include "KeyPointers.h"
#include "KeyVariables.h"

KeyboardKey VirtualKey_A = { 0, 0, 0 };
KeyboardKey VirtualKey_B = { 0, 0, 0 };
KeyboardKey VirtualKey_X = { 0, 0, 0 };
KeyboardKey VirtualKey_Y = { 0, 0, 0 };
KeyboardKey VirtualKey_Start = { 0, 0, 0 };
KeyboardKey VirtualKey_L = { 0, 0, 0 };
KeyboardKey VirtualKey_R = { 0, 0, 0 };
KeyboardKey VirtualKey_Up = { 0, 0, 0 };
KeyboardKey VirtualKey_Down = { 0, 0, 0 };
KeyboardKey VirtualKey_Left = { 0, 0, 0 };
KeyboardKey VirtualKey_Right = { 0, 0, 0 };
KeyboardKey VirtualKey_DPadUp = { 0, 0, 0 };
KeyboardKey VirtualKey_DPadDown = { 0, 0, 0 };
KeyboardKey VirtualKey_DPadLeft = { 0, 0, 0 };
KeyboardKey VirtualKey_DPadRight = { 0, 0, 0 };
KeyboardKey VirtualKey_Center = { 0, 0, 0 };

int FindKey(std::string KeyString)
{
	for (unsigned int i = 0; i < LengthOfArray(KeyArray); i++)
	{
		if (KeyArray[i].KeyConfigName == KeyString) return i;
	}
	return 0;
}

char GetEKey(char index)
{
	if (VirtualKey_Center.held) return 1;
	else return 0;
}

void CheckPressedKeys()
{
	KeyboardKey *Key1;
	KeyboardKey *Key2;
	KeyboardKey *Key3;
	//A
	Key1 = &KeyArray[KButton_A].KeyPointer;
	Key2 = &KeyArray[KButton2_A].KeyPointer;
	Key3 = &KeyArray[KButton3_A].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_A.held = 1; else VirtualKey_A.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_A.pressed = 1; else VirtualKey_A.pressed = 0;
	//B
	Key1 = &KeyArray[KButton_B].KeyPointer;
	Key2 = &KeyArray[KButton2_B].KeyPointer;
	Key3 = &KeyArray[KButton3_B].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_B.held = 1; else VirtualKey_B.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_B.pressed = 1; else VirtualKey_B.pressed = 0;
	//X
	Key1 = &KeyArray[KButton_X].KeyPointer;
	Key2 = &KeyArray[KButton2_X].KeyPointer;
	Key3 = &KeyArray[KButton3_X].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_X.held = 1; else VirtualKey_X.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_X.pressed = 1; else VirtualKey_X.pressed = 0;
	//Y
	Key1 = &KeyArray[KButton_Y].KeyPointer;
	Key2 = &KeyArray[KButton2_Y].KeyPointer;
	Key3 = &KeyArray[KButton3_Y].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Y.held = 1; else VirtualKey_Y.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Y.pressed = 1; else VirtualKey_Y.pressed = 0;
	//Start
	Key1 = &KeyArray[KButton_Start].KeyPointer;
	Key2 = &KeyArray[KButton2_Start].KeyPointer;
	Key3 = &KeyArray[KButton3_Start].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Start.held = 1; else VirtualKey_Start.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Start.pressed = 1; else VirtualKey_Start.pressed = 0;
	//L
	Key1 = &KeyArray[KButton_L].KeyPointer;
	Key2 = &KeyArray[KButton2_L].KeyPointer;
	Key3 = &KeyArray[KButton3_L].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_L.held = 1; else VirtualKey_L.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_L.pressed = 1; else VirtualKey_L.pressed = 0;
	//R
	Key1 = &KeyArray[KButton_R].KeyPointer;
	Key2 = &KeyArray[KButton2_R].KeyPointer;
	Key3 = &KeyArray[KButton3_R].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_R.held = 1; else VirtualKey_R.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_R.pressed = 1; else VirtualKey_R.pressed = 0;
	//Up
	Key1 = &KeyArray[KButton_Up].KeyPointer;
	Key2 = &KeyArray[KButton2_Up].KeyPointer;
	Key3 = &KeyArray[KButton3_Up].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Up.held = 1; else VirtualKey_Up.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Up.pressed = 1; else VirtualKey_Up.pressed = 0;
	//Down
	Key1 = &KeyArray[KButton_Down].KeyPointer;
	Key2 = &KeyArray[KButton2_Down].KeyPointer;
	Key3 = &KeyArray[KButton3_Down].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Down.held = 1; else VirtualKey_Down.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Down.pressed = 1; else VirtualKey_Down.pressed = 0;
	//Left
	Key1 = &KeyArray[KButton_Left].KeyPointer;
	Key2 = &KeyArray[KButton2_Left].KeyPointer;
	Key3 = &KeyArray[KButton3_Left].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Left.held = 1; else VirtualKey_Left.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Left.pressed = 1; else VirtualKey_Left.pressed = 0;
	//Right
	Key1 = &KeyArray[KButton_Right].KeyPointer;
	Key2 = &KeyArray[KButton2_Right].KeyPointer;
	Key3 = &KeyArray[KButton3_Right].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Right.held = 1; else VirtualKey_Right.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Right.pressed = 1; else VirtualKey_Right.pressed = 0;
	//DPadUp
	Key1 = &KeyArray[KButton_DPadUp].KeyPointer;
	Key2 = &KeyArray[KButton2_DPadUp].KeyPointer;
	Key3 = &KeyArray[KButton3_DPadUp].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_DPadUp.held = 1; else VirtualKey_DPadUp.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_DPadUp.pressed = 1; else VirtualKey_DPadUp.pressed = 0;
	//DPadDown
	Key1 = &KeyArray[KButton_DPadDown].KeyPointer;
	Key2 = &KeyArray[KButton2_DPadDown].KeyPointer;
	Key3 = &KeyArray[KButton3_DPadDown].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_DPadDown.held = 1; else VirtualKey_DPadDown.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_DPadDown.pressed = 1; else VirtualKey_DPadDown.pressed = 0;
	//DPadLeft
	Key1 = &KeyArray[KButton_DPadLeft].KeyPointer;
	Key2 = &KeyArray[KButton2_DPadLeft].KeyPointer;
	Key3 = &KeyArray[KButton3_DPadLeft].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_DPadLeft.held = 1; else VirtualKey_DPadLeft.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_DPadLeft.pressed = 1; else VirtualKey_DPadLeft.pressed = 0;
	//DPadRight
	Key1 = &KeyArray[KButton_DPadRight].KeyPointer;
	Key2 = &KeyArray[KButton2_DPadRight].KeyPointer;
	Key3 = &KeyArray[KButton3_DPadRight].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_DPadRight.held = 1; else VirtualKey_DPadRight.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_DPadRight.pressed = 1; else VirtualKey_DPadRight.pressed = 0;
	//Center
	Key1 = &KeyArray[KButton_Center].KeyPointer;
	Key2 = &KeyArray[KButton2_Center].KeyPointer;
	Key3 = &KeyArray[KButton3_Center].KeyPointer;
	if (Key1->held || Key2->held || Key3->held) VirtualKey_Center.held = 1; else VirtualKey_Center.held = 0;
	if (Key1->pressed || Key2->pressed || Key3->pressed ) VirtualKey_Center.pressed = 1; else VirtualKey_Center.pressed = 0;
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		const std::string s_path(path);
		const std::string s_config_ini(s_path + "\\config.ini");
		const IniFile *const config = new IniFile(s_config_ini);
		DisableMouse = config->getBool("General", "DisableMouse", false);
		//Layout 1
		KButton_A = FindKey(config->getString("Layout 1", "Button A", "X"));
		KButton_B = FindKey(config->getString("Layout 1", "Button B", "Z"));
		KButton_X = FindKey(config->getString("Layout 1", "Button X", "A"));
		KButton_Y = FindKey(config->getString("Layout 1", "Button Y", "S"));
		KButton_Start = FindKey(config->getString("Layout 1", "Button Start", "Enter"));
		KButton_L = FindKey(config->getString("Layout 1", "Trigger L", "Q"));
		KButton_R = FindKey(config->getString("Layout 1", "Trigger R", "W"));
		KButton_Up = FindKey(config->getString("Layout 1", "Analog Up", "Up"));
		KButton_Down = FindKey(config->getString("Layout 1", "Analog Down", "Down"));
		KButton_Left = FindKey(config->getString("Layout 1", "Analog Left", "Left"));
		KButton_Right = FindKey(config->getString("Layout 1", "Analog Right", "Right"));
		KButton_DPadUp = FindKey(config->getString("Layout 1", "D-Pad Up", "I"));
		KButton_DPadDown = FindKey(config->getString("Layout 1", "D-Pad Down", "M"));
		KButton_DPadLeft = FindKey(config->getString("Layout 1", "D-Pad Left", "J"));
		KButton_DPadRight = FindKey(config->getString("Layout 1", "D-Pad Right", "K"));
		KButton_Center = FindKey(config->getString("Layout 1", "Center Camera", "E"));
		//Layout 2
		KButton2_A = FindKey(config->getString("Layout 2", "Button A", "Space"));
		KButton2_B = FindKey(config->getString("Layout 2", "Button B", "Escape"));
		KButton2_X = FindKey(config->getString("Layout 2", "Button X", "None"));
		KButton2_Y = FindKey(config->getString("Layout 2", "Button Y", "None"));
		KButton2_Start = FindKey(config->getString("Layout 2", "Button Start", "Home"));
		KButton2_L = FindKey(config->getString("Layout 2", "Trigger L", "None"));
		KButton2_R = FindKey(config->getString("Layout 2", "Trigger R", "None"));
		KButton2_Up = FindKey(config->getString("Layout 2", "Analog Up", "R"));
		KButton2_Down = FindKey(config->getString("Layout 2", "Analog Down", "C"));
		KButton2_Left = FindKey(config->getString("Layout 2", "Analog Left", "D"));
		KButton2_Right = FindKey(config->getString("Layout 2", "Analog Right", "F"));
		KButton2_DPadUp = FindKey(config->getString("Layout 2", "D-Pad Up", "None"));
		KButton2_DPadDown = FindKey(config->getString("Layout 2", "D-Pad Down", "None"));
		KButton2_DPadLeft = FindKey(config->getString("Layout 2", "D-Pad Left", "None"));
		KButton2_DPadRight = FindKey(config->getString("Layout 2", "D-Pad Right", "None"));
		KButton2_Center = FindKey(config->getString("Layout 2", "Center Camera", "None"));
		//Layout 3
		KButton3_A = FindKey(config->getString("Layout 3", "Button A", "None"));
		KButton3_B = FindKey(config->getString("Layout 3", "Button B", "V"));
		KButton3_X = FindKey(config->getString("Layout 3", "Button X", "None"));
		KButton3_Y = FindKey(config->getString("Layout 3", "Button Y", "None"));
		KButton3_Start = FindKey(config->getString("Layout 3", "Button Start", "None"));
		KButton3_L = FindKey(config->getString("Layout 3", "Trigger L", "None"));
		KButton3_R = FindKey(config->getString("Layout 3", "Trigger R", "None"));
		KButton3_Up = FindKey(config->getString("Layout 3", "Analog Up", "None"));
		KButton3_Down = FindKey(config->getString("Layout 3", "Analog Down", "None"));
		KButton3_Left = FindKey(config->getString("Layout 3", "Analog Left", "None"));
		KButton3_Right = FindKey(config->getString("Layout 3", "Analog Right", "None"));
		KButton3_DPadUp = FindKey(config->getString("Layout 3", "D-Pad Up", "None"));
		KButton3_DPadDown = FindKey(config->getString("Layout 3", "D-Pad Down", "None"));
		KButton3_DPadLeft = FindKey(config->getString("Layout 3", "D-Pad Left", "None"));
		KButton3_DPadRight = FindKey(config->getString("Layout 3", "D-Pad Right", "None"));
		KButton3_Center = FindKey(config->getString("Layout 3", "Center Camera", "None"));
		//Check layout 1 for invalid keys
		if (
			KButton_DPadRight == 0 || KButton_DPadLeft == 0 || KButton_DPadDown == 0 || KButton_DPadUp == 0 ||
			KButton_Right == 0 || KButton_Left == 0 || KButton_Down == 0 || KButton_Up == 0 || 
			KButton_R == 0 || KButton_L == 0 || KButton_Start == 0 || KButton_Center == 0 ||
			KButton_Y == 0 || KButton_X == 0 || KButton_B == 0 || KButton_A == 0 
			)
		{
			MessageBox(WindowHandle, L"Invalid key detected! The mod will not work.\nPlease edit the config file or run the config tool again.", L"Keyboard Remapper: Invalid key", MB_OK | MB_ICONERROR);
			return;
		}
		WriteData((KeyboardKey**)0x40F53B, &VirtualKey_A);
		WriteData((KeyboardKey**)0x40F544, &DummyKey);
		WriteData((KeyboardKey**)0x40F555, &VirtualKey_B);
		WriteData((KeyboardKey**)0x40F55E, &DummyKey);
		WriteData((KeyboardKey**)0x40F567, &DummyKey);
		WriteData((KeyboardKey**)0x40F575, &VirtualKey_Start);
		WriteData((KeyboardKey**)0x40F57E, &DummyKey);
		WriteData((KeyboardKey**)0x40F58C, &VirtualKey_X);
		WriteData((KeyboardKey**)0x40F59D, &VirtualKey_Y);
		WriteData((KeyboardKey**)0x40F5AE, &VirtualKey_L);
		WriteData((KeyboardKey**)0x40F5BF, &VirtualKey_R);
		WriteData((KeyboardKey**)0x40F62D, &VirtualKey_Right);
		WriteData((KeyboardKey**)0x40F63B, &VirtualKey_Left);
		WriteData((KeyboardKey**)0x40F649, &VirtualKey_Down);
		WriteData((KeyboardKey**)0x40F652, &VirtualKey_Up);
		WriteData((KeyboardKey**)0x40F669, &VirtualKey_DPadRight);
		WriteData((KeyboardKey**)0x40F679, &VirtualKey_DPadLeft);
		WriteData((KeyboardKey**)0x40F687, &VirtualKey_DPadDown);
		WriteData((KeyboardKey**)0x40F692, &VirtualKey_DPadUp);
		WriteCall((void*)0x437547, GetEKey);
		if (DisableMouse)
		{
			WriteData<1>((char*)0x40E900, 0xC3u); //Kill MouseUpdate
			WriteData<1>((char*)0x40FC5B, 0x0i8); //Kill mouse wheel 1
			WriteData<1>((char*)0x40FC41, 0x0i8); //Kill mouse wheel 2
		}
	}
	__declspec(dllexport) void __cdecl OnInput()
	{
		CheckPressedKeys();
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}