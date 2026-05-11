//LAB CODE 1111
//JASON JOHNSON
//CS1B
//2/9/26
#include "header.h"

void getData(movieData&, movieData&);

int main() {

	movieData movie1{};
	movieData movie2{};

	getData(movie1, movie2);
	
	return 0;
}




void getData(movieData& movie1, movieData& movie2) {

	cout << "Enter Movie Data\n\n";

	cout << "Title: ";
	getline(cin, movie1.title);
	
	cout << endl << endl;
	
	cout << "Director: ";
	getline(cin, movie1.director);
	
	cout << endl << endl;
	
	cout << "Released: ";
	cin >> movie1.released;

	cout << endl << endl;

	cout << "Running Time: ";
	cin >> movie1.time;

	cout << endl << endl << endl << endl;

	cin.ignore();

	cout << "Enter Movie Data for second movie\n\n";

	cout << "Title: ";
	getline(cin, movie2.title);

	cout << endl << endl;

	cout << "Director: ";
	getline(cin, movie2.director);

	cout << endl << endl;

	cout << "Released: ";
	cin >> movie2.released;

	cout << endl << endl;

	cout << "Running Time: ";
	cin >> movie2.time;

	cout << endl << endl << endl << endl;

	cout << "Movie 1\n\n";
	cout << "Title: " << movie1.title << endl;
	cout << "Director: " << movie1.director << endl;
	cout << "Released: " << movie1.released << endl;
	cout << "Running Time: " << movie1.time << endl;


	cout << "\n\nMovie 2\n\n";
	cout << "Title: "  << movie2.title << endl;
	cout << "Director: "  << movie2.director << endl;
	cout << "Released: "  << movie2.released << endl;
	cout << "Running Time: "  << movie2.time << endl;
}




/*OUTPUT

Title: bob


Director: fo


Released: 1890


Running Time: 299




Enter Movie Data for second movie

Title: bobob


Director: me


Released: 1800


Running Time: 200




Movie 1

Title: bob
Director: fo
Released: 1890
Running Time: 299


Movie 2

Title: bobob
Director: me
Released: 1800
Running Time: 200

C:\Users\jjohnson257\source\repos\Project20\x64\Debug\
Project20.exe (process 8172) exited with code 0 (0x0).
Press any key to close this window . . .

*/