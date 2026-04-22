#pragma once
#include <iostream>

class FeetInches
{
private:
	double feet;
	double inches;

public:
	// Constructors
	FeetInches();
	FeetInches(double f, double i);
	~FeetInches();

	// Setters
	void setFeet(double f);
	void setInches(double i);
	void setTotal(double f, double i);

	// Getters
	double getFeet()const;
	double getInches()const;

	// Overloaded Operators
	void operator +(FeetInches& dis2);
	void operator -(FeetInches& dis2);
	void operator ++();
	void operator ++(int);
	bool operator >(FeetInches& dis2);
	bool operator <(FeetInches& dis2);
	bool operator ==(FeetInches& dis2);
	friend std::istream& operator >>(std::istream& stream, FeetInches& dis);
	friend std::ostream& operator <<(std::ostream& stream, FeetInches& dis);
	
	// Member Functions
	void conversion();
	double absolute(double);
};

