#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const double PAY_RATE = 22.55; //Hourly Pay Rate in Dollars
const double BASE_HOURS = 40.0; // Maximum Overt time hours per week
const double OT_MULTIPLIER = 1.5; // Overtime pay multiplier

// Function Prototypes
double getBasePay(double hours);
double getOvertimePay(double hours);
void showPay(double basePay, double overtimePay, double totalPay);
double getPositiveHours();




int main() {
	//Variable Declaration
	double hours{}; //hours worked by employee
	double basePay{};// minimum pay for the regular hours worked
	double overtime{}; //Pay for hours worked in overtime (40+)
	double totalPay{}; // Total gross pay

	// Get the number of hours worked
	hours = getPositiveHours();

	// Calculate the amount of base pay
	basePay = getBasePay(hours);

	// Calculate overtime pay if any
	overtime = getOvertimePay(hours);

	//Calculate total gross pay
	totalPay = basePay + overtime;

	//Display All pay information
	showPay(basePay, overtime, totalPay);

	return 0;

}


// ==== getPositiveHours ===================================================================
//Gets and validates hours worked from the user
// 
// Prompts the user to enter hours worked and validates that the user
// ============================================================================
double getPositiveHours() {
	double hours{};

	//Get hours worked from the user
	cout << "Please enter hours worked: ";
	cin >> hours;

	// Validate input (hours cannot be negative)
	while (hours < 0) {
		cout << "hours cannot be negative\n"
			<< "Please re enter: ";
		cin >> hours;
	}
	return hours;
}

// ==== getBasePay ===================================================================
//Calculates pay for regular hours worked
// 
// computes pay for regular hours (non-overtime) if hours exceed Base hours 40 only the first 40 hours count as base pay.
// otherwise all hours count as base pay
// 
// input
// 
// output
// ============================================================================

//double hoursWorked = hours
double getBasePay(double hoursWorked) {

	double basePay{};

	// if worked more than 40 hours (the base hours) cap basepay at 40 hours
	if (hoursWorked > BASE_HOURS)
	{
		basePay = BASE_HOURS * PAY_RATE;

	}

	else {
		// All hours are regular hours
		basePay = hoursWorked * PAY_RATE;
	}

	return basePay;
}



// ==== overtimePay ===================================================================
//calculates overtime pay for hours beyond BASE_HOURS
// 
// ============================================================================
double getOvertimePay(double hoursWorked) {

	double overtimePay{};

	//Calculates overtime pay only if hours exceed 40 hours
	if (hoursWorked > BASE_HOURS) {

		/*overtimePay = (hours over 40) X hourly rate X 1.5*/
		overtimePay = hoursWorked * PAY_RATE * OT_MULTIPLIER;
	}

	else {
		//no overtime pay
		overtimePay = 0.0;
	}
	
	return overtimePay;

}



// ==== showPay ===================================================================
// Displays formatted pay information
// shows base pay , overtime pay, and total pay with proper currency
// formatting (2 decimal places) This is a void function.
// 
// Input
// 
// Output
// ============================================================================
void showPay(double basePay, double overtimePay, double totalPay) {
// setup numeric output formatting for the currency
	cout << fixed << setprecision(2);

	// Display the pay breakdown
	cout << "\n Base Pay: $" << basePay << endl
		<< "Overtime Pay: $" << overtimePay << endl
		<< "Total Pay : $" << totalPay << endl << endl;

}