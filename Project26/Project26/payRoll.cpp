// JASON JOHNSON , CADEN FISHER

#include "payRoll.h"

using namespace std;


Payroll::Payroll(int s)
{
	size = s;
	payRate = new double[size] {};
	hours = new double[size] {};
	finalPay = new double[size] {};

}



Payroll::~Payroll() {

	delete payRate;
	delete hours;
	delete finalPay;

	payRate = nullptr;
	hours = nullptr;
	finalPay = nullptr;
}


void Payroll::setPayrate(int i, double p) {

	while (p <= 0) {
		cout << "Error: pay rate must be greater than 0\n Enter new Payrate:";
		cin >> p;
	}


	payRate[i] = p;

}


void Payroll::setHours(int i, double h) {

	while (!(h > 0 && h <= 60)) {
		cout << "Error: pay rate must be greater than 0\n Enter new Payrate:";
		cin >> h;
	}


	hours[i] = h;


}

double Payroll::getPayrate(int i)const{
	return payRate[i];
}

double Payroll::getHours(int i)const {
	return hours[i];
}

double Payroll::getFinalPay(int i)const {
	return finalPay[i];
}

void Payroll::findFinalPay(int i) {

	finalPay[i] = hours[i] * payRate[i];

}
