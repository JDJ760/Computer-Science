#include <iostream>

using namespace std;

int main()
{
	double sales{};
	double comissionRate{};
	double comission{};
	char answer{'Y'};




	do
	{
		cout << "enter the sales for today: ";
		cin >> sales;

		cout << "enter the comission rate: ";
		cin >> comissionRate;

		comission = sales * (comissionRate / 100);

		cout << "Your comission is: " << comission << endl << endl;

		cout << "Do your have more sales: ";
		cin >> answer;

	} while (toupper(answer) == 'Y');




	return 0;
}