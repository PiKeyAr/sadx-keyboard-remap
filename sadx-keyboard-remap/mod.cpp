#include "stdafx.h"
#include "KeyPointers.h"

int KButton_A = -1;
int KButton_B = -1;
int KButton_X = -1;
int KButton_Y = -1;
int KButton_Start = -1;
int KButton_L = -1;
int KButton_R = -1;
int KButton_Up = -1;
int KButton_Down = -1;
int KButton_Left = -1;
int KButton_Right = -1;
int KButton_DPadUp = -1;
int KButton_DPadDown = -1;
int KButton_DPadLeft = -1;
int KButton_DPadRight = -1;
int KButton_Center = -1;

bool CenterKeyPressed = false;

KeyboardKey DummyKey = { 0, 0, 0 };

int FindKey(std::string KeyString)
{
	for (int i = 0; i < LengthOfArray(KeyArray); i++)
	{
		if (KeyArray[i].KeyConfigName == KeyString) return i;
	}
	return -1;
}

char GetEKey(char index)
{
	if (CenterKeyPressed) return 1;
	else return 0;
}

bool CheckIfEKeyIsPressed()
{
	if (KButton_Center != -1)
	{
		KeyboardKey *Key = &KeyArray[KButton_Center].KeyPointer;
		if (Key->held)
		{
			return true;
		}
		else return false;
	}
	else return false;
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		const std::string s_path(path);
		const std::string s_config_ini(s_path + "\\config.ini");
		const IniFile *const config = new IniFile(s_config_ini);
		KButton_A = FindKey(config->getString("", "Button A", "X"));
		KButton_B = FindKey(config->getString("", "Button B", "Z"));
		KButton_X = FindKey(config->getString("", "Button X", "A"));
		KButton_Y = FindKey(config->getString("", "Button Y", "S"));
		KButton_Start = FindKey(config->getString("", "Button Start", "Enter"));
		KButton_L = FindKey(config->getString("", "Trigger L", "Q"));
		KButton_R = FindKey(config->getString("", "Trigger R", "W"));
		KButton_Up = FindKey(config->getString("", "Analog Up", "Up"));
		KButton_Down = FindKey(config->getString("", "Analog Down", "Down"));
		KButton_Left = FindKey(config->getString("", "Analog Left", "Left"));
		KButton_Right = FindKey(config->getString("", "Analog Right", "Right"));
		KButton_DPadUp = FindKey(config->getString("", "D-Pad Up", "I"));
		KButton_DPadDown = FindKey(config->getString("", "D-Pad Down", "M"));
		KButton_DPadLeft = FindKey(config->getString("", "D-Pad Left", "J"));
		KButton_DPadRight = FindKey(config->getString("", "D-Pad Right", "K"));
		KButton_Center = FindKey(config->getString("", "Center Camera", "E"));
		if (
			KButton_DPadRight == -1 || KButton_DPadLeft == -1 || KButton_DPadDown == -1 || KButton_DPadUp == -1 ||
			KButton_Right == -1 || KButton_Left == -1 || KButton_Down == -1 || KButton_Up == -1 || 
			KButton_R == -1 || KButton_L == -1 || KButton_Start == -1 || KButton_Center == -1 ||
			KButton_Y == -1 || KButton_X == -1 || KButton_B == -1 || KButton_A == -1 
			)
		{
			MessageBox(WindowHandle, L"Invalid key detected! The mod will not work. Please change the config file.", L"Invalid key", MB_OK | MB_ICONERROR);
			return;
		}
		WriteData((KeyboardKey**)0x0040F53B, &KeyArray[KButton_A].KeyPointer);
		WriteData((KeyboardKey**)0x0040F544, &DummyKey);
		WriteData((KeyboardKey**)0x0040F555, &KeyArray[KButton_B].KeyPointer);
		WriteData((KeyboardKey**)0x0040F55E, &DummyKey);
		WriteData((KeyboardKey**)0x0040F567, &DummyKey);
		WriteData((KeyboardKey**)0x0040F575, &KeyArray[KButton_Start].KeyPointer);
		WriteData((KeyboardKey**)0x0040F57E, &DummyKey);
		WriteData((KeyboardKey**)0x0040F58C, &KeyArray[KButton_X].KeyPointer);
		WriteData((KeyboardKey**)0x0040F59D, &KeyArray[KButton_Y].KeyPointer);
		WriteData((KeyboardKey**)0x0040F5AE, &KeyArray[KButton_L].KeyPointer);
		WriteData((KeyboardKey**)0x0040F5BF, &KeyArray[KButton_R].KeyPointer);
		WriteData((KeyboardKey**)0x0040F62D, &KeyArray[KButton_Right].KeyPointer);
		WriteData((KeyboardKey**)0x0040F63B, &KeyArray[KButton_Left].KeyPointer);
		WriteData((KeyboardKey**)0x0040F649, &KeyArray[KButton_Down].KeyPointer);
		WriteData((KeyboardKey**)0x0040F652, &KeyArray[KButton_Up].KeyPointer);
		WriteData((KeyboardKey**)0x0040F669, &KeyArray[KButton_DPadRight].KeyPointer);
		WriteData((KeyboardKey**)0x0040F679, &KeyArray[KButton_DPadLeft].KeyPointer);
		WriteData((KeyboardKey**)0x0040F687, &KeyArray[KButton_DPadDown].KeyPointer);
		WriteData((KeyboardKey**)0x0040F692, &KeyArray[KButton_DPadUp].KeyPointer);
		WriteCall((void*)0x437547, GetEKey);
	}
	__declspec(dllexport) void __cdecl OnInput()
	{
		CenterKeyPressed = CheckIfEKeyIsPressed();
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}