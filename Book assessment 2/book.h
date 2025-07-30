#pragma once
#include <iostream>
using namespace std;

class Book {
public:
	string title;
	string author;
	string ISBN;
	bool isItAvailable;

	void setBookDetails(string title, string author, string ISBN, bool isItAvailable);
	void displayBookDetails();
	bool borrowBook();
	void returnBook();



};

