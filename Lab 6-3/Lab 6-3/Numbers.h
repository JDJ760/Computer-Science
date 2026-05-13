
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

//using namespace std;
//
//void printMenu();
//
//
//int add(int num1, int num2);
//
//int subtract(int num1, int num2);
//
//int multiply(int num1, int num2);
//
//double divide(int num1, int num2);
//
//int add(int num1, int num2, int num3);
//
//int main()
//{
//
//	int choice{};
//	int number1{};
//	int number2{};
//	int number3{};
//	
//	printMenu();
//
//	cin >> choice;
//
//	cout << "Please enter the first value: ";
//	cin >> number1;
//
//	cout << "Please enter the second value: ";
//	cin >> number2;
//
//	cout << "Please enter the third value: ";
//	cin >> number3;
//
//	
//
//	switch (choice)
//	{
//	case 1: 
//		cout << "Result: " << add(number1, number2) << endl << endl;
//		break;
//
//	case 2:
//		cout << "Result: " << subtract(number1, number2) << endl << endl;
//		break;
//
//	case 3:
//		cout << "Result: " << multiply(number1, number2) << endl << endl;
//		break;
//
//	case 4:
//		cout << "Result: " << division(number1, number2) << endl << endl;
//		break;
//
//	case 5:
//		cout << "Result: " << add(number1, number2, number3) << endl << endl;
//		break;
//
//	default: cout << "Error";
//		break;
//	}
//
//
//
//
//	return 0;
//}
//
//void printMenu()
//{
//
//	cout << "Please select an operation:\n"
//		<< "1.Add\n"
//		<< "2.Subtract\n"
//		<< "3. Multiply\n"
//		<< "4. divide\n"
//		<< "5. Add three numbers\n\n";
//
//
//}
//
//int add(int num1, int num2)
//{
//
//						/*int addNumbers{};*/
//
//	                   //addNumbers = num1 + num2;
//
//						/*return addNumbers;*/
//
//	return num1 + num2;
//
//
//
//}
//
//int subtract(int num1, int num2)
//{
//	return num1 - num2;
//}
//
//int multiply(int num1, int num2) {
//
//	return num1 * num2;
//}
//
//double divide(int num1, int num2)
//{
//	return static_cast<double>(num1) / num2;
//}
//
//int add(int num1, int num2, int num3) {
//	return num1 + num2 + num3;
//}


using namespace std;

void printMenu();


int add();

int subtract();

int multiply();

double divide();

int add(int);

int main()
{

	int choice{};
	int number1{};
	int number2{};
	int number3{};

	printMenu();

	cin >> choice;

	cout << "Please enter the first value: ";
	cin >> number1;

	cout << "Please enter the second value: ";
	cin >> number2;

	cout << "Please enter the third value: ";
	cin >> number3;



	switch (printMenu(choice))
	{
	case 1:
		cout << "Result: " << add() << endl << endl;
		break;

	case 2:
		cout << "Result: " << subtract() << endl << endl;
		break;

	case 3:
		cout << "Result: " << multiply() << endl << endl;
		break;

	case 4:
		cout << "Result: " << divide) << endl << endl;
		break;

	case 5:
		cout << "Result: " << add() << endl << endl;
		break;

	default: cout << "Error";
		break;
	}




	return 0;
}

void printMenu()
{

	cout << "Please select an operation:\n"
		<< "1.Add\n"
		<< "2.Subtract\n"
		<< "3. Multiply\n"
		<< "4. divide\n"
		<< "5. Add three numbers\n\n";




}

int add(int)
{
	int num1{};
	int num2{};
	/*int addNumbers{};*/

   //addNumbers = num1 + num2;

	/*return addNumbers;*/

	return num1 + num2;



}

int subtract(int)
{
	int num1{};
	int num2{};

	return num1 - num2;
}

int multiply(int) {

	int num1{};
	int num2{};

	cout << "Please enter the first value: ";
	cin >> num1
}

double divide()
{
	int num1{};
	int num2{};

	return static_cast<double>(num1) / num2;
}

int add(int) {
	int num1{};
	int num2{};
	int num3{};

	cout << "num1 : ";
	cin >> num1;


}
