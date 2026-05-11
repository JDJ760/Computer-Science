#pragma once
#include "Book.h"
class Fantasy : public Book
{
private:
	string author;
	
public: 
	//Fantasy();
	Fantasy(string author, string title, float wholesaleCost);
	~Fantasy();

	 void showBook();
	
};

