#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

const int SIZE = 100; //number of capacity

// UNSORTED ORDER DOESNT MATTER SO INSERT GOES TO BACK
class Unsorted {
private:

	int length; //number of varaibles

	int idNumbers[SIZE];


public:
	Unsorted() {
		length = 0;


	}


	~Unsorted() { }




	void insertItem(int id) {
		idNumbers[length] = id;
		length++;

	}

	bool isFull()const { //checks for full array
		return (length == SIZE);
	}


	bool isEmpty()const {
		return (length == 0);

	}


	void deleteItem(int id) {
		int location = 0;

		while (id != idNumbers[location] && location < length) {


			location++;
	
		}


		if (location < length) {
			idNumbers[location] = idNumbers[length - 1];

			length--;

		}

		else {
			cout << "ID wasnt found\n";
		}

	}


	void displayList()const {
		if (length == 0) {
			cout << "List is empty.\n";
			return;
		}
	
		for (int location = 0; location < length; location++)
		{
			cout << idNumbers[location] << endl;
		}
	
	
	
	}


};





void insertItem(Unsorted& list, int id);

void deleteItem(Unsorted& list, int id);







int main() {

	Unsorted list;
	int number{};
	int id{};
	char answer{};


	cout << "Inserting id numbers\n"
		<< "--------------------\n";


	cout << "How many id numbers? ";
	cin >> number;


	if (number > 0) {
		for (int i = 0; i < number; i++) {

			cout << "Enter Id: ";
			cin >> id;

			insertItem(list, id);



		}

	}
	else {
		cout << "Number must be greater than zero\n";
	}





	cout << "-------------Displaying the List -------------\n\n";

	list.displayList();

	cout << "Would you like to delete an ID? ";
	cin >> answer;

	while (toupper(answer) == 'Y') {
		cout << "Please enter id to be deleted: ";
		cin >> id;

		deleteItem(list, id);

		if (list.isEmpty()) {
			break;
		}

		cout << "anymore to delete? : ";
		cin >> answer;


	}


	cout << "\nDisplaying the list after deleting.\n";



	list.displayList();









	return 0;
}








void insertItem(Unsorted& list, int id) {
	if (!list.isFull()) {
		list.insertItem(id);
	}
}

void deleteItem(Unsorted& list, int id) {

	if (!list.isEmpty()) {

		list.deleteItem(id);

	}

	else {
		cout << "The list is empty!\n\n";
	}


}