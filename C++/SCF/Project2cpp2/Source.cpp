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
	obj.insert(pay);
	obj.insert(pay2);
	pay.PrintByDepartment(obj, 4344);
	
	return (0);
}