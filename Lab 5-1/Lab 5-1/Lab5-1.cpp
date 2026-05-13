//Lab Code 2222
//====================
//
//====================
//
//====================
//
//====================
//
//====================




#include <iostream>

using namespace std;

int main()
{
	int day{};
	int month{};
	int year{};
	

	cout << "Please enter a day in numeric form: ";
	cin >> day;

	cout << "\nPlease enter a Month in numeric form: ";
	cin >> month;

	cout << "\nplease enter a year in two digit form: ";
	cin >> year;

	cout << endl << endl;
	

	if (day <= 0 || month <= 0 || year <= 0)
	{
		cout << "Invalid input.";
		return 1;

	}

	else if (day * month == year)
	{
		
		cout << " It's a magic year \n";

	}

	else
	{

		cout << "Not a magic year\n";

	}
	return 0;

}
//OutPut
/*












*/
