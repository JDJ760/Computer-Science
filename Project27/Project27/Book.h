#pragma once
#include <iostream>
#include <string>


using namespace std;


class Book
{

protected:

	string title;
	float wholesaleCost;


public:
	
	Book();
	Book(string title, float wholesaleCost);
	virtual ~Book();
	
	void setTitle(string);
	void setWholesaleCost(float);

	string getTitle();
	float getWholesaleCost()const;

	float calcRetailPrice();

	virtual void showBook();

private:



};

