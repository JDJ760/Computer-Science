#include "Bank.h"

Bank::Bank() {
	balance = 0.0;
	depositNum = 0;
	withdrawlNum = 0;
	annualInterest = 0.02f;
	monthlyCharges = 0.0;
	serviceCharge = 0.0;

}

Bank::Bank(float b, int d, int w, float a, float m) {
	balance = b;
	depositNum = d;
	withdrawlNum = w;
	annualInterest = a;
	monthlyCharges = m;
	serviceCharge = 0.0;

}

void Bank::setBalance(float b) {
	balance = b;

}

void Bank::setCharges(float m) {
	monthlyCharges = m;
}

void Bank::setDeposit(int d) {
	depositNum = d;
}

void Bank::setInterest(float a) {
	annualInterest = a;
}

void Bank::setWithdrawl(int w) {
	withdrawlNum = w;
}

float Bank::getBalance()const {
	return balance;
}

int Bank::getDeposit()const {
	return depositNum;
}

int Bank::getWithdrawl()const {
	return withdrawlNum;
}

float Bank::getInterest()const {
	return annualInterest;
}

float Bank::getCharges()const {
	return monthlyCharges;
}


void Bank::deposit() {
	float d{};

	cout << "Enter an Amount to Deposit: ";
	cin >> d;

	while (d < 0)
	{
		cout << "ERROR: Must be greater than zero\n\n"
			<< "Enter amount to Deposit: ";
		cin >> d;
	}
	balance += d;
	depositNum++;
}


void Bank::withdraw() {
	float w{};

	cout << "Enter an Amount to Withdrawl: ";
		cin >> w;

		while (w < 0)
		{
			cout << "ERROR: Must be greater than zero\n\n"
				<< "Enter amount to withdrawl : ";
			cin >> w;
		}
		balance -= w;
		withdrawlNum++;
}

void Bank::calcInt() {
	float interestM = annualInterest / 12;

	interestM = balance * interestM;

	balance = balance + interestM;
}

void Bank::monthlyProc() {
	balance -= serviceCharge;

	calcInt();

	withdrawlNum = 0;
	depositNum = 0;
	monthlyCharges = 0;
}

void Bank::display()
{
	cout << fixed << setprecision(2);
	cout << "Withdrawals:\t" << withdrawlNum
		<< "\nDeposits:\t\t" << depositNum;
	monthlyProc();
	cout << "\nService Charges:\t" << serviceCharge
		<< "\nEnding Balance:\t" << balance;

}