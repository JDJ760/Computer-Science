#pragma once
#include <iostream>

using namespace std;



class Book
{
private:
	int isbn;
	string title;


public:
	Book(); //Declare object like Book b1; not Book b1() //Default // Only one
	Book(int isbn, string title); //Overloaded Contructor /Infinite amount of these
	~Book(); // Destructor //Default // Only one

	void setIsbn(int isbn);
	void setTitle(string title);



	int getIsbn()const;
	string getTitle()const;

	void displayBook()const;

};

