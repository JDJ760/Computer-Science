#pragma once
#include "PersonType.h"

class EmployeeType : public PersonType 
{
private:
	long personId;

public:
	
	EmployeeType(string first, string last, long id);
	
	virtual ~EmployeeType() {}

	virtual void print()const = 0;
	virtual double calcPay()const = 0;

	void setId(long id);

	long getId()const;



};

