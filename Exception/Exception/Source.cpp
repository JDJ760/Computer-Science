#include <iostream>
#include <string>


using namespace std;



class Rectangle {
private:
	double width;
	double length;
	
public:
	Rectangle() {

		width = 0.0;
		length = 0.0;
	}

	void setWidth(double w) {
		if (w >= 0) {
			width = w;
		}

		else {
			throw display(12);
		}

	}


	void setLength(double l) {
		if (l >= 0) {
			length = l;
		}

		else {
			throw display(13);
		}
	}


	double getWidth()const {
		return width;
	}

	double getLength()const {
		return length;
	}


	double getArea()const {
		return width * length;
	}


	int display(int e) {
		return e;
	}








};


int main() {
	double length{};
	double width{};

	double area{};

	Rectangle r;

	/*try {
		cout << "Enter the value for length: ";
		cin >> length;

		if (length < 0)
		{
			throw r.display();
		}



		cout << "enter the value for width";
			cin >> width;

		if (width < 0) {
			throw r.display();
		}


		r.setWidth(width);
		r.setLength(length);

		cout << "The Area of the rectangle is: " << r.getArea() << endl << endl;



	}*/

	cout << "Enter the value for length: ";
	cin >> length;


	cout << "enter the value for width";
	cin >> width;

	try {
		r.setLength(length);
		r.setWidth(width);

		cout << "The Area of the rectangle is: " << r.getArea() << endl << endl;
	}

	catch (int e) { cout << "Error Number : " << e << endl; }


	// can you have multiple throws to a single catch0





	return 0;
}

