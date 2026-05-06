// Members: Jason Johnson (Host), Caden Fisher, Ivan Gonzalez
// LabCode: TOFU

#include "Bank.h"
#include "Checking.h"
#include "Savings.h"

// Function Definitions
bool getChoice(int c, Checking& cAccount, Savings& sAccount);

int main()
{
	bool cont = true;
	int initialChoice{};
	bool finalChoice = true;
	Checking checkingAccount{};
	Savings savingsAccount{};

	do
	{
		cout << "\n\n******** BANK ACCOUNT MENU ********\n\n"
			<< "1. Saving Account Deposit\n"
			<< "2. Checking Account Deposit\n"
			<< "3. Saving Account Withdrawal\n"
			<< "4. Checking Account Withdrawal\n"
			<< "5. Update and Display Account Statistics\n"
			<< "6. Exit\n\n"
			<< "Your choice, please (1-6): ";

		cin >> initialChoice;
		finalChoice = getChoice(initialChoice, checkingAccount, savingsAccount);

		} while (finalChoice);
	
	return 0;
	}

bool getChoice(int c, Checking& cAccount, Savings& sAccount)
{
	while(c > 6 or c < 1)
	{
		cout << "ERROR: Choice must be made between 1 and 6\n"
			<< "Your choice, please (1-6): ";
		cin >> c;
	}

	if (c==1)
	{
		sAccount.deposit();
		return true;
	}

	else if (c==2)
	{
		cAccount.deposit();
		return true;
	}

	else if (c==3)
	{
		sAccount.withdraw();
		return true;
	}

	else if (c==4)
	{
		cAccount.withdraw();
		return true;
	}

	else if (c==5)
	{
		cout << "\nSAVINGS ACOUNT MONTHLY STATISTICS:\n";
		sAccount.display();

		cout << "\n\nCHECKING ACOUNT MONTHLY STATISTICS:\n";
		cAccount.display();
		return true;
	}

	else if (c==6)
	{
		return false;
	}

	return true;
}