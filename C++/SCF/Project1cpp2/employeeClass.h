#pragma once
#include <string>
class Employee{
    private:
    std::string employeeNumberString = "", lastName = "", firstName = "", ageString = "", genderString = "";
    public:
    Employee(){
        employeeNumberString = "";
        lastName = "";
        firstName = "";
        ageString = "";
        genderString = "";
    }
    Employee(std::string num, std::string last, std::string first, std::string age, std::string gender){
        employeeNumberString = num;
        lastName = last;
        firstName = first;
        ageString = age;
        genderString = gender;
    }
    bool operator == (Employee obj) {
		return (this->lastName == obj.lastName);
	}
    void printEmployee();
    void readEmployee(Employee);
};