#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string fullName{};
	string middleName = " ";
	int age = 0;
	string school{};

	cout << "enter your full name: ";
	getline(cin, fullName);


	cout << "enter your age: ";
	cin >> age;

	cin.ignore();

	cout << "Please enter name of your School: ";
	getline(cin, school);;

	cout << "\n\nYour full name is "
		<< fullName<< " your school is: " << school << " and your age is: "
		<< age << " years old." << endl << endl;

	return 0;
}