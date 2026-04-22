// Lab Code 1145
//=======================
// CS1a 1:30-3:50
//=======================
//Jason Johnson
//=======================


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int distance{};
	int speed{};
	int time{};
	
	
		cout << "whats the speed of the vehicle in mph? ";
		cin >> speed;


		cout << "how many hours has it traveled? ";
		cin >> time;
		while (speed < 1 || time < 1)
		{
			cout << "Try Again\n";

			cout << "whats the speed of the vehicle in mph? ";
			cin >> speed;


			cout << "how many hours has it traveled? ";
			cin >> time;
			
		}
		cout << "\nHour\t" << "Distance Traveled\n"
			<< "-------------------------\n";


		for (int i = 1; i <= time; i++)
		{
			cout << i << "\t" << i * speed << "\n";

		}
	
	return 0;
}

// OUTPUT
/*
whats the speed of the vehicle in mph? 0
how many hours has it traveled? 0
Try Again
whats the speed of the vehicle in mph? 0
how many hours has it traveled? -1
Try Again
whats the speed of the vehicle in mph? 40
how many hours has it traveled? 3

Hour    Distance Traveled
-------------------------
1       40
2       80
3       120

C:\Users\jjohnson257\source\repos\Lab\x64\Debug\Lab.exe (process 18752) exited with code 0 (0x0).
Press any key to close this window . . .
*/