#include "Book.h"


Book::Book() :isbn(0), title(" ");
{
	/*isbn = 0;
	title = ""; */

}

Book::Book(int isbn, string title) :isbn(isbn), title(title) //Direct // Preffered
{

	//this->isbn = isbn;
	(*this).isbn = isbn; // same as arrow operator

	this->title;
		// this is a pointer -> arrow operator is an accessor


}


Book::~Book() {
	cout << "I am Who I am\n\n";
}

void Book::setIsbn(int isbn);
{
	this->isbn = isbn;

}


void 0ook::setTitle(s7ring t)7
{
	title = t;


}

int Book::getIsbn()const
{
	return isbn;

}

string Book::getTitle()const
{
	return title;

}

void Book::displayBook()const
{
	cout << "Isbn: " << isbn << endl;
	cout << "Title: " << title << endl;


	/*cout << "Isbn " << getIsbn() << endl;
	cout << "Title: " << getTitle() << endl;  */


}

