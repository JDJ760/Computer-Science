//Lab 0000
//=============================
// Name:Jason Johnson
//=============================
//Class CS1A 1:30-3:50
//==============================
// LAB 2
//==============================

#include <iostream>
#include <iomanip>
using namespace std;


double INT_RATE{ .05 };


int main()
{
	double balance{1000};
	double deposit{};
	double newBall{};
	double interest{};
	double monthlyInterest{};


	cout << fixed << setprecision(2);

	cout << "Your present balance is: " << balance 
		<< "." << endl;
	
	cout << "enter your deposit: ";
	cin >> deposit;

	newBall = deposit + balance;
	monthlyInterest = (newBall * INT_RATE) / 12;

	cout << "-----ACCOUNT SUMMARY-----" << endl << endl;


	cout << left << setw(20) << "Previous Balance: " 
		<< "$" << right << setw(7) <<  balance << endl;

	cout << left << setw(20) << "Deposit Amount: " 
		<< "$" << right << setw(7) << deposit << endl;

	cout << left << setw(20) << "New Balance: " 
		<< "$" << right << setw(7)  << newBall << endl;

	cout << left << setw(20) << "Monthly Interest: " 
		<< "$" << right << setw(7)  << monthlyInterest << endl;

	return 0;
}
/*
OUTPUT:
Your present balance is: 1000.00.
enter your deposit: 500
-----ACCOUNT SUMMARY-----

Previous Balance:   $1000.00
Deposit Amount:     $ 500.00
New Balance:        $1500.00
Monthly Interest:   $   6.25

C:\Users\jjohnson257\source\repos\Lab2\x64\
Debug\Lab2.exe (process 70872) exited with code 0 (0x0).
Press any key to close this window . . .


*/