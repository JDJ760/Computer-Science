#include "Fantasy.h"


//Fantasy::Fantasy() {
//	author = " ";
//
//}

Fantasy::Fantasy(string a, string t, float cost) : Book(t, cost) {

	author = a;

}

Fantasy::~Fantasy() { cout << "\nFantasy is Dead\n"; }

void Fantasy::showBook() {

	cout << "Author: " << author << endl;
	cout << "Retail Price: $" << wholesaleCost * 5.2 << endl;
	cout << "Title: " << title << endl;
}