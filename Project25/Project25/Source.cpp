#include "NumberArray.h"


int main() {
	int count{};

	cout << "How many numbers do you want to save?\n";
	cin >> count;


	NumberArray numbers(count);

	for (int i = 0; i < numbers.getSize(); i++) {

		double value{};

		cout << "Enter a number: " << (i + 1) << ": ";
		cin >> value;

		numbers.setCell(i, value);
	}

	cout << "\nValues from the Array\n\n";

		for (int i = 0; i < numbers.getSize(); i++) {
			cout << "Number: " << (i + 1) << ": " << numbers.getCell(i);
		}

	cout << "\nThe Average is: " << numbers.getAverage() << endl;

	cout << "The lowest value is: " << numbers.getLowest() << endl << endl;

	cout << "The highest value is: " << numbers.getHighest() << endl;

	return 0;
}