

#include <string>
#include "extPersonType.h"

void extPersonType::setClassification(int input) {
	association = input;
}
void extPersonType::setPhoneNumber(int input) {
	phoneNumber = input;
}
int extPersonType::getPhoneNumber() {
	return (phoneNumber);
}
int extPersonType::getClassification() {
	return (association);
}