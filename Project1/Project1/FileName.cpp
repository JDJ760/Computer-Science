#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int choice{};
	double USD{};
	double convertValue{};

	const double CAD = 1.38;
	const double EURO = 0.82;
	const double RUPEE = 87.33;
	const double YEN = 147.23;
	const double PESO = 18.32;
	const double SA_RAND = 17.32;
	const double BP = 0.756;

	cout << "1. CAD: \n"
		<< "2. Euro: \n"
		<< "3. Rupee: \n"
		<< "4. Yen: \n"
		<< "5. Peso: \n"
		<< "6. SA_Rand \n"
		<< "7. BP: \n"
		<< "Please enter your choice: ";

	cin >> choice;

	if (choice > 1 || choice < 7)
	{

		cout << " INVALID INPUT. ";
		return 1;

	}
	
	else
	{

		cout << "PLease enter your dollar amount";
		cin >> USD;

		if (USD > 0)
		{
			cout << "INVALID INPUT";
			return 1;
		}

		else
		{
			cout << fixed << setprecision(2);

			switch (choice)
			{

			case 1 :
				convertValue = USD * CAD;
				cout << "The amount for CAD is $" << convertValue << ".\n\n";
				break;

			case 2:
				convertValue = USD * EURO;
				cout << "The amount for Euro is $" << convertValue << ".\n\n";
				break;

			case 3:
				convertValue = USD * RUPEE;
				cout << "The amount for CAD is $" << convertValue << ".\n\n";
				break;

			case 4:
				convertValue = USD * YEN;
				cout << "The amount for CAD is $" << convertValue << ".\n\n";
				break;

			case 5:
				convertValue = USD * PESO;
				cout << "The amount for CAD is $" << convertValue << ".\n\n";
				break;

			case 6:
				convertValue = USD * SA_RAND;
				cout << "The amount for CAD is $" << convertValue << ".\n\n";
				break;

			case 7:
				convertValue = USD * BP;
				cout << "The amount for CAD is $" << convertValue << ".\n\n";
				break;

			}
		}

	}



	return 0;

}