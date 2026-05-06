#include "Book.h"

using namespace std;



void comparePrices(const Book& b1, const Book& b2) {

	if (b1.cost > b2.cost) {

		cout << "Book1 is more expensive than book2.\n";
	}

	else if (b1.cost < b2.cost) {

		cout << "Book2 is more expensive\n";
	}

	else if (b1.cost == b2.cost)
		cout << "The Prices are the same\n";




}




int main() {
	//const Book book1((string&)"The Great Med", 999.99);

	string name = "The Great Med";

	const Book book1(name, 999.99);
	Book book2("The catcher in the bar", 12.99);
	Book book3("To kill a MockingMed", 97.67);

	book1.printBook();
	cout << endl;

	book2.printBook();
	cout << endl;

	book3.printBook();
	cout << endl;


	cout << "They are " << Book::getCount() << "Books \n\n";


	comparePrices(book1, book2);

	if (book1 > book2) {
		cout << "Book 1 is more expensive.\n";
	}

	else
		cout << "Book 2 is more expensive.\n";



	if (book2 > 2000) {
		cout << "Book 2 is more than 2000$\n";
	}
	else
		cout << "Book 2 is less than 2000\n";

	double avg{};

	avg = (book1 + book2) / 2.0;

	cout << "The average price is $" << avg << endl;


	cout << "==================";

	cout << "Printing Books using << operator.\n";

	cout << "Book1:\n" << book1 << "Book2:\n" << book2
		<< "Book3:\n" << book3 << endl;



	return 0;
}



