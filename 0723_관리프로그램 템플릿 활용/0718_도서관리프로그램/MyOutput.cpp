//myoutput.cpp
#include "std.h"

void MyOutput::logo()
{
	system("cls");  //#include <stdlib.h>
	printf("*****************************************\n");
	printf(" ��Ʈ�ܱ����\n");
	printf(" C++�� Ȱ���� �����������α׷�\n");
	printf(" 2024.07.18\n");
	printf(" ��â��\n");
	printf("*****************************************\n");
	system("pause");
}

KeyData MyOutput::menu()
{
	printf("*****************************************\n");
	printf(" [F1] ��������(insert)\n");
	printf(" [F2] �����˻�-������ȣ,key(select)\n");
	printf(" [F3] �����˻�-������,value(select)\n");
	printf(" [F4] �������ݺ���(update)\n");
	printf(" [F5] ��������(delete)\n");
	printf(" [ESC] exit\n");
	printf("*****************************************\n");

	return MyInput::input_keydata();   //#include <conio.h>
}

void MyOutput::ending()
{
	system("cls");
	printf("*****************************************\n");
	printf(" ���α׷��� �����մϴ�\n");
	printf("*****************************************\n");
	system("pause");
}