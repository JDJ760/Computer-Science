#pragma once
#include "Bank.h"

class Savings : public Bank
{
private:
	bool status;

public:
	// Constructors
	Savings();
	Savings(float b, int d, int w, float a, float m);
	~Savings() {}

	// Getters
	bool getStatus()const;

	// Member Functions
	void withdraw();
	void deposit();
	void monthlyProc();
};

