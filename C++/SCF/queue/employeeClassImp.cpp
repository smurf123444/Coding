#include "employeeClass.h"
#include <iostream>
void Employee::printEmployee(){
     std::cout << "First Name : " << std::endl;
     std::cout << firstName << std::endl;
     std::cout << "Last Name : " << std::endl;
     std::cout << lastName << std::endl;
     std::cout << "Age : " << std::endl;
     std::cout << ageString << std::endl;
     std::cout << "Gender : " << std::endl;
     std::cout << genderChar << std::endl;
     std::cout << "Employee Number : " << std::endl;
     std::cout << employeeNumberString << std::endl;
 }

void Employee::readEmployee(Employee obj){
    employeeNumberString = obj.employeeNumberString;
    firstName = obj.firstName;
    lastName = obj.lastName;
    ageString = obj.ageString;
    genderChar = obj.genderChar;

}

Employee Employee::writeEmployee(std::string employeeNum, std::string lastN, std::string firstN, std::string age, char gender)
{
    Employee cpy;
    cpy.employeeNumberString = employeeNum;
    cpy.firstName = firstN;
    cpy.lastName = lastN;
    cpy.ageString = age;
    cpy.genderChar = gender;
    return (cpy);
}