//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//// funtion Prototypes
//
//char getPatientType();
//double invoice(int days, double rate, double med, double serv);
//double invoice(double med, double serv);
//double getPositiveDouble(string prompt);
//int getPositiveInt(string prompt);
//
//
//
//int main() {
//// variable declaration
//	char patientType{};
//	int days{};
//	double rate{};
//	double med{};
//	double serv{};
//	double totalCharges{};
//
//	// Get and validate patient type
//	patientType = getPatientType();
//
//	// Process in-Patient
//
//	if (patientType == 'I') {
//
//		//Get the cumber of days in the hospital
//		days = getPositiveInt("Please enter number of days in the hospital: ");
//
//		//Get daily room Rate
//		rate = getPositiveDouble("Daily Room Rate: $");
//
//		//Get Medication charges
//		med = getPositiveDouble("medication charges: ");
//
//		// Get Lab fees and other charges
//		serv = getPositiveDouble("Please enter Lab fees and other charges: $");
//
//		//Total Charges calculated
//		totalCharges = invoice( days, rate, med, serv);
//	}
//
//	else {
//
//		med = getPositiveDouble("medication charges: ");
//
//		serv = getPositiveDouble("Please enter Lab fees and other charges: $");
//
//		totalCharges = invoice( med,  serv);
//	}
//
//	//Display final charges with proper formatting
//	cout << fixed << setprecision(2);
//
//	cout << "\n\nThe total charges are $" << totalCharges << endl << endl;
//
//
//	return 0;
//}
//
//
//
//
//char getPatientType() {
//
//	char type{};
//
//	//Get Patient from User
//
//	cout << "Enter 'I' for In patient or 'O' for Out patient";
//	cin >> type;
//
//	//Validate input must be I, i or O, o
//	while (type != 'I' && type != 'i' && type != 'O' && type != 'o')
//	{
//		cout << "Invalid input. Enter I or O only\n"
//			<< "Please Re-Enter: ";
//		cin >> type;
//
//
//
//	}
//	
//	// Uppercase
//	type = toupper(type);
//}
//
//
//
////Invoice
//double Invoice(int days, double rate, double med, double serv) {
//	return (days * rate) + med + serv
//} 
//
//
//
//
//double invoice(double med, double serv) {
//	return med + serv
//}
//
//
//
//
//double getPositiveDouble(string prompt) {
//
//	double value{};
//
//	//get initial input
//	cout << prompt;
//	cin >> value;
//
//	while (value < 0)
//	{
//		cout << "Invalid input, must be positive\n"
//			<< "please re-enter";
//
//		cin >> value;
//
//
//		return value;
//	}
//
//}
//
//
//
//
//int getPositiveInt(string prompt) {
//
//	int value{};
//
//	//get initial input
//	cout << prompt;
//	cin >> value;
//
//	while (value < 0)
//	{
//		cout << "Invalid input, must be positive\n"
//			<< "please re-enter";
//
//		cin >> value;
//
//
//		return value;
//	}
//
//}


#include <iostream>

using namespace std;

void getNumber(int& number);


int main() {
	int numbers{ 14 };

	cout << "The location of numbers is " << &numbers << endl
		<< "The value of numbers is:  " << numbers << endl << endl;

	getNumber(numbers);

	return 0;
}



void getNumber(int& baba) {

	baba = baba + 30;
	cout << "\nThe baba location is "<< &baba << endl << endl;
}