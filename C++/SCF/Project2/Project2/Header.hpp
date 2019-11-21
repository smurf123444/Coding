#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class PayRoll{
private:
	int hoursWorked;
	std::string employeeNumberStringQ, firstName, lastName, payRateString, hoursWorkedString, payAmount;
	double payRate;
public:
	static int Number;
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
	std::string setPayAmount(std::string h)
	{
		payAmount = h;
		return (h);
	}
	void getEmployeeNumber()
	{
		std::string h;
		std::getline(std::cin, h);
		setEmployeeNumber(h);
	}
	void getFirstName()
	{
		std::string h;
		std::getline(std::cin, h);
		setFirstName(h);
	}
	void getLastName(std::string h)
	{
		std::string h;
		std::getline(std::cin, h);
		setLastName(h);
	}
	void getPayRate(std::string h)
	{
		std::string h;
		std::getline(std::cin, h);
		setPayRate(h);
	}
	void getHoursWorked(std::string h)
	{
		std::string h;
		std::getline(std::cin, h);
		setHoursWorked(h);
	}
	void getPayAmout(std::string h)
	{
		std::string h;
		std::getline(std::cin, h);
		setPayAmount(h);
	}
	static int increment(int i);
};
#endif
