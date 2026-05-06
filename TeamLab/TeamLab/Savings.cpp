#include "Savings.h"


Savings::Savings() : Bank::Bank()
{
	status = false;
}

Savings::Savings(float b, int d, int w, float a, float m) : Bank::Bank(b, d, w, a, m)
{

	status = true;

	if (b < 25)
	{
		status = false;
	}

	else if (b >= 25)
	{
		status = true;
	}
}

bool Savings::getStatus()const
{
	return status;
}

void Savings::withdraw()
{
	if (!status)
	{
		cout << "Account is inactive.\n\n\n\n";
		return;
	}

	Bank::withdraw();

	if (balance < 25)
	{
		status = false;
	}
}

void Savings::deposit()
{	
	float d{};

	cout << "Enter an Amount to Deposit: ";
	cin >> d;

	while (d < 0)
	{
		cout << "ERROR: Must be greater than zero\n\n"
			<< "Enter amount to Deposit: ";
		cin >> d;
	}
	
	if (getStatus())
	{
		balance += d;
	}
	else if (!getStatus())
	{
		if (balance + d >= 25) {
			status = true;
			balance += d;
		}
	}
	depositNum++;
}

void Savings::monthlyProc()
{
	if (monthlyCharges > 4)
	{
		serviceCharge += monthlyCharges - 4;
	}

	Bank::monthlyProc();

	if (balance < 25)
	{
		status = false;
	}

	if (balance >= 25)
	{
		status = true;
	}
}