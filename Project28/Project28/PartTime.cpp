#include "PartTime.h"


PartTime::PartTime(string first, string last, long id, double rate, double hours) :
	EmployeeType(first, last, id)
{
	payRate = rate;
	hoursWorked = hours;

}


void PartTime::set(string first, string last, long id, double rate, double hours) {
	setName(first, last);
	setId(id);
	payRate = rate;
	hoursWorked = hours;
}

void PartTime::setPayRate(double rate)
{
	payRate = rate;

}


void PartTime::setHoursWorked(double hours) {
	hoursWorked = hours;
}


double PartTime::getPayRate()const {
	return payRate;

}

double PartTime::getHoursWorked()const {
	return hoursWorked;

}

double PartTime::calcPay()const
{
	return payRate * hoursWorked;


}



void PartTime::print()const {
	cout << "ID: " << getId() << endl;
	cout << "Name: ";
	PersonType::print();

	cout << endl;


	cout << fixed << setprecision(2);
	cout << "Wages: $" << calcPay();

}









