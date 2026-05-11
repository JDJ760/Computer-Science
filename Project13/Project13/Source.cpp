// LAB CODE: 09876
//==================
//Jason Johnson
//CS1A 1:30 - 3:50
//Med Mogasemi
// 11/12/25
//===================


#include <iostream>
#include <iomanip>

using namespace std;

void getScore(double& score1, double& score2, double& score3, double& score4, double& score5);
double calcAverage(double score1, double score2, double score3, double score4, double score5);
char determineGrade(double avg);
void displayGrade(char grade);
 
int main() {
	double score1{};
	double score2{};
	double score3{};
	double score4{};
	double score5{};
	double avg{};
	char grade{};
	
	getScore(score1, score2, score3, score4, score5);

	avg = calcAverage(score1, score2, score3, score4, score5);

	grade = determineGrade(avg);

	displayGrade(grade);


	return 0;
	
}



void getScore(double& score1, double& score2, double& score3,
	double& score4, double& score5) {

	cout << "Please enter 5 scores: \n\n";

	cout << "Score 1: ";
	cin >> score1;

	cout << "Score 2: ";
	cin >> score2;

	cout << "Score 3: ";
	cin >> score3;

	cout << "Score 4: ";
	cin >> score4;

	cout << "Score 5: ";
	cin >> score5;

	cout << endl;

	while (score1 < 0 || score1 > 100 || score2 < 0 || score2 > 100
		|| score3 < 0 || score3 > 100 || score4 < 0 || score4 > 100
		|| score5 < 0 || score5 > 100) 
	{
		cout << "INVALID DATA. Please enter a score larger"
			<< " than 0 and not greater than 100\n\n";

		cout << "Please enter 5 scores: \n\n";

		cout << "Score 1: ";
		cin >> score1;

		cout << "Score 2: ";
		cin >> score2;

		cout << "Score 3: ";
		cin >> score3;

		cout << "Score 4: ";
		cin >> score4;

		cout << "Score 5: ";
		cin >> score5;

	}

}





double calcAverage(double score1, double score2, double score3, double score4, double score5) {
	return (score1 + score2 + score3 + score4 + score5) / 5;
}




char determineGrade(double avg) {

	if (avg > 90) {
		return 'A';
	}
	else if (avg > 80) {
		return 'B';
	}
	else if (avg > 70) {
		return 'C';
	}
	else if (avg > 60) {
		return 'D';
	}
	else 
		return 'F';
	
}



void displayGrade(char grade) {
	cout << "Your Grade is: " << grade;
	cout << endl;
}





//================================
// Sample Output:
/*

Please enter 5 scores:

Score 1: 90
Score 2: 80
Score 3: 77
Score 4: 85
Score 5: 72

Your Grade is: B

C:\Users\jjohnson257\source\repos\Project13\x64\Debug\
Project13.exe (process 22224) exited with code 0 (0x0).
Press any key to close this window . . .


or


Please enter 5 scores:

Score 1: 0
Score 2: 0
Score 3: 0
Score 4: 0
Score 5: 200

INVALID DATA. Please enter a score larger than 0 and not greater than 100

Please enter 5 scores:

Score 1: 20
Score 2: 30
Score 3: 40
Score 4: 50
Score 5: 60
Your Grade is: F

C:\Users\jjohnson257\source\repos\Project13\x64\Debug\Project13.exe (process 12188) exited with code 0 (0x0).
Press any key to close this window . . .




*/