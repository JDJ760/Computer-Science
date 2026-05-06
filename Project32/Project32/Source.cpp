#include <iostream>
#include <string>

using namespace std;

const int SIZE = 100;


class Sorted {
	int length = 0;
	string name[SIZE];

public:

	Sorted() { length = 0; }
	~Sorted() {};

	void insertItem(string item) {
		int location = 0;


		location = binarySearch(item);
		// Starts at bottom and goes up
		for (int i = length; i > location; i--) {
			name[i] = name[i - 1];
		}

		//Inserting
		name[location] = item;
		length++;

	}

	int binarySearch(string item) {

		int first = 0;
		int last = length - 1;
		int midpoint = 0;

		while (true) {

			if (first > last) {

				return first;
			}


			midpoint = (first + last) / 2;

			if (item == name[midpoint]) {

				return midpoint;
			}

			else if (item > name[midpoint]) {

				first = midpoint + 1;



			}

			else {
				//item < name[midpoint];

				last = midpoint - 1;

			}






		}




	}


	bool isFull() {
		return length == 0;
	}



	void deleteItem(string item) {
		int location = 0;

		location = linearSearch(item);



		if (location < length && name[location] == item) {
			
			
			
			for (int i = location + 1; i < length; i++) {
					name[i - 1] = name[i];

					}
			length--;

		}

		else {
			cout << "The item was not found in the list\n\n";
		}

	}


	int linearSearch(string item) {
		int location = 0;

		while (location < length && (item > name[location])) {
			location++;
		}

		return location;

	}



};

int main() {
	



	return 0;
}