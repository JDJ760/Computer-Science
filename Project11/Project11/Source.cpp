/*
Jason Johnson
CS1A 1;30 - 3:50
11/3/25
LAB 7_1
*/
//LAB CODE 0000

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);



int main() {

	double length{};
	double width{};
	double area{};

	length = getLength();

	width = getWidth();

	area = getArea(length, width);

	displayData(length, width, area);


	return 0;
}




double getLength() {
	double length{};

	cout << "Please Enter the Length:";
	cin >> length;

	while (length <= 0) {
		cout << "Please re-enter a value larger than 0: ";
		cin >> length;
	}
	return length;
}




double getWidth() {
	double width{};
	cout << "Enter a value for the Width: ";
	cin >> width;

	while (width <= 0) {
		cout << "Please re-enter a value larger than 0: ";
		cin >> width;
	}
	return width;
}




double getArea(double length, double width) {
	return length * width;
}



void displayData(double length, double width, double area){
	cout << fixed << setprecision(2);

	cout << endl << "Rectangle Data" << endl << "---------------------";

	cout << endl << endl;

	cout << "The Length of the rectangle is: " << length << endl;

	cout << "The width of the rectangle is: " << width << endl;

	cout << "The Area of the rectangle is " << area << endl;
}

/* OUtPUT
* Please Enter the Length:5
Enter a value for the Width: 5

Rectangle Data
---------------------

The Length of the rectangle is: 5.00
The width of the rectangle is: 5.00
The Area of the rectangle is 25.00

C:\Users\jjohnson257\source\repos\Project11\x64\Debug\
Project11.exe (process 11428) exited with code 0 (0x0).
Press any key to close this window . . .

*/
