struct KeyboardKey
{
	char held;
	char old;
	char pressed;
};

struct KeySetup
{
	std::string KeyConfigName;
	KeyboardKey &KeyPointer;
};

DataPointer(KeyboardKey, Key_Escape, 0x03B0E45B); //Escape
DataPointer(KeyboardKey, Key_F1, 0x03B0E48E); //F1
DataPointer(KeyboardKey, Key_F2, 0x03B0E491); //F2
DataPointer(KeyboardKey, Key_F3, 0x03B0E494); //F3
DataPointer(KeyboardKey, Key_F4, 0x03B0E497); //F4
DataPointer(KeyboardKey, Key_F5, 0x03B0E49A); //F5
DataPointer(KeyboardKey, Key_F6, 0x03B0E49D); //F6
DataPointer(KeyboardKey, Key_F7, 0x03B0E4A0); //F7
DataPointer(KeyboardKey, Key_F8, 0x03B0E4A3); //F8
DataPointer(KeyboardKey, Key_F9, 0x03B0E4A6); //F9
DataPointer(KeyboardKey, Key_F10, 0x03B0E4A9); //F10
DataPointer(KeyboardKey, Key_F11, 0x03B0E4AC); //F11
DataPointer(KeyboardKey, Key_F12, 0x03B0E4AF); //F12
DataPointer(KeyboardKey, Key_PrtScr, 0x03B0E4B2); //PrtScr
DataPointer(KeyboardKey, Key_ScrLk, 0x03B0E4B5); //ScrLk
DataPointer(KeyboardKey, Key_Pause, 0x03B0E4B8); //Pause
DataPointer(KeyboardKey, Key_1, 0x03B0E43A); //1
DataPointer(KeyboardKey, Key_2, 0x03B0E43D); //2
DataPointer(KeyboardKey, Key_3, 0x03B0E440); //3
DataPointer(KeyboardKey, Key_4, 0x03B0E443); //4
DataPointer(KeyboardKey, Key_5, 0x03B0E446); //5
DataPointer(KeyboardKey, Key_6, 0x03B0E449); //6
DataPointer(KeyboardKey, Key_7, 0x03B0E44C); //7
DataPointer(KeyboardKey, Key_8, 0x03B0E44F); //8
DataPointer(KeyboardKey, Key_9, 0x03B0E452); //9
DataPointer(KeyboardKey, Key_0, 0x03B0E455); //0
DataPointer(KeyboardKey, Key_Minus, 0x03B0E467); //-
DataPointer(KeyboardKey, Key_Equal, 0x03B0E46A); //=
DataPointer(KeyboardKey, Key_Backspace, 0x03B0E45E); //Backspace
DataPointer(KeyboardKey, Key_Insert, 0x03B0E4BB); //Insert
DataPointer(KeyboardKey, Key_Delete, 0x03B0E4C4); //Delete
DataPointer(KeyboardKey, Key_Home, 0x03B0E4BE); //Home
DataPointer(KeyboardKey, Key_End, 0x03B0E4C7); //End
DataPointer(KeyboardKey, Key_PageUp, 0x03B0E4C1); //Page Up
DataPointer(KeyboardKey, Key_PageDown, 0x03B0E4CA); //Page Down
DataPointer(KeyboardKey, Key_Up, 0x03B0E4D6); //Up
DataPointer(KeyboardKey, Key_Down, 0x03B0E4D3); //Down
DataPointer(KeyboardKey, Key_Left, 0x03B0E4D0); //Left
DataPointer(KeyboardKey, Key_Right, 0x03B0E4CD); //Right
DataPointer(KeyboardKey, Key_Backslash, 0x03B0E575); //Backslash
DataPointer(KeyboardKey, Key_Tab, 0x03B0E461); //Tab
DataPointer(KeyboardKey, Key_Semicolon, 0x03B0E479); //;
DataPointer(KeyboardKey, Key_Apostrophe, 0x03B0E47C); //'
DataPointer(KeyboardKey, Key_Enter, 0x03B0E458); //Enter
DataPointer(KeyboardKey, Key_Comma, 0x03B0E482); //,
DataPointer(KeyboardKey, Key_Dot, 0x03B0E485); //.
DataPointer(KeyboardKey, Key_Slash, 0x03B0E488); // /
DataPointer(KeyboardKey, Key_Space, 0x03B0E464); //Space
DataPointer(KeyboardKey, Key_Q, 0x03B0E41C); //Q
DataPointer(KeyboardKey, Key_W, 0x03B0E42E); //W
DataPointer(KeyboardKey, Key_E, 0x03B0E3F8); //E
DataPointer(KeyboardKey, Key_R, 0x03B0E41F); //R
DataPointer(KeyboardKey, Key_T, 0x03B0E425); //T
DataPointer(KeyboardKey, Key_Y, 0x03B0E434); //Y
DataPointer(KeyboardKey, Key_U, 0x03B0E428); //U
DataPointer(KeyboardKey, Key_I, 0x03B0E404); //I
DataPointer(KeyboardKey, Key_O, 0x03B0E416); //O
DataPointer(KeyboardKey, Key_P, 0x03B0E419); //P
DataPointer(KeyboardKey, Key_A, 0x03B0E3EC); //A
DataPointer(KeyboardKey, Key_S, 0x03B0E422); //S
DataPointer(KeyboardKey, Key_D, 0x03B0E3F5); //D
DataPointer(KeyboardKey, Key_F, 0x03B0E3FB); //F
DataPointer(KeyboardKey, Key_G, 0x03B0E3FE); //G
DataPointer(KeyboardKey, Key_H, 0x03B0E401); //H
DataPointer(KeyboardKey, Key_J, 0x03B0E407); //J
DataPointer(KeyboardKey, Key_K, 0x03B0E40A); //K
DataPointer(KeyboardKey, Key_L, 0x03B0E40D); //L
DataPointer(KeyboardKey, Key_Z, 0x03B0E437); //Z
DataPointer(KeyboardKey, Key_X, 0x03B0E431); //X
DataPointer(KeyboardKey, Key_C, 0x03B0E3F2); //C
DataPointer(KeyboardKey, Key_V, 0x03B0E42B); //V
DataPointer(KeyboardKey, Key_B, 0x03B0E3EF); //B
DataPointer(KeyboardKey, Key_N, 0x03B0E413); //N
DataPointer(KeyboardKey, Key_M, 0x03B0E410); //M
DataPointer(KeyboardKey, Key_NumLk, 0x03B0E4D9); //Num Lock
DataPointer(KeyboardKey, Key_NumSlash, 0x03B0E4DC); //Num /
DataPointer(KeyboardKey, Key_NumAsterisk, 0x03B0E4DF); //Num *
DataPointer(KeyboardKey, Key_NumMinus, 0x03B0E4E2); //Num -
DataPointer(KeyboardKey, Key_Num7, 0x03B0E4FD); //Num 7
DataPointer(KeyboardKey, Key_Num8, 0x03B0E500); //Num 8
DataPointer(KeyboardKey, Key_Num9, 0x03B0E503); //Num 9
DataPointer(KeyboardKey, Key_NumPlus, 0x03B0E4E5); //Num +
DataPointer(KeyboardKey, Key_Num4, 0x03B0E4F4); //Num 4
DataPointer(KeyboardKey, Key_Num5, 0x03B0E4F7); //Num 5
DataPointer(KeyboardKey, Key_Num6, 0x03B0E4FA); //Num 6
DataPointer(KeyboardKey, Key_Num1, 0x03B0E4EB); //Num 1
DataPointer(KeyboardKey, Key_Num2, 0x03B0E4EE); //Num 2
DataPointer(KeyboardKey, Key_Num3, 0x03B0E4F1); //Num 3
DataPointer(KeyboardKey, Key_NumInsert, 0x03B0E506); //Num Insert

KeySetup KeyArray[] = {
	{ "Escape", Key_Escape },
	{ "F1", Key_F1 },
	{ "F2", Key_F2 },
	{ "F3", Key_F3 },
	{ "F4", Key_F4 },
	{ "F5", Key_F5 },
	{ "F6", Key_F6 },
	{ "F7", Key_F7 },
	{ "F8", Key_F8 },
	{ "F9", Key_F9 },
	{ "F10", Key_F10 },
	{ "F11", Key_F11 },
	{ "F12", Key_F12 },
	{ "Print Screen", Key_PrtScr },
	{ "Pause", Key_Pause },
	{ "Scroll Lock", Key_ScrLk },
	{ "1", Key_1 },
	{ "2", Key_2 },
	{ "3", Key_3 },
	{ "4", Key_4 },
	{ "5", Key_5 },
	{ "6", Key_6 },
	{ "7", Key_7 },
	{ "8", Key_8 },
	{ "9", Key_9 },
	{ "0", Key_0 },
	{ "-", Key_Minus },
	{ "=", Key_Equal },
	{ "Backspace", Key_Backspace },
	{ "Insert", Key_Insert },
	{ "Delete", Key_Delete },
	{ "Home", Key_Home },
	{ "End", Key_End },
	{ "Page Up", Key_PageUp },
	{ "Page Down", Key_PageDown },
	{ "Up", Key_Up },
	{ "Down", Key_Down },
	{ "Left", Key_Left },
	{ "Right", Key_Right },
	{ "Backslash", Key_Backslash },
	{ "Tab", Key_Tab },
	{ "Q", Key_Q },
	{ "W", Key_W },
	{ "E", Key_E },
	{ "R", Key_R },
	{ "T", Key_T },
	{ "Y", Key_Y },
	{ "U", Key_U },
	{ "I", Key_I },
	{ "O", Key_O },
	{ "P", Key_P },
	{ "A", Key_A },
	{ "S", Key_S },
	{ "D", Key_D },
	{ "F", Key_F },
	{ "G", Key_G },
	{ "H", Key_H },
	{ "J", Key_J },
	{ "K", Key_K },
	{ "L", Key_L },
	{ "Z", Key_Z },
	{ "X", Key_X },
	{ "C", Key_C },
	{ "V", Key_V },
	{ "B", Key_B },
	{ "N", Key_N },
	{ "M", Key_M },
	{ "Semicolon", Key_Semicolon },
	{ "'", Key_Apostrophe },
	{ "Enter", Key_Enter },
	{ ",", Key_Comma },
	{ ".", Key_Dot },
	{ "/", Key_Slash },
	{ "Space", Key_Space },
	{ "Num Lock", Key_NumLk },
	{ "Numpad /", Key_NumSlash },
	{ "Numpad *", Key_NumAsterisk },
	{ "Numpad -", Key_NumMinus },
	{ "Numpad 7", Key_Num7 },
	{ "Numpad 8", Key_Num8 },
	{ "Numpad 9", Key_Num9 },
	{ "Numpad +", Key_NumPlus },
	{ "Numpad 4", Key_Num4 },
	{ "Numpad 5", Key_Num5 },
	{ "Numpad 6", Key_Num6 },
	{ "Numpad 1", Key_Num1 },
	{ "Numpad 2", Key_Num2 },
	{ "Numpad 3", Key_Num3 },
	{ "Numpad Insert", Key_NumInsert },
};