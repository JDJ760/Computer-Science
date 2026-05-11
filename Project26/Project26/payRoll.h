
// Caden Fisher ; Jason Johnson
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Payroll
{
private:
	double* payRate;
	double* hours;
	double* finalPay;
	int size;


public:

	Payroll(int size);
	~Payroll();


	//Mutators
	void setPayrate(int index, double payroll);
	void setHours(int index, double hours);
	
	//Accessors
	double getPayrate(int i) const;
	double getHours(int i)const;
	double getFinalPay(int i)const;

	//Helper
	void findFinalPay(int i);
};

