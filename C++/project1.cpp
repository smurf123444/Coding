#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int employeeNumber, location, i;
    string firstName, lastName, jobTitle;
    double payRate,hoursWorked;
    bool eligibleOvertime,quit = false, quit1;
    while(!quit)
    {   
        cout << "Employee number?" << endl;
        cin >> i;
    if (i > 999999)
    {
        employeeNumber = i;
        cout << "Employee number too long." << endl;      
    }
    else
    {
        employeeNumber = i;
        
        cout << "First Name?" << endl;
        cin >> firstName;
    
        if(firstName.size() >= 9)
        {
            cout << "First Name is too long";
        }
        else {
        cout << "Last Name?" << endl;
        cin >> lastName;
         if(lastName.size() >= 9)
        {
            cout << "Last Name is too long";
        }
        else {
        cout << "Office Location(0 = Tampa; 1 = Sarasota; 2 = Orlando; 3 = Miami)" << endl;
        cin >> location;
        if(location > 3 || location < 0)
        {
        cout << "enter correct value for location" << endl;
        }
        else{
            switch (location)
        {
            case 0: cout << "Tampa" << endl;
                break;
            case 1: cout << "Sarasota" << endl;
                break;
            case 2: cout << "Orlando" << endl;
                break;
            case 3: cout << "Miami" << endl;
                break;
            default: cout << "Wrong input" << endl; 
        }
        cout << "Pay Rate ($$.$$)" << endl;
        cin >> payRate;
        if(payRate < 0)
        {
            cout << "Enter positive number for Pay Rate" << endl;
        }
        else{
        cout << "Hours Worked" << endl;
        cin >> hoursWorked;
        if (hoursWorked < 0)
        {
            cout << "Enter positive number for Hours Worked" << endl;
        }
        else{
        cout << "Job Title" << endl;
        cin >> jobTitle;
        //place job title code here.
        cout << "Eligible for Overtime 1 = yes 0 = no" << endl;
        cin >> eligibleOvertime;
        if(eligibleOvertime != 0 && eligibleOvertime != 1)
        {
            cout << "Enter either 0 or 1" << endl;
        }
        else{
        cout << employeeNumber << "," << firstName << "," << lastName <<"," << location << "," << payRate << "," <<hoursWorked << "," << jobTitle << "," << eligibleOvertime <<endl;
        cout << "Quit? 1 for yes 0 for no" << endl;
        cin >> quit;
        }
        }
        }
        }
        }
        }
    fstream fs;
    fs.open("cop2224_proj1.txt", fstream::in | fstream::out | fstream::app | fstream::ate);
    fs << employeeNumber << "," << firstName << "," << lastName <<"," << location << "," << payRate << "," <<hoursWorked << "," << jobTitle << "," << eligibleOvertime <<endl;
    fs.close();
    }
    }
    return (0);
}