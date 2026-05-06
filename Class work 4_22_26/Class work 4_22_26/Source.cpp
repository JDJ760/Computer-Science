#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Box {

private:
	string name;
	float height;

public:

	Box(string n, float h) : name(n), height(h) {}
	string getName()const {
		return name;
	}

	float getHeight()const { return height; }

	void display(int index)const {
		cout << "#" << index + 1 << "\n"
			<< "Name: " << name << "\n"
			<< "Height: " << height << "\n\n";
	}

};

class BoxManager {

private:
	vector<Box> boxes;

public:

	void addBox() {
		string name;
		float height;
		char pass;

		cin.ignore();
		cout << "Enter Name: ";
		getline(cin, name);

	


		cout << "Enter Height: ";
		cin >> height;


		cin.ignore();

		Box newBox(name, height);

		if (boxes.empty()) {

			boxes.push_back(newBox);
		}

		else
		{
			cout << "Add to front (F), or back (B): ";
			cin >> pass;

			if (toupper(pass) == 'F') {

				boxes.insert(boxes.begin(), newBox);

			}

			else {

				boxes.push_back(newBox);
			}
		}
		cout << "Boxes Added. Total " << boxes.size() << endl << endl;
	}

	void deleteBox() {
		
		string name;
		
		if (boxes.empty()) {
			cout << "The list is empty\n";
			return;
		}

		cin.ignore();
		cout << "Enter the name of the box to delete: ";
		getline(cin, name);


		for (int i = 0; i < boxes.size(); i++)
		{
			if (boxes[i].getName() == name)
			{
				swap(boxes[i], boxes.back());
				boxes.pop_back();
			
				cout << "The box with name " << name << " was removed.\n\n";

				return;

			}
		}
		cout << "\nBox with the same name " << name << " was not found.\n";
	}

	void displayBoxes()const {

		cout << "\n-----LIST INFO----\n";

		cout << "The size of the list is " << boxes.size() << endl << endl;

		cout << "The capacity of the box is : " << boxes.capacity() << endl << endl;

		cout << "Max Size: " << boxes.max_size() << endl << endl;

		if (boxes.empty()) {
			cout << "No BOXES TO DISPLAY\n";
			return;
		}

		for (int i = 0; i < boxes.size(); i++) {

			boxes[i].display(i);


		}
	}
	void clearAll() {

		cout << "Clearing all boxes...\n";

		while (!boxes.empty()) {
			cout << boxes.back().getName() << " Was removed\n\n";
			boxes.pop_back();
		}
		cout << "The list is now empty!!!!\n";
	}
};


class Menu {
private:
	BoxManager manager;
	

public:

	

	void run() {
		char choice{};

		do {
			cout << "\n==============MENU================\n";
			cout << "A- Add Box\n"
				<< "B - Delete Box.\n"
				<< "C - Display Boxes\n"
				<< "D - Clear All\n"
				<< "Q - Quit.\n"
				<< "Choice? ";


			cin >> choice;

			switch (toupper(choice)) {
			case 'A': manager.addBox(); break;
			case 'B': manager.deleteBox(); break;
			case'C': manager.displayBoxes(); break;
			case'D': manager.clearAll(); break;
			case'Q': cout << "Good Bye!!!  -_- /\n"; break;
			default: cout << "Invalid option/input\n";
			}


		} while (toupper(choice) != 'Q');
	}

};


int main() {

	Menu app;

	app.run();







	return 0;
}