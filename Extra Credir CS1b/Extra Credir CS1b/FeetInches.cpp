#include "FeetInches.h"
#include <string>

// Constructors
FeetInches::FeetInches()
{
	inches = 0;
	feet = 0;
}

FeetInches::FeetInches(double f, double i)
{
	while (i >= 12)
	{
		i -= 12;
		f++;
	}
	inches = i;
	feet = f;
}

FeetInches::~FeetInches() {}

// Setters
void FeetInches::setInches(double i)
{
	while (i >= 12) {
		i -= 12;
		feet++;
	}
	inches = i;
}

void FeetInches::setFeet(double f)
{
	feet = f;
}

void FeetInches::setTotal(double f, double i)
{
	while (i >= 12)
	{
		i -= 12;
		f++;
	}
	inches = i;
	feet = f;
}

// Getters
double FeetInches::getInches()const
{
	return inches;
}

double FeetInches::getFeet()const
{
	return feet;
}

// Overloaded Operators
void FeetInches::operator +(FeetInches& dis2)
{
	double tempFt = dis2.feet;
	double tempIn = dis2.inches;
	while (tempIn >= 12)
	{
		tempIn -= 12;
		tempFt++;
	}
	feet += tempFt;
	inches += tempIn;
}

void FeetInches::operator -(FeetInches& dis2)
{
	double tempFt = dis2.feet;
	double tempIn = dis2.inches;
	feet -= tempFt;
	inches -= tempIn;
	while (inches >= 12)
	{
		inches -= 12;
		feet++;
	}
	while (inches < 0)
	{
		inches += 12;
		feet--;
	}
	feet = absolute(feet);
}

bool FeetInches::operator >(FeetInches& dis2)
{
	if (feet >= dis2.feet)
	{
		if (inches >z dis2.inches)
		{
			return true;
		}
	}
	return false;
}


bool FeetInches::operator <(FeetInches& dis2)
{
	if (feet <= dis2.feet)
	{
		if (inches < dis2.inches)
		{
			return true;
		}
	}
	return false;
}

bool FeetInches::operator ==(FeetInches& dis2)
{
	if (feet == dis2.feet && inches == dis2.inches)
	{
		return true;
	}
	return false;
}

std::istream& operator >>(std::istream& stream, FeetInches& dis)
{
	double tempFt{};
	double tempIn{};
	stream >> tempFt;
	stream >> tempIn;

	dis.feet = tempFt;
	dis.inches = tempIn;
	return stream;
}

std::ostream& operator <<(std::ostream& stream, FeetInches& dis) {
	stream << dis.feet << " feet, " << dis.inches << " inches";
	return stream;
}

// Member Functions

double FeetInches::absolute(double d)
{
	if (d < 0)
		return d * -1;
	else
		return d;
}

void FeetInches::conversion() {
	while (inches >= 12)
	{
		inches -= 12;
		feet++;
	}
	while (inches < 0)
	{
		inches += 12;
		feet--;
	}
	feet = absolute(feet);
}