#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class PersonType
{
private:
	string firstName;
	string lastName;

public:
	PersonType(string first = "", string last = "");
	virtual ~PersonType() {}
	void setName(string first, string last);



	virtual void print()const;

	void setFirstName(string first);
	void setLastName(string last);

	string getFirstName()const;
	string getLastName()const;


};

