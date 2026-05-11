#include <iostream>
#include <map>
#include <string>

using namespace std;

//// Derived from C language; 
//typedef map<int, pair<string, double>>StudentDB;

using StudentDB = map<int, pair<string, double>>;

void flushInput();
void printMenu();
void addStudent(StudentDB& db);
void deleteStudent(StudentDB& db);
void print(StudentDB& db);



int main() {

	StudentDB db;


	db[1001] = { "Med Mogasemi", 3.99 };

	db[1002] = { "Baba Poor", 1.9 };

	db[1003] = { "Bob Jones", 3.5 };

	int choice{};

	while (true) {
		printMenu();

		cin >> choice;

		if (!cin >> choice) {
			cin.clear();
			flushInput();
			cout << "Please enter a number from the menu: ";
			continue;
		}

		switch (choice) {
		case 1:addStudent(db); break;
		case 2: deleteStudent(db); break;
		case 3: print(db); break;
		case 4: cout << "Goodbye!\n"; return 0;
		default: cout << "Invalid input. Try 1 - 4\n";

		
		}

	}

	


	return 0;
}


void flushInput() {
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	// or cin.ignore(1000, \n)
}

void printMenu() {
	cout << "-------------MENU---------\n";

	cout << "	1. ADD STUDENT\n"
		<< "	2.DELTE STUDENT.\n"
		<< "		3. PRINT STUDENT DATA BASE\n"
		<< "		4.EXIT\n"
		<< "Choose an option: ";


}


void addStudent(StudentDB& db) {
	int id{};
	string name{};
	double gpa{};

	cout << "Enter Student id: ";
	cin >> id;

	cout << "Enter the student name: ";
	cin.ignore(); // or flush input function

	getline(cin, name);

	cout << "Enter Gpa: ";
	cin >> gpa;

	auto [it, insert] = db.insert({ id, {name,gpa} }); // NEW THING FROM C++ 17


	if (insert) {
		cout << "Added id: " << id << ": " << name << "GPA: " << gpa << endl;

		
	}

	else {
		cout << "ID: " << id << "is already in use by: "
			<< it->second.first << " With gpa of: " << it->second.second << "Was not overwritten." << endl << endl;
	}




}




void deleteStudent(StudentDB& db) {
	int id{};

	cout << "Enter the student id to delete: ";
	cin >> id;


	auto it = db.find(id);


	if (it == db.end()) {

		cout << "No Student with that id was found.\n";



	}

	else {
		cout << "Deleted ID: " << id << "With name: " << it->second.first << " and GPA of " << it->second.second << endl;
		db.erase(it);


	}






}



void print(StudentDB& db) {
	if (db.empty()) {
		cout << "THE DATABASE IS EMPTY\n";
		return;
	}


		cout << "\n----------STUDENT DATABASE--------------\n"
			<< "---------Number of Students" << db.size() << "-------------\n";

		for (auto& list : db) {
			cout << "ID: " << list.first << "\tNAme: " << list.second.first << "\tGpa: " << list.second.second << endl;
		}
	
}


