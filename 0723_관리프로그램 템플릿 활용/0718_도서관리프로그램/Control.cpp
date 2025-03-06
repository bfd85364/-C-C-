//control.cpp
#include "std.h"

Control::Control(){
	//myfile_load(g_books);

	MyFile::load(books);

	//sample

	//books.push_back(Book(111, "C언어",2000)); //입명개체 (이름이 없이 개체를 생성후 push_back에 넣음)

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
		Book book = books[i]; //books[i]가 원본--> 주소를 통해 복사해 온다. -> 수정해도 상관없다. 
		book.print();
	}
	printf("\n");
}

void Control::con_insert()
{
	printf("[insert]\n\n");

	int isbn	 = MyInput::input_integer("도서번호");
	string title = MyInput::input_string("도서명");
	int price	 = MyInput::input_integer("가격");



	Book book(isbn, title, price);

	books.push_back(book);

		printf("저장완료\n");

}

void Control::con_select_isbn()
{
	printf("[select-도서번호(key)]\n\n");

	int isbn = MyInput::input_integer("도서번호");
	int idx = isbn_to_idx(isbn);
	if (idx != -1)
	{
		Book book = books[idx];
		book.println();
	}
	else
	{
		printf("없다\n");
	}
}




/*//전역 변수 쓰면 안된다. int isbn;
//이미 전역 함수까지 만들어 놨는데 ->전역 변수까지 쓰겠다? -> 안된다.  
* 
* 
bool temp(Book b) {
	if (b.get_isbn() == 111) return true;

	else return false;
}

*/


/* 그래서 함수 개체를 쓴다!!!
* book.h 파일에서 함수개체 생성
*
	Book_ISBN_Select bis(isbn);/
*
*/

void Control::con_select_title()
{
	printf("[select-도서번호(key)]\n\n");
	int isbn = MyInput::input_integer("도서번호");

	vector<Book>::iterator itr;
	Book_ISBN_Select bis(isbn);

	itr = find_if(books.begin(), books.end(), bis);  //find 함수 
	//vector container 형식과 같은 타입의 형식으로 맞춰야한다.
	// 그런데 우리는 도서번호를 검색처리로 허고 싶다. --> 따라서 find_if()함수 사용 

	if (itr != books.end()) {
		Book b = *itr; //itr -> 배열의 죽소
		b.println();
	}
	else {
		cout << "없다" << endl;
	}



}

void Control::con_update()
{
	printf("[update-도서번호]\n\n");

	int isbn	= MyInput::input_integer("도서번호");
	int price	= MyInput::input_integer("도서가격");

	int idx = isbn_to_idx(isbn);
	if (idx != -1)
	{
		//복사본 수정
		/*
		Book book = books[idx];
		book.set_price(price);
		printf("변경되었습니다\n");
		*/


		books[idx].set_price(price);

		printf("변경되었습니다.\n");
	}
	else
	{
		printf("없다\n");
	}
}

void Control::con_delete()
{
	printf("[delete-도서번호]\n\n");

	int isbn = MyInput::input_integer("도서번호");
	int idx = isbn_to_idx(isbn);
	if (idx != -1)
	{
		books.erase(books.begin() + idx);

		printf("삭제되었습니다\n");
	}
	else
	{
		printf("없다\n");
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
