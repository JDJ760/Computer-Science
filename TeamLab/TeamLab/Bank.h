#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Bank
{
protected:
	float balance;
	int depositNum;
	int withdrawlNum;
	float annualInterest;
	float monthlyCharges;
	float serviceCharge;

public:
	// Constructors
	Bank();
	Bank(float b, int d, int w, float a, float m);
	~Bank() {};

	// Setters
	void setBalance(float b);
	void setDeposit(int d);
	void setWithdrawl(int w);
	void setInterest(float a);
	void setCharges(float m);

	// Getters
	float getBalance()const;
	int getDeposit()const;
	int getWithdrawl()const;
	float getInterest()const;
	float getCharges()const;

	// Member Functions
	void virtual deposit();
	void virtual withdraw();
	void virtual calcInt();
	void virtual monthlyProc();
	void display();
};

