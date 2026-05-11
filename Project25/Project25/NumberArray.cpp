#include "NumberArray.h"

using namespace std;

NumberArray::NumberArray(int s) {
	if (s <= 0) {
		cout << "Error, size must be greater than zero.\n\n";
		exit(EXIT_FAILURE);
}
	size = s;

	data = new double[size]();

}




NumberArray::~NumberArray() {

	delete[] data;
	data = nullptr;
}




void NumberArray::setCell(int index, double value) {

	if (index < 0 || index >= size) {

		cout << "Error: invalid index number\n";
		exit(EXIT_FAILURE);
	}

	data[index] = value;

}



double NumberArray::getCell(int index)const {
	if (index < 0 || index >= size) {

		cout << "Error: invalid index number\n";
		exit(EXIT_FAILURE);
	}

	return data[index];
}




double NumberArray::getAverage()const {
	double total{};

	for (int i = 0; i < size; i++) {
		total += data[i];

	}
	return total / size;
}





double NumberArray::getHighest()const {
	double highest = data[0];

	for (int i = 0; i < size; i++) {
		if (data[i] > highest) {
			highest = data[i];

		}
	}
	return highest;

}




double NumberArray::getLowest()const {
	double lowest = data[0];

	for (int i = 0; i < size; i++) {
		if (data[i] > lowest) {
			lowest = data[i];

		}
	}

	return lowest;

}



int NumberArray::getSize()const {
	return size;
}