#pragma once
#include "Bank.h"

class Checking : public Bank
{
public:
	// Constructors
	Checking();
	Checking(float b, int d, int w, float a, float m);
	~Checking() {}

	// Member Functions
	void withdraw();
	void monthlyProc();
};

