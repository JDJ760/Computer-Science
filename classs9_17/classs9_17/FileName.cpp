#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice{};

	cout << "1. Porsche\n\n"
		<< "2. Tesla\n\n"
		<< "3. Hyundai\n\n"
		<< "Which do you like?";

	cin >> choice;
	
	switch (choice)
	{
	case 1: cout << "Porsche is great.\n";
		break;

	case 2: cout << "Tesla sucks :(((\n";
		break;

	case 3: cout << "NO MAMES!\n";
		break;

	default: cout << "INVALID\n\n";

	}





	
	return 0;

}