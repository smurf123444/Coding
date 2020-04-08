#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_
#include <string>
#include <iostream>
#include <sstream>
class Employee {
private:
    std::string employeeNumberString, lastName, firstName, ageString;
    int employeeNumber;
    char genderChar;
public:
    Employee() {
        employeeNumberString = "";
        lastName = "";
        firstName = "";
        ageString = "";
        genderChar = 'm';
    }
    Employee(std::string num, std::string last, std::string first, std::string age, char gender) {
        employeeNumberString = num;
        lastName = last;
        firstName = first;
        ageString = age;
        genderChar = gender;
    }
    bool operator == (Employee obj) const {
        return (employeeNumber == obj.employeeNumber);
    }
    friend std::ostream& operator<<(std::ostream& os, const Employee& employee) {
        os << "Employee Number : " << employee.employeeNumber << " First Name : " << employee.firstName << " Last Name : " << employee.lastName;
        return os;
    }

    std::string getEmployeeNumber()
    {
        std::cout << employeeNumberString << std::endl;
        return(employeeNumberString);
    }
    char getGender()
    {
        //std::cout << genderChar << std::endl;
        return(genderChar);
    }
    std::string getLastName()
    {
        //   std::cout << lastName << std::endl;
        return(lastName);
    }

    bool operator >(const Employee& empl) 
    {
        std::stringstream(employeeNumberString) >> employeeNumber;
        if (employeeNumber > empl.employeeNumber) {
            return true;
        }
        return false;
    }
    bool operator <(const Employee& empl)
    {
        std::stringstream(employeeNumberString) >> employeeNumber;
        if (employeeNumber < empl.employeeNumber) {
            return true;
        }
        return false;
    }

    void printEmployee();
    void readEmployee(Employee);
    Employee writeEmployee(std::string employeeNum, std::string lastN, std::string firstN, std::string age, char gender);
};

#endif // !