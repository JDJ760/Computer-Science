#include "PersonType.h"

PersonType::PersonType(string first, string last) {

	firstName = first;
	lastName = last;

}


void PersonType::setName(string first, string last) {
	firstName = first;
	lastName = last;
}

void PersonType::setFirstName(string first) {
	firstName = first;
}

void PersonType::setLastName(string last) {
	lastName = last;
}

string PersonType::getFirstName()const {
	return firstName;
}

string PersonType::getLastName()const {
	return lastName;
}
