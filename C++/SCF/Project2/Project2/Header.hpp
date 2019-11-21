#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
/*
bool is_alphaQ(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}
*/
int employeeNumber()
{
	int employeeNumberR = 0;
	std::string employeeNumberString;
	bool ready = false;
	std::cout << "Employee number?" << std::endl;
	std::cin.ignore();
	getline(std::cin, employeeNumberString);
	// to check if it is a valid entry according to a 6 digit number.
	while (!ready)
	{
		if (isalpha(employeeNumberString[6]) == true || isalpha(employeeNumberString[1]) == true /*|| is_alphaQ(employeeNumberString) == true*/)
		{
			ready = false;
			std::cout << "Enter number with out letters." << std::endl;
			getline(std::cin, employeeNumberString);
		}
		std::stringstream(employeeNumberString) >> employeeNumberR;
		if ((employeeNumberR < 100000 || employeeNumberR > 999999 || employeeNumberString.length() > 6) /*&& is_alphaQ(employeeNumberString) != true*/)
		{
			ready = false;
			std::cout << "Enter number between 10000 and 999999 not " << employeeNumberString << std::endl;
			getline(std::cin, employeeNumberString);
		}

		if ((employeeNumberR > 100000 && employeeNumberR < 999999) && isalpha(employeeNumberString[6]) != true /*&& is_alphaQ(employeeNumberString) != true*/)
		{
			ready = true;
		}
        	
	}
    return (employeeNumberR);
}

class PayRoll{
private:
	int hoursWorked;
	std::string employeeNumberStringQ, firstName, lastName, payRateString, hoursWorkedString, payAmount;
	double payRate;
public:
	PayRoll() {
		employeeNumberStringQ = "";
		hoursWorked = 0;
		firstName = "";
		lastName = "";
		payRateString = "";
		hoursWorkedString = "";
		payAmount = "";
		payRate = 0;
	}
	std::string setEmployeeNumber(std::string h)
	{
		employeeNumberStringQ = h;
		return (h);
	}
	std::string setFirstName(std::string h)
	{
		firstName = h;
		return (h);
	}
	std::string setLastName(std::string h)
	{
		lastName = h;
		return (h);
	}
	std::string setPayRate(std::string h)
	{
		payRateString = h;
		return (h);
	}
	std::string setHoursWorked(std::string h)
	{
		hoursWorkedString = h;
		return (h);
	}
	std::string setPayAmout(std::string h)
	{
		payAmount = h;
		return (h);
	}
	static int increment(int i);
};
#endif
