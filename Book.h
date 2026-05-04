#pragma once

#include <iostream>
#include <string>


class Book
{
private:
	std::string title;
	double cost;

	static int count;





public:
	Book();
	Book(const std::string& title, double cost);
	~Book();

	void setTitle(const std::string& title);
	void setCost(double cost);

	std::string getTitle()const;
	double getCost()const;

	void printBook()const;





	static int getCount();

	bool operator >(const Book& book2)const;

	bool operator >(double price)const;

	double operator +(const Book& book2)const;

	friend void comparePrices(const Book& book1, const Book& book2);

	friend std::ostream& operator <<( std::ostream& stream, const Book& book); // book1.getPrice().... // cout << book1;		cout << book1 << book2 << .....
};

