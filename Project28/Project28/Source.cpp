#include "PartTime.h"
#include "FullTime.h"

int main() {
	FullTime full("Jeff", "Barnett", 0000, 196300.21, 57896.32);
	PartTime part("Med", "Mogasemi", 9999, 16.99, 90);

	//Direct calls

	full.print();
	cout << endl;

	part.print();
	cout << endl;


	// Polymorohic calls;

	cout << "-----------------PolyMorphisim ------------\n";

	EmployeeType* emp1 = &full;
	EmployeeType* emp2 = &part;

	emp1->print();
	cout << endl;

	emp2->print();
	cout << endl;




	return 0;
}