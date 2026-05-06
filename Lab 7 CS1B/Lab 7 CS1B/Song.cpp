#include "Song.h"

Song::Song() {
	artist = " ";
	title = " ";

}

Song::Song(string a, string t) {
	artist = a;
	title = t;

}

Song::~Song() {}

void Song::setArtist(string a) {
	artist = a;
}


void Song::setTitle(string t) {
	title = t;
}

void Song::displaySong()const {
	cout << "Song Title\t" << title << endl;
	cout << "Song Artist\t" << artist << endl;
}

