#include "Fiction.h"
//Fiction::Fiction() {
//	genre = " ";
//}

Fiction::Fiction(string g, string t, float cost) : Book(t, cost) {
	genre = g;
}

Fiction::~Fiction() { cout << "\nFICTION IS DEAD\n"; }


void Fiction::showBook()
{
	cout << "Genre: " << genre << endl;

	cout << "Retail Price: $" << wholesaleCost * 3.0 << endl;
	cout << "Title: " << title << endl;
}