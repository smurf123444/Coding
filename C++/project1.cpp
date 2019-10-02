#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int employeeNumber, location;
    string firstName, lastName, jobTitle;
    double payRate,hoursWorked;
    bool eligibleOvertime,quit = false;
    while(!quit)
    {
        
        cout << "Employee number?" << endl;
        cin >> employeeNumber;
        cout << "First Name?" << endl;
        cin >> firstName;
        cout << "Last Name?" << endl;
        cin >> lastName;
        cout << "Office Location(0 = Tampa; 1 = Sarasota; 2 = Orlando; 3 = Miami)" << endl;
        cin >> location;
        cout << "Pay Rate ($$.$$)" << endl;
        cin >> payRate;
        cout << "Hours Worked" << endl;
        cin >> hoursWorked;
        cout << "Job Title" << endl;
        cin >> jobTitle;
        cout << "Eligible for Overtime 1 = yes 0 = no" << endl;
        cin >> eligibleOvertime;
        cout << employeeNumber << "," << firstName << "," << lastName <<"," << location << "," << payRate << "," <<hoursWorked << "," << jobTitle << "," << eligibleOvertime <<endl;
        cout << "Quit? 1 for yes 0 for no" << endl;
        cin >> quit;
    }
    fstream fs;
    fs.open("cop2224_proj1.txt", fstream::in | fstream::out | fstream::app | fstream::ate);

    fs << employeeNumber << "," << firstName << "," << lastName <<"," << location << "," << payRate << "," <<hoursWorked << "," << jobTitle << "," << eligibleOvertime <<endl;
    fs.close();
    
    return (0);
}