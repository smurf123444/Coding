#include "PayRoll.h"
#include "binarySearchTree.h"
double PayRoll::payAmount() {
	setPayAmount(getPayRate() * getHoursWorked());
	return (payAmountNum);
}

//Create a function PrintByDepartment in the main program which will traverse a Binary Search Tree objectand print out the instances of Payroll objects in the Binary Search Tree for a given department.
//The function should be declared as follows(2 pts) :
 
void PayRoll::PrintByDepartment(const bSearchTreeType<PayRoll>& L, int department)
{
	int i = 0;
	PayRoll obj;
	std::string temp;
	obj.departmentNum = department;
//	L.preorderTraversal();
	i = L.searchDept(obj);
	cout << endl;
	cout << "Total Employees by this Dept. : " << i << endl;
	cout << endl;
	//The function should print out the name, employee number, pay rateand hours worked of each employee found to match the given department


}
//	Create a function RunPayroll in the main program which will traverse a Binary Search Tree objectand calculate the Pay Amount of the Payroll objects in the Binary Search Tree for a given department.
//The function should be declared as follows(2 pts) :
void PayRoll::RunPayroll(const bSearchTreeType<PayRoll>& L, int department)
{

	//The function should use the method included in the Payroll object to calculateand store the Pay Amount for each object.
	//A message should be provided to the user to confirm the successful completion of the payroll processingand how many payroll records were processed
	int i = 0;
	PayRoll obj;
	obj.departmentNum = department;
	//The function should print out the name, employee number, pay rateand hours worked of each employee found to match the given department
	L.searchDept(obj);

}

//You will need to create a method to search through the Binary Search Tree for a Payroll object with the employee number entered by the user.
bool PayRoll::SearchEmployeeNum(const bSearchTreeType<PayRoll>& L, std::string employeeNum) {
	PayRoll obj;
 	bool test = false;
	obj.setEmployeeNum(employeeNum);
	if (L.search(obj))
	{
		test = true;
	}
	else
	{
		cout << endl;
		cout << "Payroll Record Not Found" << endl;
		cout << endl;
	}
	return (test);
}
//You can leverage the methods provided in the Binary Search Tree or create your own search method(2 pts)

//If the employee number is not found, print “Payroll Record Not Found”