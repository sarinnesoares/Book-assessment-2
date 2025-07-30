#include "book.h"


int main()
{
    Book book1;
    book1.setBookDetails("Surrounded by Idiots: The Four Types of Human Behaviour", "Thomas Erikson", "1111", true);

    Book book2;
    book2.setBookDetails("Thinking, Fast and Slow", "Daniel Kahneman", "6666", true);

    Book book3;
    book3.setBookDetails("The Power of Self-Awareness", "Patrick King", "3333", false);

    Book book4;
    book4.setBookDetails("How to Read People Like a Book", "James W Williams ", "4444", true);

    Book book5;
    book5.setBookDetails("Things We Left Behind", "Lucy Score", "7777", false);

    

    Book array[5];
    array[0] = book1;
    array[1] = book2;
    array[2] = book3;
    array[3] = book4;
    array[4] = book5;
    
string ISBNToBorrow;
cout << "Inptu the ISBN of the book that you want to borrow: " << endl;
cin >> ISBNToBorrow;

bool found = false;

for (int i = 0; i < 5; i++) {
    if (array[i].ISBN == ISBNToBorrow) {
        found = true;
        if (array[i].borrowBook()) {
            cout << "The book is available and has been borrowed." << endl;
        }
        else {
            cout << "Sorry, the book is not available." << endl;
        }
        break;
    }
}

if (!found) {
    cout << "Book with ISBN " << ISBNToBorrow << " not found." << endl;
}

return 0;
}
