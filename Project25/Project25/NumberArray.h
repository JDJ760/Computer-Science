#pragma once
#include <iostream>
#include <string>

using namespace std;

class NumberArray
{
private:
	double* data;
	int size;




public:

	NumberArray(int size);

	~NumberArray();

	//Mutator // Setters
	void setCell(int index, double value);

	//Accessors // Getters
	double getCell(int index)const;

	//Other member functions

	double getAverage()const;

	double getHighest()const;

	double getLowest()const;

	int getSize()const;		//Helper function








};

