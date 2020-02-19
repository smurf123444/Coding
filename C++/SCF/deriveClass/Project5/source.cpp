#include <iostream>

#include <sstream>
#include "personType.h"
#include "partTimeEmployee.h"

int main() {


	partTimeEmployee obj[3];
	int i = 0;
	double payRate = 0, hoursWorked = 0;
	string first = "", last = "", payRateString = "", hoursWorkedString = "";
	while (i < 3)
	{
		cout << "Enter First Name : " << endl;

		std::getline(cin, first);

		cout << "Enter Last Name : " << endl;

		std::getline(cin, last);

		cout << "Enter Pay rate : " << endl;

		std::getline(cin, payRateString);

		cout << "Enter Hours Worked String : " << endl;
		std::getline(cin, hoursWorkedString);
		obj[i].setName(first, last);
		stringstream(payRateString) >> payRate;
		stringstream(hoursWorkedString) >> hoursWorked;
		obj[i++].setNameRateHours(first, last, payRate, hoursWorked);
	}
	i = 0;
	while (i < 3)
	{
		obj[i++].print();
	}
	return (0);
}