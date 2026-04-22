//====================================
//Attached: Lab_1b
//====================================
//Program : Lab_1b
//====================================
//Programmer: Jason Johnson
//====================================
//Class: CS_1a
//====================================
// Description:
//             A Program to check
//             Your Finances
//
//
//
//====================================
//Code Lab 1111


#include <iostream>
using namespace std;

int main()
{
	int checking{};
	int savings{};
	int deposit{};
	int check{};
	int total{};

	cout << "Please enter your checking balance: ";
	cin >> checking;

	cout << "Please enter your savings: ";
	cin >> savings;

	cout << "Please enter the amount of your deposit: ";
	cin >> deposit;

	savings += deposit;

	cout << "Please enter the amount of the check you would like to write: ";
	cin >> check;

	checking -= check;

	cout << "\nSavings Balance: " << savings << endl;

	cout << "\nChecking Balance: " << checking << endl;

	total += savings + checking;

	cout << "\nYour Total balance between both: " << total;

	cout << "\n\nWell, you're not exactly rich, but not bad." << endl;

	return 0;
}

//===================================
/*
Output:
Please enter your checking balance: 5000
Please enter your savings: 5000
Please enter the amount of your deposit: 500
Please enter the amount of the check you would like to write: 200

Savings Balance: 5500

Checking Balance: 4800

Your Total balance between both: 10300

Well, you're not exactly rich, but not bad.

C:\Users\jjohnson257\source\repos\Lab 1b\x64\Debug\Lab 1b.exe (process 15008) exited with code 0 (0x0).
Press any key to close this window . . .
*/