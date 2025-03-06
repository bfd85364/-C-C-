//myoutput.cpp
#include "std.h"

void MyOutput::logo()
{
	system("cls");  //#include <stdlib.h>
	printf("*****************************************\n");
	printf(" 비트단기과정\n");
	printf(" C++언어를 활용한 도서관리프로그램\n");
	printf(" 2024.07.18\n");
	printf(" 최창민\n");
	printf("*****************************************\n");
	system("pause");
}

KeyData MyOutput::menu()
{
	printf("*****************************************\n");
	printf(" [F1] 도서저장(insert)\n");
	printf(" [F2] 도서검색-도서번호,key(select)\n");
	printf(" [F3] 도서검색-도서명,value(select)\n");
	printf(" [F4] 도서가격변경(update)\n");
	printf(" [F5] 도서삭제(delete)\n");
	printf(" [ESC] exit\n");
	printf("*****************************************\n");

	return MyInput::input_keydata();   //#include <conio.h>
}

void MyOutput::ending()
{
	system("cls");
	printf("*****************************************\n");
	printf(" 프로그램을 종료합니다\n");
	printf("*****************************************\n");
	system("pause");
}