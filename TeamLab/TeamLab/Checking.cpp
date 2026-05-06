#include "Checking.h"

Checking :: Checking() : Bank()
{

}

Checking :: Checking(float b, int d, int w, float a, float m) : Bank (b, d, w, a, m)
{

}

void Checking::withdraw()
{
	float w{};

	cout << "Enter an Amount to Withdrawl: ";
	cin >> w;

	while (w < 0)
	{
		cout << "ERROR: Must be greater than zero\n\n"
			<< "Enter amount to withdrawl : ";
		cin >> w;
	}

	if (balance - w < 0)
	{
		balance -= 15;
		withdrawlNum++;
		return;
	}
	
	balance -= w;
}

void Checking ::monthlyProc()
{
	serviceCharge += 5 + (0.1 * withdrawlNum);

	Bank::monthlyProc();
}



