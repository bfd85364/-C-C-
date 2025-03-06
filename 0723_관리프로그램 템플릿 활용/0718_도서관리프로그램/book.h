//book.h
#pragma once

class Book
{
private:
    int isbn;       //��ȣ
    string title;   //������
    int price;      //����

public:
    Book(int isbn, string title, int price);
    ~Book();

public:
    int get_isbn() const;
    string get_title() const;
    int get_price() const;
    void set_price(int _price);

public:
    void print() const;
    void println() const;
};



//�Լ� ��ü --- �˻� ����
class Book_ISBN_Select {
private:
    int isbn;
public:
    Book_ISBN_Select(int _isbn):isbn(_isbn){}

    bool operator()(const Book& b) {

        if (b.get_isbn() == isbn) {
            return true;
        }
        else {
            return false;
        }
    }
};