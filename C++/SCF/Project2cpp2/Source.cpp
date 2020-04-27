#include <iostream>
#include <string>
#include <sstream>
#include "binarySearchTree.h"
#include "PayRoll.h"
int main() {
	bSearchTreeType<PayRoll> obj;
	PayRoll pay("12345", "Manning", "Chris", "4341", "23.43", "12.12", "0");
	PayRoll pay2("12335", "T", "B", "4344", "25.33", "11.52", "0");
	//std::string empNum, std::string last, std::string first,
	//std::string department, std::string payRate, std::string hours, std::string payAmount
	//obj.insert(pay);
//	obj.insert(pay2);
//	pay.PrintByDepartment(obj, 4344);
//	pay.SearchEmployeeNum(obj, "12345");

//	8)	Write a main program that will use the Binary Search Treeand Payroll classes as follows.
	std::string empNumString, lastString, firstString,
		departmentString, payRateString, hoursString, payAmountString;
	int empNumInt, departmentInt, input;
	double payRateDouble, payAmountDouble;
	bool quit = false;
	while (!quit)
	{
		switch (input)
		{
		case 1:
			//		1)	Insert a Payroll object into the tree(4 pts)
//		o	Prompt the user to enter all data elements for an employee Payroll object into the program
//			Note - the pay amount should not be entered by the user – this will be calculated through the Payroll Process menu choice
//		o	The Payroll object will be added to the tree
			break;
		case 2:
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
			break;
		}
		cout << "1. Enter Employee Number"
	}
//	•	Create a menu that will prompt the user with the following options








	return (0);
}