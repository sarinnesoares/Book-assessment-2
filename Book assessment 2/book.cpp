#include "book.h"

void Book::setBookDetails(string title1, string author1, string ISBN1, bool availality1) {
	title = title1;
	author = author1;
	ISBN = ISBN1;
	isItAvailable = availality1;

}

void Book::displayBookDetails() {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << "Availability: " << isItAvailable << endl;
}


void Book::returnBook() {
	isItAvailable = true;
}

bool Book::borrowBook() {
	if (isItAvailable) {
		//cout << "You have borrowed the book: " << title << endl;
		return true;
	}
	else {
		//cout << "The book " << title << "is not available." << endl;
		return false;
	}


}

bool borrowBook()
{
	return 0;
}
