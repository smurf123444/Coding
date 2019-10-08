#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <algorithm>
#include <cctype>
//#include <io.h>
//#include <unistd.h>
using namespace std;
bool is_alpha(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}
int main()
{

	int employeeNumber, location, hoursWorked, i = 0;
	string firstName, lastName, overTime, locationString, jobTitle;
	double payRate;
	char eligibleOvertime = 'Y';
	bool quit = false;


	while (!quit)
	{
		cout << "Employee number?" << endl;
		cin >> employeeNumber;

		while (employeeNumber > 999999 || employeeNumber < 100000)
		{
			cout << "Employee number too long or too short, Enter Correct Value" << endl;
			cin >> employeeNumber;
		}
		cout << "First Name?" << endl;
		cin >> firstName;
		while (is_alpha(firstName) != true)
		{
			cout << "First Name contains a non alpha character, Enter correct Name" << endl;
			cin >> firstName;
		}

		cout << "Last Name?" << endl;
		cin >> lastName;

		while (is_alpha(lastName) != true)
		{
			cout << "Last Name contains a non alpha character, Enter correct Name" << endl;
			cin >> lastName;
		}

		cout << "Office Location(0 = Tampa; 1 = Sarasota; 2 = Orlando; 3 = Miami)" << endl;
		cin >> location;

		while (location > 3 || location < 0)
		{
			cout << "enter correct value for location" << endl;
			cin >> location;
		}
		switch (location)
		{
		case 0:
			locationString = "Tampa";
			cout << "Tampa" << endl;
			break;
		case 1:
			locationString = "Sarasota";
			cout << "Sarasota" << endl;
			break;
		case 2:
			locationString = "Orlando";
			cout << "Orlando" << endl;
			break;
		case 3:
			locationString = "Miami";
			cout << "Miami" << endl;
			break;
		default: cout << "Wrong input" << endl;
		}
		cout << "Pay Rate ($$.$$)" << endl;
		cin >> payRate;
		while (payRate < 0 || payRate > 1000)
		{
			cout << "Enter a Valid number for pay rate" << endl;
			cin >> payRate;
		}
		cout << "Hours Worked" << endl;
		cin >> hoursWorked;
		while (hoursWorked < 0 || hoursWorked > 99)
		{
			cout << "Enter Valid work hours." << endl;
			cin >> hoursWorked;
		}
		cout << "Job Title" << endl;
		cin >> jobTitle;
		//place job title code here.
		if (jobTitle.empty())
		{
			cout << "Does not Job Title" << endl;
		}

		while (is_alpha(jobTitle) != true)
		{
			cout << "Jon Title contains a non alpha character. Enter another job title" << endl;
			cin >> jobTitle;
		}
		cout << "Eligible for Overtime Y = yes N = no" << endl;
		cin >> eligibleOvertime;
		switch (eligibleOvertime)
		{
		case 'N': overTime = "No";
			cout << "False" << endl;
			break;
		case 'Y': overTime = "Yes";
			cout << "True" << endl;
			break;
		default: overTime = "Error";
		}
		if (eligibleOvertime != 'N' && eligibleOvertime != 'Y')
		{
			while (eligibleOvertime != 'N' && eligibleOvertime != 'Y')
			{
				cout << "Enter Correct Value (N or Y)" << endl;
				cin >> eligibleOvertime;
			}
		}
		//cout << "All values entered correctly" << endl;
		cout << "All values entered correctly" << endl;
		cout << employeeNumber << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << overTime << endl;
		cout << "Quit? 1 for yes 0 for no" << endl;
		cin >> quit;
	}
	fstream fs;
	fs.open("cop2224_proj1.txt", fstream::in | fstream::out | fstream::app | fstream::ate);
	fs << employeeNumber << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << overTime << endl;
	fs.close();
	return (0);
}
