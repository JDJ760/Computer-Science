#include "EmployeeType.h"

class PartTime : public EmployeeType {
private:
	double payRate;
	double hoursWorked;

public:
	PartTime(string first = "", string last = "", long id = 0, double rate = 0.0, double hours = 0.0);
	virtual ~PartTime() {}

	void set(string first, string last, long id, double rate, double hours);

	void setPayRate(double rate);
	void setHoursWorked(double hours);

	double getPayRate()const;
	double getHoursWorked()const;


	double calcPay()const override;
	void print()const override;


};

