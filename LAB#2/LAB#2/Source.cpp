//LAB CODE 2000
//JASON JOHNSON
//LAB 2
#include <iostream>
#include <iomanip>


using namespace std;

int const ROWS{ 2 };
int const COLS{ 5 };

void getNumbers(int[][COLS]);
void showNumbers(int[][COLS]);
void addRows(int[][COLS]);
void highest(int[][COLS]);
void lowest(int[][COLS]);




int main() {

	int numArr[ ROWS ][COLS] {};

	getNumbers(numArr);

	showNumbers(numArr);

	addRows(numArr);

	highest(numArr);

	lowest(numArr);

	


	return 0;
}



void getNumbers(int numArr[][COLS]) {
	cout << "Please enter numbers into the array:\n";
	
	for (int i = 0; i < ROWS; i++) {

		for (int j = 0; j < COLS; j++) {

			cout << "Enter number in position " << "(" << i << ", " << j << ") :";
			cin >> numArr[i][j];

		}
	}
	cout << endl;
}







void showNumbers(int numArr[][COLS]) {
	cout << "Here are the numbers you entered:\n";

	for (int i = 0; i < ROWS; i++) {

		for (int j = 0; j < COLS; j++) {

			cout << "\t" << numArr[i][j];

		}
	}
	cout << endl;
}






void addRows(int numArr[][COLS]) {
	int total{};

	for (int i = 0; i < ROWS; i++) {
		total = 0;
		for (int j = 0; j < COLS; j++) {
			total += numArr[i][j];
			
		}
		cout << "\n\nThe total for Row" << i + 1 << " is: " << total;

	}


}




void highest(int numArr[][COLS]) {

	int highest{numArr[0][0]};
	for (int i = 0; i < ROWS; i++) {
		
		for (int j = 0; j < COLS; j++) {

			if (highest < numArr[i][j]) {
				highest = numArr[i][j];
			}

		}
		

	}

	cout << "\n\nThe highest number is: " << highest;
}





void lowest(int numArr[][COLS]) {
	int lowest{numArr[0][0]};

	for (int i = 0; i < ROWS; i++) {

		for (int j = 0; j < COLS; j++) {

			if (lowest > numArr[i][j]) {
				lowest = numArr[i][j];
			}

		}


	}

	cout << "\n\nThe lowest number is: " << lowest;
}


/*
OUTPUT:

Please enter numbers into the array:
Enter number in position (0, 0) :12
Enter number in position (0, 1) :45
Enter number in position (0, 2) :67
Enter number in position (0, 3) :54
Enter number in position (0, 4) :34
Enter number in position (1, 0) :56
Enter number in position (1, 1) :78
Enter number in position (1, 2) :98
Enter number in position (1, 3) :76
Enter number in position (1, 4) :43

Here are the numbers you entered:
		12      45      67      54      34      56      78      98      76      43


The total for Row1 is: 212

The total for Row2 is: 351

The highest number is: 98

The lowest number is: 12
C:\Users\jjohnson257\source\repos\LAB#2\x64\Debug\LAB#2.exe (process 34108) exited with code 0 (0x0).
Press any key to close this window . . .


*/
