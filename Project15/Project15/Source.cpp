// Jason Johnson
// CS1A 1:30 - 3:50
// Med
//LAB 7b-3
//11/19/25

#include <iostream>


using namespace std;


void getNumbers(int& num1, int& num2, int& num3, int& num4, int& num5);
void countEvenOdd(int num1, int num2, int num3, int num4, int num5, int& evenCount, int& oddCount); 





int main() {
	int num1{};
	int num2{};
	int num3{};
	int num4{};
	int num5{};
	int even{};
	int odd{};


	getNumbers(num1, num2, num3, num4, num5);

	countEvenOdd(num1, num2, num3, num4, num5, odd, even);


	return 0;
}








void getNumbers(int& num1, int& num2, int& num3, int& num4, int& num5) {
	do {
		cout << "Enter five integers: ";
		cin >> num1 >> num2 >> num3 >> num4 >> num5;
		if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num5 <= 0){
			cout << "INVALID! DATA MUST BE GREATER THAN 0. TRY AGAIN!";
		}
	} while (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num5 <= 0);
}








void countEvenOdd(int num1, int num2, int num3, int num4, int num5, int& even, int& odd) {

	if (num1 % 2 == 0) {
		even++;
	}
	else
		odd++;
	if (num2 % 2 == 0) {
		even++;
	}
	else
		odd++;
	if (num3 % 2 == 0) {
		even++;
	}
	else
		odd++;
	if (num4 % 2 == 0) {
		even++;
	}
	else
		odd++;
	if (num5 % 2 == 0) {
		even++;
	}
	else
		odd++;


	cout << "Number of even integers: " << even << endl << endl;
	cout << "Number of odd integers: " << odd << endl << endl;

}





// OUTPUT:
/*

Enter five integers: 2 4 6 8 3
Number of even integers: 4

Number of odd integers: 1


C:\Users\jjohnson257\source\repos\Project15\x64\Debug\
Project15.exe (process 15352) exited with code 0 (0x0).
Press any key to close this window . . .

*/