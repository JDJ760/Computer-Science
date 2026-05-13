//Lab code 1040
//Jason Johnson
// CS1A
// 1;30 - 3;50

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int iD{};
	string fullName{};
	int age{};
	string college{};

	ifstream inFile;

	inFile.open("Text.txt");

	


	inFile >> iD;
	inFile.ignore();
	getline(inFile,fullName);
	inFile >> age;
	inFile.ignore();
	getline(inFile, college);



	inFile.close();

	cout << "My student Id is ID# " << iD << "\n" 
		<< "My full name is: " << fullName
		<< "\n" << "Im " << age << " years old." 
		<< endl << "The name of my college is " 
		<< college << endl;


	




	return 0;
}
//OUTPUT:
//My student Id is ID# 9654321
//My full name is : Jason Johnson
//Im 24 years old.
//The name of my college is Saddleback College
//
//C : \Users\jjohnson257\source\repos\Project8\x64\Debug\Project8.exe(process 25524) exited with code 0 (0x0).
//Press any key to close this window . . .
