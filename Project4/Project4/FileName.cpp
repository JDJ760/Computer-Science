//LAB CODE 010203



#include <iostream>

using namespace std;

int main()
{
	int length1{};
	int length2{};
	int width1{};
	int width2{};
	int area1{};
	int area2{};


	cout << "Enter the length of the first rectangle: ";
	cin >> length1;

	cout << "Enter the Width of the first rectangle: ";
	cin >> width1;

	cout << "Enter the length of the second rectangle: ";
	cin >> length2;

	cout << "Enter the Width of the second rectangle: ";
	cin >> width2;



	area1 = length1 * width1;
	area2 = length2 * width2;

	if (length1 <= 0 || width1 <= 0 || length2 < 0 || width2 < 0)
	{
		cout << "Invalid input. please enter a length and width greater than zero";
		return 1;
	}

	else if (area1 > area2)
	{
		cout << " The first rectangle is larger than the second rectangle.\n";

	}

	else if (area1 < area2)
	{
		"The second rectangle is larger than the first rectangle.\n";

	}

	else if (area1 == area2)
	{
		"The areas are equal.\n";


	}
	return 0;
}