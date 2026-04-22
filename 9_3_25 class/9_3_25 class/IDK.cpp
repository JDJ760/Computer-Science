#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int smallPizzas{};
	int medPizzas{};
	int largePizzas{};
	int totalPizzasSold{};
	double smallPercent{};
	double medPercent{};
	double largePercent{};


	cout << "Enter number of small pizzas sold: ";
	cin >> smallPizzas;

	cout << "Enter number of medium pizzas sold: ";
	cin >> medPizzas;

	cout << "Enter number of large pizzas: ";
	cin >> largePizzas;

	cout << fixed << setprecision(2);

	totalPizzasSold = smallPizzas + medPizzas + largePizzas;

	smallPercent = static_cast<double>(smallPizzas) / totalPizzasSold * 100;
	medPercent = static_cast<double>(medPizzas) / totalPizzasSold * 100;
	largePercent = static_cast<double>(largePizzas) / totalPizzasSold * 100;

	cout << endl << endl;

	system("cls");

	cout << left << setw(45)<< "Total number of Pizzas Sold: " 
		<< right << setw(45) << totalPizzasSold << endl;

	cout << left << setw(45) << "Small Pizzas Sold: %"
		<< right << setw(45) << smallPercent << endl;

	cout << left << setw(45) << "Medium Pizzas Sold: %"
		<< right << setw(45) << medPercent << endl;

	cout << left << setw(45) << "Large Pizzas Sold: %"
		<< right << setw(45) << largePercent << endl;

	return 0;
}