#include "employeeClass.h"
#include <iostream>
void Employee::printEmployee(){
     std::cout << "Employee Name : " << std::endl;
     std::cout << firstName << std::endl;
 }

void Employee::readEmployee(Employee obj){
    employeeNumberString = obj.employeeNumberString;
    firstName = obj.firstName;
    lastName = obj.lastName;
    ageString = obj.ageString;
    genderString = obj.genderString;

}