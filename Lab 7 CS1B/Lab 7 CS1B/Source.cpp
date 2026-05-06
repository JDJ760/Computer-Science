// LAB CODE: HI :)
// JASON JOHNSON
// 4/6/26

#include "Song.h"

int main() {
	string artist{};
	string title{};
	Song yourSong;
	Song anotherSong("All of Me", "Billie Holiday");

	cout << "Original yourSong:\n";
	yourSong.displaySong();

	cout << "\nOriginal another Song:\n";
	anotherSong.displaySong();

	cout << "\nChange yourSong (Title and Artist)\n";

	cout << "Artist: ";
	getline(cin, artist);

	yourSong.setArtist(artist);

	cout << "Title: ";
	getline(cin, title);

	yourSong.setTitle(title);


	cout << "\n\nNew yourSong:\n";
	yourSong.displaySong();

	return 0;
}


/*

OUTPUT:

Original yourSong:
Song Title
Song Artist

Original another Song:
Song Title      Billie Holiday
Song Artist     All of Me

Change yourSong (Title and Artist)
Artist: me
Title: compsi


New yourSong:
Song Title      compsi
Song Artist     me

C:\Users\jjohnson257\source\repos\Lab 7 CS1B\x64\Debug\Lab 7 CS1B.exe (process 37800) exited with code 0 (0x0).
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/