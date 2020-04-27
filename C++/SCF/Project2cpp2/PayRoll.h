#pragma once
#include <iostream>
#include <sstream>
#include "binarySearchTree.h"
#include <string>

class PayRoll {
	//A method to calculate the pay amount. This should be calculated by multiplying
	//the hours worked by the pay rate

	//Create a declaration for a class named Payroll. The Payroll class should include the
		//following: (6 pts)
//Data members:

//	EmployeeNumber
	int employeeNum;
	std::string employeeNumString;
	//	LastName
	std::string lastName;
	//	FirstName
	std::string firstName;
	//	Department Number
	int departmentNum;
	std::string departmentString;
	//	Pay Rate
	double payRateNum;
	std::string payRateString;
	//	Hours Worked
	double hoursWorkedNum;
	std::string hoursWorkedString;
	//	Pay Amount – this is calculated (see below), not entered by the user
	double payAmountNum;
	std::string payAmountString;

public:
	double payAmount();
	//You may add additional methods to the Payroll class as needed
	void PrintByDepartment(const bSearchTreeType<PayRoll>& L, int department);
	void RunPayroll(const bSearchTreeType<PayRoll>& L, int department);
	void SearchEmployeeNum(const bSearchTreeType<PayRoll>& L, std::string employeeNum);
	//You will need to overload the “ > ”(greater than) and “<”(less than) operators for the Payroll class (this operator is used by the insert and deletenode methods in the Binary Search Tree class).
		//Overload the “>” operator so that an Payroll object is determined to be “greater than” if its Employee Number is a higher numerical number.
	bool operator >(const PayRoll &empl)
	{
		std::stringstream(employeeNumString) >> employeeNum;
		if (employeeNum > empl.employeeNum) {
			return true;
		}
		return false;
	}
	bool operator <(const PayRoll& empl)
	{
		std::stringstream(employeeNumString) >> employeeNum;
		if (employeeNum < empl.employeeNum) {
			return true;
		}
		return false;
	}
		//Overload the “ < ” operator so that an Payroll object is determined to be “less than” if its Employee Number is a lower numerical number.  (4 pts)

		//You will need to overload the “ = = ”(equivalence) operator for the Payroll class (this operator is used by the search, insert and deletenode methods in the Binary Search Tree class).
		//Overload the operator so that a Payroll object is determined to be “equivalent” if the employee number in the objects are the same. (4 pts)
	bool operator == (PayRoll obj) const {
		if (employeeNum == obj.getEmployeeNum())
		{
			return (true);
		}
		else
		{
			return (false);
		}
	}

	friend std::ostream& operator<<(std::ostream& os, PayRoll& employee) {
		std::cout << std::endl;
		// std::string empNum, std::string last, std::string first,
			//std::string department, std::string payRate, std::string hours, std::string payAmountra
		os << " Employee #: " << employee.employeeNumString << " Last: " << employee.lastName << " First: " << employee.firstName << " Department: " << employee.departmentString << " Pay Rate: " << employee.payRateString << " Hours:" << employee.hoursWorkedString << " Pay Amount: " << employee.payAmount();
		return os;
	}

	bool operator /= (PayRoll obj) const {
		int temp = obj.getDepartment();
		if (departmentNum == temp)
		{
		//	cout << temp << std::endl;
			return (true);
		}
		else
		{
			return (false);
		}
	}

	//Base Methods:
		//2 constructors
	PayRoll() {
		employeeNum = 0;
		employeeNumString = "";
		lastName = "";
		firstName = "";
		departmentNum = 0;
		departmentString = "";
		payRateNum = 0;
		payRateString = "";
		hoursWorkedNum = 0;
		hoursWorkedString = "";
		payAmountNum = 0;
		payAmountString = "";
	}
	//One which initializes all data members of the class with given values
	PayRoll(std::string empNum, std::string last, std::string first, std::string department, std::string payRate, std::string hours, std::string payAmount) {
		employeeNumString = empNum;
		std::stringstream(employeeNumString) >> employeeNum;
		lastName = last;
		firstName = first;
		departmentString = department;
		std::stringstream(departmentString) >> departmentNum;
		payRateString = payRate;
		std::stringstream(payRateString) >> payRateNum;
		hoursWorkedString = hours;
		std::stringstream(hoursWorkedString) >> hoursWorkedNum;
		payAmountString = payAmount;
		std::stringstream(payAmountString) >> payAmountNum;
	}
	//One which sets all data members to a blank or zero initial state

	//Appropriate methods to store and retrieve each of the data members
	int getEmployeeNum() {
	//	std::cout << employeeNumString << std::endl;
		return (employeeNum);
	}
	std::string getLast() {
		std::cout << lastName << std::endl;
		return (lastName);
	}
	std::string getFirst() {
		std::cout << firstName << std::endl;
		return (firstName);
	}
	int getDepartment() {
	//	departmentString = std::to_string(departmentNum);
	//	std::cout << departmentString << std::endl;
		return (departmentNum);
	}
	double getPayRate() {
	//	std::cout << payRateString << std::endl;
		return (payRateNum);
	}
	double getHoursWorked() {
	//	std::cout << hoursWorkedString << std::endl;
		return (hoursWorkedNum);
	}
	double getPayAmount() {
		std::cout << payAmountString << std::endl;
		return (payAmountNum);
	}
	void setEmployeeNum(std::string employeeInput) {
		employeeNumString = employeeInput;
		std::stringstream(employeeInput) >> employeeNum;
	}
	void setLast(std::string lastInput) {
		lastName = lastInput;
	}
	void setFirst(std::string firstInput) {
		firstName = firstInput;
	}
	void setDepartment(std::string departmentInput) {
		departmentString = departmentInput;
		std::stringstream(departmentInput) >> departmentNum;
	}
	void setPayRate(std::string payRateInput) {
		payRateString = payRateInput;
		std::stringstream(payRateInput) >> payRateNum;
	}
	void setHoursWorked(std::string hoursWorkedInput) {
		hoursWorkedString = hoursWorkedInput;
		std::stringstream(hoursWorkedInput) >> hoursWorkedNum;
	}
	void setPayAmount(double payAmountInput) {
		payAmountString = std::to_string(payAmountInput);
		payAmountNum = payAmountInput;
	}
	//A member function PrintPayroll to print the payroll object data
	void PrintPayroll() {
		std::cout << "Employee #" << employeeNumString << std::endl;
		std::cout << "Last Name :" << lastName << std::endl;
		std::cout << "First Name :" << firstName << std::endl;
		std::cout << "Department #: " << departmentString << std::endl;
		std::cout << "Pay Rate :" << payRateString << std::endl;
		std::cout << "Hours Worked :" << hoursWorkedString << std::endl;
		std::cout << "Pay Amount : " << payAmountString << std::endl;
	}
	//A ReadPayroll member function to assign values to the data members
	void ReadPayroll(std::string empNum, std::string last, std::string first, std::string department, std::string payRate, std::string hours, std::string payAmount) {
		employeeNumString = empNum;
		std::stringstream(employeeNumString) >> employeeNum;
		lastName = last;
		firstName = first;
		departmentString = department;
		std::stringstream(departmentString) >> departmentNum;
		payRateString = payRate;
		std::stringstream(payRateString) >> payRateNum;
		hoursWorkedString = hours;
		std::stringstream(hoursWorkedString) >> hoursWorkedNum;
		payAmountString = payAmount;
		std::stringstream(payAmountString) >> payAmountNum;
	}

};