#include "Fantasy.h"
#include "Fiction.h"

int main() {



	/*Fiction f1("Mystery", "Murder in CS 1B", 15);
	Fantasy fa("Med", "He Won the Lotto", 30);*/

	Book* ptr = nullptr;
	ptr = new Fiction ("Mystery", "Murder in CS 1B", 15);

	cout << "using base pointer -> Fiction object\n";
	ptr->showBook();

	cout << "\n\n";

	delete ptr;

	cout << " ------------\n";

	ptr = new Fantasy ("Med", "He Won the Lotto", 30);

	cout << "Using base pointer -> Fantasy object\n";

	ptr->showBook();

	cout << endl << endl;

	delete ptr;


	return 0;
}