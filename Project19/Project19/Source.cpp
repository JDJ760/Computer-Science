// LAB CODE 1111
//JASON JOHNSON
//CS1B
// 2/4/26



#include <iostream>
#include <string>


enum Roster {Tom = 1,Sharon,Bill,Teresa,John};

using namespace std;

void displayBirthday(Roster roster);


int main() {

	Roster roster{};
	int birthday{};


	cout << "This Program will give you a students birthday\n"
		<< "1.) = Tom\n" << "2) = Sharon\n" << "3) = Bill\n"
		<< "4) = Teresa\n" << "5) = John\n\n";


	cout << " Whose Birthday do you want to know?";
	cin >> birthday;

	roster = static_cast<Roster>(birthday);

	displayBirthday(roster);

	

	

	return 0; 
}



void displayBirthday(Roster roster) {

	switch (roster) {
	case 1: cout << " Tom's birthday is January 3.";
		break;

	case 2: cout << "Sharon's birthday is April 22";
		break;

	case 3: cout << "Bill's birthday is May 19";
		break;

	case 4: cout << "Teresa's birthday is July 2";
		break;

	case 5: cout << "Johns birthday is June 17";
		break;

	default: cout << "Invalid selection";
		break;

	}

}


/// OUTPUT
/*

This Program will give you a students birthday
1.) = Tom
2) = Sharon
3) = Bill
4) = Teresa
5) = John

 Whose Birthday do you want to know?4
Teresa's birthday is July 2
C:\Users\jjohnson257\source\repos\Project19\x64\Debug\Project19.exe (process 30884) exited with code 0 (0x0).
Press any key to close this window . . .

*/