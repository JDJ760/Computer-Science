#pragma once
#include "Book.h"

class Fiction : public Book 
{
private:
	string genre;

public:
	
	//Fiction();

	Fiction(string genre, string title, float wholesaleCost);

	~Fiction();

	 void showBook();

};

