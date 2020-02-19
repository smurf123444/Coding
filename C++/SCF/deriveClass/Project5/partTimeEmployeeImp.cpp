#include <iostream>
#include <string>
#include "partTimeEmployee.h"
   
using namespace std;
  
void partTimeEmployee::print() const
{
    double pay = calculatePay();
    std::cout << std::endl;
    std::cout << "Pay : " << pay << std::endl;
    std::cout << "First Name " << getFirstName() << std::endl;
    std::cout << "Last Name " << getLastName() << std::endl;
}

double partTimeEmployee::calculatePay() const
{
    double answer = hoursWorked * payRate;
    return(answer);     //variable to store the pay rate
}

void partTimeEmployee::setNameRateHours(string first, 
                        string last, double rate, double hours)
{
    this->setName(first, last);
    this->hoursWorked = hours;
    this->payRate = rate;
}

      //Constructor 
partTimeEmployee::partTimeEmployee(string first, string last,
                                   double rate, double hours)
      : personType(first, last) 
{
    this->setName(first, last);
    this->setNameRateHours(first, last, rate, hours);
} 
