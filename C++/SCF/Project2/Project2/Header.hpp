#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

class PayRoll {
private:
	int employeeNum;
	std::string employeeNumberString, firstName, lastName, payRateString, hoursWorkedString, payAmountString;
	float payRate, payAmount, hoursWorked;

public:
	static int increment();
	static int records;
	float calculatePay()
	{
		return(payRate * hoursWorked);
	}
	PayRoll() {
		employeeNumberString = "";
		hoursWorked = 0.00;
		firstName = "";
		lastName = "";
		payRateString = "";
		hoursWorkedString = "";
		payAmountString = "";
		payRate = 0.00;
	}
	int quickSet(int i)
	{
		return (employeeNum = i);
	}
	std::string setEmployeeNumber()
	{
		std::string test;
		std::cin >> test;
		std::stringstream(test) >> employeeNum;
		return (test);
	}
	std::string setFirstName()
	{
		std::cin >> firstName;

		return (firstName);
	}
	std::string setLastName()
	{
		std::cin >> lastName;

		return (lastName);
	}
	std::string setPayRate(std::string r)
	{
		std::stringstream(r) >> payRate;
		return (r);
	}
	std::string setHoursWorked(std::string hoursWorkedInput)
	{
		std::stringstream(hoursWorkedInput) >> hoursWorked;
		return (hoursWorkedInput);
	}
	std::string setPayAmount()
	{
		float payAmountInput = calculatePay();
		payAmountString = std::to_string(payAmountInput);

		payAmount = payAmountInput;
		return (payAmountString);
	}
	int getEmployeeNumber()
	{
		return(employeeNum);
	}
	std::string getFirstName()
	{
		return (firstName);
	}
	std::string getLastName()
	{
		return (lastName);
	}
	float getPayRate()
	{
		return (payRate);
	}
	float getHoursWorked()
	{
		return (hoursWorked);
	}
	float getPayAmount()
	{
		return (payAmount);
	}

};
#endif
