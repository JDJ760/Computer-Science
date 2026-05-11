#include "Book.h"

Book::Book() {
	title = " ";
	wholesaleCost = 0;
}

Book::Book(string t, float cost) {
	title = t;
	wholesaleCost = cost;
}

Book::~Book() {
	cout << "\nBOOK IS Dead\n";
}


void Book::setTitle(string t) {
	title = t;
}


void Book::setWholesaleCost(float c) {
	wholesaleCost = c;
}

string Book::getTitle() {
	return title;
}


float Book::getWholesaleCost()const {
	return wholesaleCost;
}

float Book::calcRetailPrice() {

	return wholesaleCost * 3.0;

}

void Book::showBook() {
	cout << "\nTitle: " << title << endl;
	cout << "\nRetail Price: " << calcRetailPrice() << endl;
}






