#pragma once
#include "EmployeeType.h"
class FullTime: public EmployeeType 
{
private:
	double emSalary;
	double emBonus;

public:
	FullTime(string first = "", string last = "", long id = 0, double salary = 0.0, double bonus = 0.0);
	
	virtual ~FullTime();

	void set(string first, string last, long id, double salary, double bonus);

	void setSalary(double salry);
	void setBonus(double bonus);
	
		double getSalary()const;
		double getBonus()const;

		void print()const override;
		double calcPay()const override;

};

