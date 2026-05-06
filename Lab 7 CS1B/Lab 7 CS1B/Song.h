#pragma once
#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
	string title;
	string artist;

public:
	Song();
	Song(string t, string a);
	~Song();
	void setTitle(string t);
	void setArtist(string a);
	void displaySong()const;

};

