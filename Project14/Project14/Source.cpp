//Jason Johnson
//CS1A 1:30 - 3:50
// 11/17/25
//LAB 7b-2

#include <iostream>

using namespace std;

void getNumbers(int& num1, int& num2, int& num3);
int findGreatestNumber(int num1, int num2, int num3);
void display(int num1, int num2, int num3, int high);


int main() {

	int num1{};
	int num2{}; 
	int num3{};
	int high{};

	getNumbers(num1, num2, num3);

	high = findGreatestNumber(num1, num2, num3);

	display(num1, num2, num3, high);

	return 0;
}





void getNumbers(int& num1, int& num2, int& num3) {
	do {
		cout << "Please enter the first integer: ";
		cin >> num1;

		cout << "Please enter the second integer: ";
		cin >> num2;

		cout << "Please enter the third integer: ";
		cin >> num3;

		if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
			cout << "INVALID INTEGERS\n\n" << "Please use values greater than zero.\n\n";
		}

	} while (num1 <= 0 || num2 <= 0 || num3 <= 0);
}





int findGreatestNumber(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num3 && num2 > num1)
		return num2;
	else if (num3 > num1 && num3 > num2)
		return num3;

}





void display(int num1, int num2, int num3, int high) {
	cout << "The Highest Integer is " << high << "." << endl;
}






//OUTPUT:
/*
Please enter the first integer: 12
Please enter the second integer: 25
Please enter the third integer: 9
The Highest Integer is 25.

C:\Users\jjohnson257\source\repos\Project14\x64\
Debug\Project14.exe (process 1752) exited with code 0 (0x0).
Press any key to close this window . . .
*/