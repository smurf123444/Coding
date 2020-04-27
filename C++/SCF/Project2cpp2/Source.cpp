#include <iostream>
#include <string>
#include <sstream>
#include "binarySearchTree.h"
#include "PayRoll.h"
int main() {
	bSearchTreeType<PayRoll> obj;
	PayRoll pay;
	PayRoll payTemp;
	//std::string empNum, std::string last, std::string first,
	//std::string department, std::string payRate, std::string hours, std::string payAmount
	//obj.insert(pay);
//	obj.insert(pay2);
//	pay.PrintByDepartment(obj, 4344);
//	pay.SearchEmployeeNum(obj, "12345");

//	8)	Write a main program that will use the Binary Search Treeand Payroll classes as follows.
	std::string empNumString, lastString, firstString,
		departmentString, payRateString, hoursString, payAmountString, inputString;
	int empNumInt, departmentInt, input = 0;
	double payRateDouble, payAmountDouble;
	bool quit = false;	
	while (!quit)
	{
		input = 0;
		cout << "Please Enter an Input" << endl;
		cout << "input #: ";
		std::getline(cin, inputString);
		stringstream(inputString) >> input;
		switch (input)
		{
		case 1:
			cout << "Please Enter all data elements for an Employee PayRoll" << endl;
			cout << "Employee #: ";
			std::getline(cin, empNumString);
			pay.setEmployeeNum(empNumString);
			cout << "last Name : ";
			std::getline(cin, lastString);
			pay.setLast(lastString);
			cout << "First Name: ";
			std::getline(cin, firstString);
			pay.setFirst(firstString);
			cout << "Department #: ";
			std::getline(cin, departmentString);
			pay.setDepartment(departmentString);
			cout << "Pay Rate: ";
			std::getline(cin, payRateString);
			pay.setPayRate(payRateString);
			cout << "Hours Worked: ";
			std::getline(cin, hoursString);
			pay.setHoursWorked(hoursString);
			obj.insert(pay);
//			obj.preorderTraversal();
			//pay.reset();
			//		1)	Insert a Payroll object into the tree(4 pts)
//		o	Prompt the user to enter all data elements for an employee Payroll object into the program
//			Note - the pay amount should not be entered by the user – this will be calculated through the Payroll Process menu choice
//		o	The Payroll object will be added to the tree
			break;
		case 2:
			cout << "Enter Employee Num to delete from tree : ";
			std::getline(cin, inputString);
			pay.setEmployeeNum(inputString);
			if (pay.SearchEmployeeNum(obj, inputString))
			{
				obj.deleteNode(pay);
				pay.reset();
			}
			else
			{
				cout << "Not Found" << endl;
			}
			//		2)	Delete a Payroll object from the tree(4 pts)
//		o	The user will enter the employee number of the employee to delete
//		o	Print the employee information for the user
//		o	Let the user confirm they want to delete the Payroll object
			break;
		case 3:
			//		3)	Search for employee Payroll data(4 pts)
//		o	User will input the employee number of the employee
//		o	If found, the employee name, employee numberand associated payroll information will be printed
//		o	If not found, an appropriate message should be displayed
			break;
		case 4:

			//		4)	Update Payroll data(4 pts)
			//		o	Provide the user the ability to update the pay rate or hours worked for an employee’s Payroll object
			//		o	Provide the ability to search by employee number
			//		o	Store the updates the user enters for the Payroll object
			break;
		case 5:
			//		5)	Run Payroll(4 pts)
//		o	Confirm if the user wants to run payroll for a specific department
//		o	Process the pay amount for each Payroll object in the department
			break;
		case 6:
			//		6)	Print the entire Payroll List(4 pts)
//		o	Print out the number of Payroll objects that are in the current tree
//		o	Print out all the employeeand payroll information for each payroll object in the tree
			break;
		case 7:
			//		7)	Print a department Payroll List(4 pts)
//		o	Print out the number of Payroll objects that are in the department specified by the user
//		o	Print out all the employeeand payroll information for each payroll object in the department
			break;
		case 8:
			quit = true;
			//		8)	Exit
//		•	Ensure the program appropriately handles logic for each menu item when the Binary Search Tree is empty(2 pts)
			break;
		default:
			cout << "Please Enter an Input" << endl;
			cout << "input #: ";
			std::getline(cin, inputString);
			stringstream(inputString) >> input;
			break;
		}
	}
//	•	Create a menu that will prompt the user with the following options








	return (0);
}