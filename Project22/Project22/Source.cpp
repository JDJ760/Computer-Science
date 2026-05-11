//Lab Code:5555 
//Jason Johnson


#include <iostream>
#include <iomanip>
#include <string> 
#include <fstream>


using namespace std;

const int SIZE = 31;
const int RECORDS = 3;

struct Students {
	char name[SIZE];
	int id;
	double gpa;
};


int main() {
	
	Students student = { " ", 0, 0.0 };

	fstream data("Data.bin", ios::out | ios::binary);

	cout << "Writing to the file\n";

	for (int i = 0; i < RECORDS; i++) {
		cout << "\nEnter Information for student " << i + 1 << endl;

		

		cout << "Name: ";
		cin.getline(student.name, SIZE);

		

		cout << "ID: ";
		cin >> student.id;

		

		cout << "GPA: ";
		cin >> student.gpa;
		
		cin.ignore();

		data.write((char*)(&student), sizeof(student));

		
	}
	data.close();

	cout << "\nThe size of each student is " << sizeof(student) << endl << endl;
	

	fstream data1("Data.bin", ios::in | ios::binary);

	cout << "\nHere are the data for all the students\n";


	data.read((char*)(&student), sizeof(student));


	while (!data.eof()) {
		cout << "\nStudent Name: ";
		cout << student.name << endl;

		cout << "\nID: ";
		cout << student.id << endl;

		cout << "\nGPA: ";
		cout <<student.gpa << endl;

		cout << "==========\n";

		data.read((char*)(&student), sizeof(student));


	}
	cout << endl << endl;

	data1.close();

	int recordNumber{};

	

	fstream file("Data.bin", ios::in | ios::out | ios::binary);

	cout << "Which student record would you like to edit";

	cin >> recordNumber;
	recordNumber += -1;

	file.seekg(recordNumber * sizeof(student), ios::beg);

	file.read((char*)(&student), sizeof(student));

	cout << endl;

	cout << "Here is the data for student #" << recordNumber + 1<< "before editing:\n";

	cout << "\nStudent Name: ";
	cout << student.name << endl;

	cout << "\nID: ";
	cout << student.id << endl;

	cout << "\nGPA: ";
	cout << student.gpa << endl;

	cout << "==========\n";

	cout << "\nEnter the students # " << recordNumber << " new Data\n";


	cout << "\nStudent Name: ";
	cin >> student.name;

	cout << "\nID: ";
	cin >> student.id;

	cout << "\nGPA: ";
	cin >> student.gpa;

	cout << "==========\n";


	file.seekp(recordNumber * sizeof(student), ios::beg);
	
	file.write((char*)(&student), sizeof(student));

	file.close();

	fstream file1("Data.bin", ios::in | ios::out | ios::binary);

	cout << "\nHere are the new data for all the students.\n";

	file1.read((char*)(&student), sizeof(student));


	while (!file1.eof()) {
		cout << "\nStudent Name: ";
		cout << student.name << endl;

		cout << "\nID: ";
		cout << student.id << endl;

		cout << "\nGPA: ";
		cout << student.gpa << endl;

		cout << "==========\n";

		file1.read((char*)(&student), sizeof(student));


	}
	cout << endl << endl;

	file1.close();

	

	fstream file2;
	
	Students s2 = { " ", 0, 0.0 };
	Students s3 = { " ", 0, 0.0 };

	cout << "Before the swap:\n";
	

	file2.open("Data.bin", ios::in | ios::out | ios::binary);

	file2.seekg(1 * sizeof(student) | ios::beg);

	file2.read((char*)&student, sizeof(student));

	file2.seekg(2 * sizeof(student) | ios::beg);

	file2.read((char*)&student, sizeof(student));

	file2.seekp(2 * sizeof(student), ios::beg);
	file2.write((char*)&s2, sizeof(student));

	file2.seekp(1 * sizeof(student), ios::beg);
	file2.write((char*)&s3, sizeof(student));

	file2.close();


	cout << "After Swap Student 2";

	while (!file2.eof()) {
		cout << "\nStudent Name: ";
		cout << s2.name << endl;

		cout << "\nID: ";
		cout << s2.id << endl;

		cout << "\nGPA: ";
		cout << s2.gpa << endl;

		cout << "==========\n";

		file2.read((char*)(&s2), sizeof(student));


	}


	cout << "After Swap Student 3";

	while (!file2.eof()) {
		cout << "\nStudent Name: ";
		cout << s3.name << endl;

		cout << "\nID: ";
		cout << s3.id << endl;

		cout << "\nGPA: ";
		cout << s3.gpa << endl;

		cout << "==========\n";

		file2.read((char*)(&s2), sizeof(student));


	}
} 

// NOT FINISHED WILL STUDY THIS MORE :(
