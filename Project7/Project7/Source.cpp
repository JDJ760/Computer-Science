//Lab CODE 1040
//
//Jason Johnson
//
//CS1A 1:30 - 3:50
//
//Lab 6-1
//============================

#include <iostream>#

using namespace std;

int main()
{
	int num{};
	int sum{};

	cout << "Enter a positive integer value: ";
	cin >> num;


	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;

		if (num < 1)
		{
			cout << "Please Enter a Positive Integer: ";
			cin >> num;

		}

	}

	cout << "\nThe sum of numbers 1 - " << num << " is: " << sum << endl;

	return 0;
}


////OUTPUT:
//Enter a positive integer value : 30
//
//The sum of numbers 1 - 30 is : 465
//
//C : \Users\jjohnson257\source\repos\Project7\x64\Debug\Project7.exe(process 2116) exited with code 0 (0x0).
//Press any key to close this window . . .
