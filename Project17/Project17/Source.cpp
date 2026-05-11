//LAB CODE: 1111
// JASON JOHNSON
//CS1A 1:30-3:50
// MED 
#include <iostream>

using namespace std;

const int ROW{ 5 };
const int COL{ 5 };

void getNumbers(int numArray[][COL]);
void showNumbers(int numArray[][COL]);
void highestNum(int numArray[][COL]);
void addRows(int numArray[][COL]);


int main() {

	int numArray[ROW][COL] = {0};

	getNumbers(numArray);

	showNumbers(numArray);

	highestNum(numArray);

	addRows(numArray);


	return 0;
}





void getNumbers(int numArray[][COL]) {

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COL; j++)
		{
			cout << "Enter a number in position"
				<< "(" << i + 1 << "," << j + 1 << ") : ";
			cin >> numArray[i][j];

		}
	}
}






void showNumbers(int numArray[][COL]) {

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COL; j++)
		{
			cout << numArray[i][j] << "\t";
		}
		cout << "\n\n";
	}
}





void highestNum(int numArray[][COL]) {
	int highest{};

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COL; j++)
		{
			if (highest < numArray[i][j]) {
				highest = numArray[i][j];
		 }
		}
	}
	cout << "\nThe highest number is: " << highest << endl;
}





void addRows(int numArray[][COL]) {

	int row{};

	for (int i = 0; i < ROW; i++) {
		row = 0;

		for (int j = 0; j < COL; j++)
		{
			row += numArray[i][j];
			
		}
		cout << "The Total for row " << i + 1 << ": " << row
			<< endl;
	}
}

//OUTPUT:
/*
Enter a number in position(1,1) : 1
Enter a number in position(1,2) : 2
Enter a number in position(1,3) : 8
Enter a number in position(1,4) : 12
Enter a number in position(1,5) : 4
Enter a number in position(2,1) : 5
Enter a number in position(2,2) : 19
Enter a number in position(2,3) : 13
Enter a number in position(2,4) : 3
Enter a number in position(2,5) : 4
Enter a number in position(3,1) : 6
Enter a number in position(3,2) : 16
Enter a number in position(3,3) : 12
Enter a number in position(3,4) : 0
Enter a number in position(3,5) : 8
Enter a number in position(4,1) : 4
Enter a number in position(4,2) : 11
Enter a number in position(4,3) : 14
Enter a number in position(4,4) : 8
Enter a number in position(4,5) : 3
Enter a number in position(5,1) : 2
Enter a number in position(5,2) : 7
Enter a number in position(5,3) : 17
Enter a number in position(5,4) : 12
Enter a number in position(5,5) : 1
1       2       8       12      4

5       19      13      3       4

6       16      12      0       8

4       11      14      8       3

2       7       17      12      1


The highest number is: 19
The Total for row 1: 27
The Total for row 2: 44
The Total for row 3: 42
The Total for row 4: 40
The Total for row 5: 39

C:\Users\jjohnson257\source\repos\Project17\x64\Debug\Project17.exe (process 26432) exited with code 0 (0x0).
Press any key to close this window . . .
*/