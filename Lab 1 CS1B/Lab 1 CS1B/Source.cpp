//LAB CODE 0002
//JASON JOHNSON
//CS1B
//1/26/26

#include <iostream>
#include <iomanip>

using namespace std;
void getScore(double&, double&, double&, double&, double&);
double calcAverage(double, double, double, double, double);
char determineGrade(double);
void isValid(double, double, double, double, double);
void displayGrade(char grade);


int main() {
	double test1{};
	double test2{};
	double test3{};
	double test4{};
	double test5{};
	double avg{};
	char grade{};

	getScore(test1, test2, test3, test4, test5);

	isValid(test1, test2, test3, test4, test5);

	avg = calcAverage(test1, test2, test3, test4, test5);

	grade = determineGrade(avg);


	displayGrade(grade);


	return 0;
}





void getScore(double& test1, double& test2, double& test3, double& test4, double& test5) {
	cout << "Please enter 5 scores.\n\n";

	cout << "Score 1: ";
	cin >> test1;

	cout << "\nScore 2: ";
	cin >> test2;

	cout << "\nScore 3: ";
	cin >> test3;

	cout << "\nScore 4: ";
	cin >> test4;

	cout << "\nScore 5: ";
	cin >> test5;
}




double calcAverage(double test1, double test2, double test3, double test4, double test5) {
	return (test1 + test2 + test3 + test4 + test5) / 5;
}




char determineGrade(double avg) {
	if (avg >= 90) {
		return 'A';
	}

	else if (avg < 90 && avg >= 80) {
		return 'B';
	}

	else if (avg < 80 && avg >= 70) {
		return 'C';
	}

	else if (avg < 70 && avg >= 60) {
		return 'D';
	}

	else
		return 'F';
}

void isValid( double test1, double test2, double test3, double test4, double test5) {
	while (test1 < 0 || test2 < 0 || test3 < 0|| test4 < 0 || test5 < 0) {
		cout << "\nPlease enter values larger than 0\n";

		cout << "Score 1: ";
		cin >> test1;

		cout << "Score 2: ";
		cin >> test2;

		cout << "Score 3: ";
		cin >> test3;

		cout << "Score 4: ";
		cin >> test4;

		cout << "Score 5: ";
		cin >> test5;

}
}

void displayGrade(char grade) {
	switch (grade) {
	case 'A': cout << "Your grade is an A\n";
		break;

	case 'B': cout << "Your grade is an B\n";
		break;

	case 'C': cout << "Your grade is an C\n";
		break;

	case 'D': cout << "Your grade is an D\n";
		break;

	case 'F': cout << "Your grade is an F\n";
		break;

	default: "Error";

	}
}


//OUTPUT:


/* 

Please enter 5 scores.

Score 1: 90.3

Score 2: 120

Score 3: 78.3

Score 4: 77.9

Score 5: 85.9
Your grade is an A

C:\Users\jjohnson257\source\repos\Lab 1 CS1B\x64\Debug\Lab 1 CS1B.exe (process 25860) exited with code 0 (0x0).
Press any key to close this window . . .



*/
