#include "std.h"

string MyFile::File_Name = "books.txt";

void MyFile::load(vector<Book>& books) { //�ҷ����� �ܰ迡�� ������ �� ���� ��ȣ, ������, ��������
	cout << "[���� �ҷ�����]" << endl;

	ifstream of(File_Name); //#include <fstream> -> ifstream�� in + fstream (ifstream) //�ҷ����� 

	int size;
	of >> size;

	cout << "�ҷ����� å ���� : " << size << endl;

	for (int i = 0; i < size; i++) {
		int isbn;
		string title;
		int price;

		of >> isbn >> title >> price; 

		Book book(isbn, title, price);

		books.push_back(book);
	}
	of.close();
	system("pause");
}


void MyFile:: save(const vector<Book>& books) {
	cout << "[���� ����]" << endl;
	cout << "å ���� ����" << books.size() << endl;

	ofstream of(File_Name); //#include <fstream> ->ofstream�� out + fstream(ofstream) //����


	of<< books.size() << endl;

	for (int i = 0; i < books.size(); i++) {
		Book book = books[i];
		cout << book.get_isbn() << "\t";
		cout << book.get_title() << "\t";
		cout << book.get_price() << endl;
	}

	of.close();

	system("pause");
}

