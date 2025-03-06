//MyInput.cpp
#include "std.h"

KeyData MyInput::input_keydata() {
	int key = _getch();

	if (key == 27)
		return ESC;

		//F1, F2, F3, F4, F5, F6, F7, ESC
	if (key == 0)
	{
		key = _getch();
		switch (key) {
		case 59: return F1;
		case 60: return F2;
		case 61: return F3;
		case 62: return F4;
		case 63: return F5;
		case 64: return F6;
		case 65: return F7;
		}
	}
	return NO_DEFINED;
}

int MyInput::input_integer(string msg)
{
	int value;
	cout << msg << " : ";		
	cin >> value;
	cin.ignore();	//버퍼비우기....
	return value;
}

string MyInput::input_string(string msg)
{
	char value[100];
	cout << msg << " : ";
	//cin >> value;						//scanf_s("%s", msg);
	cin.getline(value, sizeof(value));	//gets_s(msg, sizeof(msg));
	return value;
}

char MyInput::input_char(string msg)
{
	char value;
	cout << msg << " : ";
	cin >> value;
	return value;
}

float MyInput::input_float(string msg)
{
	float value;
	cout << msg << " : ";
	cin >> value;
	return value;
}