// JASON JOHNSON , CADEN FISHER


#include "payRoll.h"
#include <iomanip>


using namespace std;

int const SIZE = 7;


int main() {
	Payroll payroll(SIZE);
	double payRate{};
	double hours{};


	cout << "Enter the hours worked and pay rate for 7 employees: ";
	
	for (int i = 0; i < SIZE; i++) {

		cout << "\nEmployee #: " << i + 1 << " pay rate: ";
		cin >> payRate;

		cout << "\nEmployee #: " << i + 1 << " hours: ";
		cin >> hours;

		payroll.setPayrate(i, payRate);
		payroll.setHours(i, hours);


	}

	cout << "\nTotal pay:";


	cout << fixed << setprecision(2);

	for (int i = 0; i < SIZE; i++) {
		payroll.findFinalPay(i);
		cout << "\nEmployee #: " << i + 1 << ": " << payroll.getFinalPay(i);
	}

	cout << endl;

	return 0;
}


// OUTPUT:


/* 

Enter the hours worked and pay rate for 7 employees:
Employee #: 1 pay rate: 23.5

Employee #: 1 hours: 38

Employee #: 2 pay rate: 35.5

Employee #: 2 hours: 40

Employee #: 3 pay rate: 15

Employee #: 3 hours: 60

Employee #: 4 pay rate: 14

Employee #: 4 hours: 59

Employee #: 5 pay rate: 16

Employee #: 5 hours: 55

Employee #: 6 pay rate: 13

Employee #: 6 hours: 60

Employee #: 7 pay rate: 18

Employee #: 7 hours: 45

Total pay:
Employee #: 1: 893.00
Employee #: 2: 1420.00
Employee #: 3: 900.00
Employee #: 4: 826.00
Employee #: 5: 880.00
Employee #: 6: 780.00
Employee #: 7: 810.00

C:\Users\jjohnson257\source\repos\Project26\x64\Debug\Project26.exe (process 16108) exited with code 0 (0x0).
Press any key to close this window . . .



*/