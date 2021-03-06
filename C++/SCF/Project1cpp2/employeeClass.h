#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_
#include <string>
#include <iostream>
class Employee{
    private:
    std::string employeeNumberString, lastName, firstName, ageString;
    char genderChar;
    public:
    Employee(){
        employeeNumberString = "";
        lastName = "";
        firstName = "";
        ageString = "";
        genderChar = 'm';
    }
    Employee(std::string num, std::string last, std::string first, std::string age, char gender){
        employeeNumberString = num;
        lastName = last;
        firstName = first;
        ageString = age;
        genderChar = gender;
    }
    bool operator == (Employee obj) const{
		return (lastName == obj.lastName);
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
    void printEmployee();
    void readEmployee(Employee);
    Employee writeEmployee(std::string employeeNum, std::string lastN, std::string firstN, std::string age, char gender);
};

#endif // !