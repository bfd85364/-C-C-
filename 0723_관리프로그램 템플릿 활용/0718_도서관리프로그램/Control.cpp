//control.cpp
#include "std.h"

Control::Control(){
	//myfile_load(g_books);

	MyFile::load(books);

	//sample

	//books.push_back(Book(111, "C���",2000)); //�Ը�ü (�̸��� ���� ��ü�� ������ push_back�� ����)

	//Book b(222, "C++", 3000);
	//books.push_back(b);

}

Control::~Control()
{
	MyFile::save(books);
	//myfile_save(g_books, ARR_SIZE);

}

void Control::con_printall()
{
	for (int i = 0; i < books.size(); i++)
	{
		printf("[%d] ", i);
		Book book = books[i]; //books[i]�� ����--> �ּҸ� ���� ������ �´�. -> �����ص� �������. 
		book.print();
	}
	printf("\n");
}

void Control::con_insert()
{
	printf("[insert]\n\n");

	int isbn	 = MyInput::input_integer("������ȣ");
	string title = MyInput::input_string("������");
	int price	 = MyInput::input_integer("����");



	Book book(isbn, title, price);

	books.push_back(book);

		printf("����Ϸ�\n");

}

void Control::con_select_isbn()
{
	printf("[select-������ȣ(key)]\n\n");

	int isbn = MyInput::input_integer("������ȣ");
	int idx = isbn_to_idx(isbn);
	if (idx != -1)
	{
		Book book = books[idx];
		book.println();
	}
	else
	{
		printf("����\n");
	}
}




/*//���� ���� ���� �ȵȴ�. int isbn;
//�̹� ���� �Լ����� ����� ���µ� ->���� �������� ���ڴ�? -> �ȵȴ�.  
* 
* 
bool temp(Book b) {
	if (b.get_isbn() == 111) return true;

	else return false;
}

*/


/* �׷��� �Լ� ��ü�� ����!!!
* book.h ���Ͽ��� �Լ���ü ����
*
	Book_ISBN_Select bis(isbn);/
*
*/

void Control::con_select_title()
{
	printf("[select-������ȣ(key)]\n\n");
	int isbn = MyInput::input_integer("������ȣ");

	vector<Book>::iterator itr;
	Book_ISBN_Select bis(isbn);

	itr = find_if(books.begin(), books.end(), bis);  //find �Լ� 
	//vector container ���İ� ���� Ÿ���� �������� ������Ѵ�.
	// �׷��� �츮�� ������ȣ�� �˻�ó���� ��� �ʹ�. --> ���� find_if()�Լ� ��� 

	if (itr != books.end()) {
		Book b = *itr; //itr -> �迭�� �׼�
		b.println();
	}
	else {
		cout << "����" << endl;
	}



}

void Control::con_update()
{
	printf("[update-������ȣ]\n\n");

	int isbn	= MyInput::input_integer("������ȣ");
	int price	= MyInput::input_integer("��������");

	int idx = isbn_to_idx(isbn);
	if (idx != -1)
	{
		//���纻 ����
		/*
		Book book = books[idx];
		book.set_price(price);
		printf("����Ǿ����ϴ�\n");
		*/


		books[idx].set_price(price);

		printf("����Ǿ����ϴ�.\n");
	}
	else
	{
		printf("����\n");
	}
}

void Control::con_delete()
{
	printf("[delete-������ȣ]\n\n");

	int isbn = MyInput::input_integer("������ȣ");
	int idx = isbn_to_idx(isbn);
	if (idx != -1)
	{
		books.erase(books.begin() + idx);

		printf("�����Ǿ����ϴ�\n");
	}
	else
	{
		printf("����\n");
	}
}

int Control::isbn_to_idx(int isbn)
{
	for (int i = 0; i < books.size(); i++)
	{
		Book book = books[i];
		if (book.get_isbn() == isbn)
		{
			return i;
		}
	}
	return -1;
}
