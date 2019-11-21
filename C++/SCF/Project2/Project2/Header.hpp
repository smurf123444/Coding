#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class PayRoll{
private:
	int hoursWorked;
	std::string employeeNumberString, firstName, lastName, payRateString, hoursWorkedString, payAmount;
	double payRate;
	
public:
	static int increment();
	static int records;
	int calculatePay()
	{
		return(payRate * hoursWorked);
	}
	PayRoll() {
		employeeNumberString = "";
		hoursWorked = 0;
		firstName = "";
		lastName = "";
		payRateString = "";
		hoursWorkedString = "";
		payAmount = "";
		payRate = 0;
	}
	std::string setEmployeeNumber(std::string employeeNumber)
	{
		employeeNumberString = employeeNumber;
		return (employeeNumber);
	}
	std::string setFirstName(std::string firstNameInput)
	{
		firstName = firstNameInput;
		return (firstNameInput);
	}
	std::string setLastName(std::string lastNameInput)
	{
		lastName = lastNameInput;
		return (lastNameInput);
	}
	std::string setPayRate(std::string payRateInput)
	{
		payRateString = payRateInput;
		return (payRateInput);
	}
	std::string setHoursWorked(std::string hoursWorkedInput)
	{
		hoursWorkedString = hoursWorkedInput;
		return (hoursWorkedInput);
	}
	std::string setPayAmount(std::string payAmountInput)
	{
		payAmount = payAmountInput;
		return (payAmountInput);
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
	void getLastName()
	{
		std::string h;
		std::getline(std::cin, h);
		setLastName(h);
	}
	void getPayRate()
	{
		std::string h;
		std::getline(std::cin, h);
		setPayRate(h);
	}
	void getHoursWorked()
	{
		std::string h;
		std::getline(std::cin, h);
		setHoursWorked(h);
	}
	void getPayAmout()
	{
		std::string h;
		std::getline(std::cin, h);
		setPayAmount(h);
	}
	
};
#endif
