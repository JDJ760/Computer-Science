//LAB CODE 2222
//=====================
//Jason Johnson
//=====================
// CLass CS1A 1:30 - 3:50
//======================
// LAB 4
//======================
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num{};

	cout << "Please enter a nummber ";
	cin >> num;

	
	if (num % 2 == 0 && num % 3 == 0)
	{
		cout << "\nThe number is divisable by 3 and a even number";
		
	}

	else if ( num % 2 == 0 && num % 3 != 0)
	{
		cout << "\nThe number is even but not divisable by 3";

	}

	else if (num % 2 != 0 && num % 3 == 0)
	{
		cout << "\nYour number is not even but is divisable by 3.";

	}
	 
	else  if (num % 2 != 0 && num % 3 != 0)
	{
		cout << "\nYour number is neither even or divisible by 3.";

	}

	





	return 0;
}
//OUTPUT:
/*






*/