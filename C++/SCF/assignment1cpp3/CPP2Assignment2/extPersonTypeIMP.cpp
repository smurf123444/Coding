

#include <string>
#include <sstream>
#include "extPersonType.h"

void extPersonType::setClassification(int input) {
	association = input;
}
void extPersonType::setPhoneNumber(string input) {
	phoneNumber = input;
}
string extPersonType::getPhoneNumber() {
	return(phoneNumber);
}
int extPersonType::getClassification() {
	return (association);
}