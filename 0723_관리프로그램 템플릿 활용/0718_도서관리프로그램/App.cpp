//app.c
#include "std.h"

App::App()
{
	pcon = new Control();
	MyOutput::logo();
}

App::~App()
{
	delete pcon;
	MyOutput::ending();
}

void App::run()
{
	while (1)
	{
		system("cls");
		pcon->con_printall();	//***************
		KeyData idx = MyOutput::menu();
		switch (idx)
		{
		case F1:  pcon->con_insert();			break;
		case F2:  pcon->con_select_isbn();		break;
		case F3:  pcon->con_select_title();		break;
		case F4:  pcon->con_update();			break;
		case F5:  pcon->con_delete();			break;
		case ESC: return;
		}
		system("pause");
	}
}
