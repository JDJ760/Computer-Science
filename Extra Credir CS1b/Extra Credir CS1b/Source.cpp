//9876
//Caden Fisher & Jason Johnson
//4/15/2026

#include "FeetInches.h"
#include <string>

using namespace std;

void newDis(string s, FeetInches& dis);
void startRun(int i, FeetInches& dis1, FeetInches& dis2);

int main()
{
	FeetInches dis1{};
	FeetInches dis2{};

	// Example 1
	startRun(1, dis1, dis2);

	cout << "You entered:\n"
		<< dis1 << " and " << dis2;

	// Example 2
	startRun(2, dis1, dis2);

	cout << "You entered:\n"
		<< dis1 << " and " << dis2;

	// Example 3
	startRun(3, dis1, dis2);

	dis1 + dis2;
	cout << "Sum:\n" << dis1;

	// Example 4
	startRun(4, dis1, dis2);

	dis1 - dis2;
	cout << "Difference:\n" << dis1;

	//Example 5
	startRun(5, dis1, dis2);

	dis1 - dis2;
	cout << "Difference:\n" << dis1;

	// Example 6
	startRun(6, dis1, dis2);
	cout << "You entered:\n"
		<< dis1 << " and " << dis2;

	// Example 7
	startRun(7, dis1, dis2);
	cout << "You entered:\n"
		<< dis1 << " and " << dis2;
		
	return 0;
}

void newDis(string s, FeetInches& dis)
{
	cout << "Enter " << s << " distance (feet inches): ";
	cin >> dis;
}

void startRun(int i, FeetInches& dis1, FeetInches& dis2)
{
	cout << "\nExample " << i << ":\n";
	newDis("first", dis1);
	newDis("second", dis2);
}