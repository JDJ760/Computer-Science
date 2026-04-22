#include "Student.h"


int main(){
	Student* ptr = new Student;

	cout << "Student 1:\n"
		<< "ID: " << ptr->ID << endl
		<< "Name: " << ptr->name << endl
		<< "GPA: " << ptr->GPA << endl;

	cout << "\n\nGive me ID: ";
	cin >> ptr->ID;


	cin.ignore();


	cout <<
	/*Student student1;

	Student student2 = { 4.0, 1234, "JayJo" };

	Student student3{ 5.0, 123456, "jj" };

	cout << "Student 1:\n"
		<< "ID:" << student1.ID << endl <<
		"name: " << student1.name << endl <<
		"Gpa: " << student1.GPA << endl << endl;

	cout << "Student 2:\n"
		<< "ID:" << student2.ID << endl <<
		"name: " << student2.name << endl <<
		"Gpa: " << student2.GPA << endl << endl;

	cout << "Student 3:\n"
		<< "ID:" << student3.ID << endl <<
		"name: " << student3.name << endl <<
		"Gpa: " << student3.GPA << endl << endl;


	

	cout << "UPDATE STUDENT 1\n\n";

	cout << "Enter GPA:";
	cin >> student1.GPA;

	cout << "Enter ID:";
	cin >> student1.ID;

	cin.ignore();
	
	cout << "Enter name: ";
	getline(cin, student1.name);
	*/

	return 0;
}