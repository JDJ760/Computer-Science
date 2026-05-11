// Lab 0001
//Jason Johnson
//CS1A
// 1:30-3:50
// Instructor: Med Mogasemi
// 11/5/25
// 
//
//
//


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

float getWholesalePrice();
float getMarkup();
float calculateRetail(float wholesale, float markup);
void displayInfo(float wholesale, float markup, float retail);


int main() {
	float wholesale{};
	float markup{};
	float retail{};

	wholesale = getWholesalePrice();

	markup = getMarkup();

	retail = calculateRetail(wholesale, markup);

	displayInfo(wholesale, markup, retail);

	return 0;
}



float getWholesalePrice() {
	float wholesale{};

	cout << "Enter wholesale price: ";
	cin >> wholesale;

	if (wholesale < 0) {
		cout << "Invalid number, please enter a positive value" << endl;

		cout << "Try Again: ";
		cin >> wholesale;
	}

	return wholesale;
}



float getMarkup() {
	float markup{};

	cout << "Enter Markup: ";
	cin >> markup;

	if (markup < 0) {
		cout << "Invalid number, please enter a positive value" << endl;

		cout << "Try Again: ";
		cin >> markup;
	}

	return markup;

}



float calculateRetail(float wholesale, float markup) {
	 wholesale += wholesale * (markup / 100);
	 return wholesale;
}



void displayInfo(float wholesale, float markup, float retail) {
	cout << "The items wholesale cost is: " << wholesale << endl
		<< "The Markup is: %" << markup << endl
		<< "The retail Price is: " << retail << endl;

}


//Output:
/*






*/


