//MyInput.h
#pragma once
enum KeyData
{
	NO_DEFINED, F1, F2, F3, F4, F5, F6, F7, ESC //±âº»°ª, function key
};
class MyInput
{
public:
	static KeyData input_keydata();	
	static int input_integer(string msg);
	static string input_string(string msg);
	static char input_char(string msg);
	static float input_float(string msg);
};

