//control.h
#pragma once

class Control
{
private:
	vector<Book> books; // ��� �ִ� ���� 

public:
	Control(); //������ 
	~Control(); //�Ҹ���

public:
	void con_printall();
	void con_insert();
	void con_select_isbn();
	void con_select_title();
	void con_update();
	void con_delete();

private:
	int isbn_to_idx(int isbn);
};


