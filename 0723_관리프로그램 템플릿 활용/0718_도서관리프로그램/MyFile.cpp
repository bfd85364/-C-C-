#include "std.h"

string MyFile::File_Name = "books.txt";

void MyFile::load(vector<Book>& books) { //불러오기 단계에서 가져올 것 도서 번호, 도서명, 도서가격
	cout << "[파일 불러오기]" << endl;

	ifstream of(File_Name); //#include <fstream> -> ifstream은 in + fstream (ifstream) //불러오기 

	int size;
	of >> size;

	cout << "불러오는 책 개수 : " << size << endl;

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
	cout << "[파일 저장]" << endl;
	cout << "책 저장 갯수" << books.size() << endl;

	ofstream of(File_Name); //#include <fstream> ->ofstream은 out + fstream(ofstream) //저장


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

