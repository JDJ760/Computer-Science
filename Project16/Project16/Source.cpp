// JASON JOHNSON
// CS1A 1;30 - 3;50
//LAB CODE 1040
// LAB 8-2

#include <iostream>


using namespace std;

int const SIZE{ 100 };

void swapFrontBack(int arr[], int size);

int main() {

	int arr[SIZE]{0};

	int size{};

	cout << "How many Elements: ";
	cin >> size;

	while (size <= 0) {
		cout << " Invalid Input pick a size greater than 0" << endl << endl;

		cout << "How many Elements: ";
		cin >> size;
	}

	

	
			cout << "Pick numbers Greater than zero" << endl << endl;

			for (int i = 0; i < size; i++) {
				cout << "Enter # " << i + 1 << ": ";
				cin >> arr[i];


				while (arr[i] <= 0) {

					cout << "INVALID DATA";

					cout << "Enter # " << i + 1 << ": ";
					cin >> arr[i];
				}
			}
		

	

	swapFrontBack(arr, size);


	return 0;
}




void swapFrontBack(int arr[], int size) {
	int newArr[SIZE]{0};

	for (int i = 1; i <= size; i++)
	{
		newArr[i] = arr[size - i];
	}
	
	cout << "Reversed #'s \n\n";

	for (int i = 1; i <= size; i++) {
		cout << newArr[i] << endl;
	}

}




///OUTPUT
/*
How many Elements: 3
Pick numbers Greater than zero

Enter # 1: 1
Enter # 2: 2
Enter # 3: 3
Reversed #'s

3
2
1

C:\Users\jjohnson257\source\repos\Project16\x64\Debug\
Project16.exe (process 6464) exited with code 0 (0x0).
Press any key to close this window . . .
*/