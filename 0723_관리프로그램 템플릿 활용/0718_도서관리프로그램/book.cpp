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
    cout << price << "��" << endl;
}

void Book::println() const
{
    cout << "[������ȣ] " << isbn << endl;
    cout << "[�� �� ��] " << title << endl;
    cout << "[��    ��] " << price << "��" << endl;
}
