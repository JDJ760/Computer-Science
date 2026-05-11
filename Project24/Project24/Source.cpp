#include "Book.h"

int main() {

	int bookIsbn{};
	string bookTitle{};

	Book* b1 = nullptr;
	Book* b2 = nullptr;

	b1 = new Book();
	b2 = new Book(222, "Harry Marie";



	Book b2(2222, "Harry Potter");
	Book b3 = { 666, "Harry Berry" };

	cout << "\nHere is the data for Book #1\n";
	b1.displayBook();

	cout << "\nHere is the data for Book #2\n";
	b1.displayBook();

	cout << "\nHere is the data for Book #3\n";
	b1.displayBook();


	cout << "Another way to display\n";

	cout << "Isbn: " << b1.getIsbn() << endl;

	cout << "Title:" << b1.getTitle() << endl;

	cout << "Enter the isbn Book1: " << endl;
	cin >> bookIsbn;
	cout << "Enter Title: ";
	cin.ignore();
	getline(cin, bookTitle);

	b1.setIsbn(bookIsbn);
	b1.setTitle(bookTitle);
	cout << "\nHere is the New Data for boook 1\n";
	b1.displayBook();

	cout << endl << endl;

	delete b1;    //De-Allocate your dynamic variables
	delete b2;
	b1 = nullptr;
	b2 = nullptr;


	return 0;
}