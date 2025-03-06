//book.c
#include "std.h"

Book::Book(int _isbn, string _title, int _price)
    :isbn(_isbn), title(_title), price(_price)
{ 
}

Book::~Book()
{
}

int Book::get_isbn() const
{
    return isbn;
}

string Book::get_title() const
{
    return title;
}

int Book::get_price() const
{
    return price;
}

void Book::set_price(int _price)
{
    price = _price; 
}

void Book::print() const
{
    cout << isbn << "\t";
    cout << title << "\t";
    cout << price << "원" << endl;
}

void Book::println() const
{
    cout << "[도서번호] " << isbn << endl;
    cout << "[도 서 명] " << title << endl;
    cout << "[가    격] " << price << "원" << endl;
}
