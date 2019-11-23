#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class PayRoll {
private:
	int employeeNum, payAmount;
	std::string employeeNumberString, firstName, lastName, payRateString, hoursWorkedString, payAmountString;
	float payRate, hoursWorked;

public:
	static int increment(int h);
	static int records;
	int calculatePay()
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
	int setEmployeeNumber(int test)
	{
		employeeNum = test;
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
	std::string setPayAmount(std::string payAmountInput)
	{
		payAmountString = payAmountInput;
		return (payAmountInput);
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
	int getPayAmount()
	{
		return (payAmount);
	}

};
#endif
