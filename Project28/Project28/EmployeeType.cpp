#include "EmployeeType.h"

EmployeeType::EmployeeType(string first, string last, long id) : PersonType(first, last) {

	personId = id;
}


void EmployeeType::setId(long id) {
	personId = id;
}

long EmployeeType::getId()const {
	return personId;
}