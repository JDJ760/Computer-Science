#include "FullTime.h"



FullTime::FullTime(string first, string last, long id, double salary, double bonus):
	EmployeeType(first,last, id)
{
	emSalary = salary;
	emBonus = bonus;

}
FullTime::~FullTime() {

}

void FullTime::set(string first, string last, long id, double salary, double bonus) {
	setName(first, last);
	setId(id);

	emSalary = salary;
	emBonus = bonus;

}

void FullTime::setSalary(double salary) {
	emSalary = salary;


}


void FullTime::setBonus(double bonus) {
	emBonus = bonus;
}



double FullTime::getSalary()const {
	return emSalary;
}

double FullTime::getBonus()const {

	return emBonus;
}


double FullTime::calcPay()const {
	return emSalary + emBonus;
}


void FullTime::print()const {
	cout << "ID: " << getId() << endl;

	cout << "Name: ";
	PersonType::print();

	cout << fixed << setprecision(2);

	cout << "Wages: $" << calcPay() << endl;


}