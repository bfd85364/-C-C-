#pragma once
class MyFile
{
	static string File_Name;
public:
	static void load(vector<Book>& books);
	static void save(const vector<Book>& books);

};

