#include "Book.h"

#include "Header.h"



Book::Book() {
	title = " ";
	cost = 0.0;
	count++;
}

Book::Book(const std::string& t, double c) {

	title = t;
	cost = c;
	count++;
}


Book::~Book() {};


void Book::setTitle(const std::string& t) {
	title = t;
}

void Book::setCost(double c) {
	cost = c;
}

std::string Book::getTitle()const {
	return title;
}


double Book::getCost()const {
	return cost;
}

void Book::printBook()const {
	std::cout << "Title is: " << title << std::endl;
	std::cout << "The cost is: $" << cost << std::endl;
}

int Book::getCount() {
	return count;
}


bool Book::operator >(const Book& book2)const {
	if (cost > book2.cost)
		return true;

	else
		return false;
}




bool Book::operator >(double price)const {
	return cost > price;
}



double Book::operator +(const Book& book2)const {
	return cost + book2.cost;
}



std::ostream& operator <<(std::ostream& stream, const Book& book) {
	stream << "\nTitle is: " << book.title << std::endl;
	stream << "The cost is: $" << book.cost << std::endl;
	return stream;
}

