#include <iostream>
#include <fstream>
#include <string>
#include <io.h>
//#include <unistd.h>
using namespace std;
void cm_write(char c)
{
	_write(1, &c, 1);
}
int cm_stringCount(char *c)
{
	int i = 0;
	while (c[i] || c[i] == ' ')
	{
		i++;
	}
	return (i);
}
void cm_print(char *c)
{
	int i = 0;
	while (c[i] || c[i] == ' ')
	{
		cm_write(c[i++]);
	}
	c[i] = '/0';
}

int main()
{
	int employeeNumber, location, i;
	string firstName, lastName, overTime, locationString, payRate ;
	struct gun;
	char  hoursWorked[3], jobTitle[20];
	char eligibleOvertime = 'Y';
	bool quit = false;
	while (!quit)
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
		}
			cout << "First Name?" << endl;
			cin >> firstName;
if (firstName.size() >= 9)
	{
	cout << "First Name is too long";
	}
else {
	cout << "Last Name?" << endl;
	cin >> lastName;
}
if (lastName.size() >= 9)
	{
		cout << "Last Name is too long";
	}
else
{
	cout << "Office Location(0 = Tampa; 1 = Sarasota; 2 = Orlando; 3 = Miami)" << endl;
	cin >> location;
}
if (location > 3 || location < 0)
		{
	cout << "enter correct value for location" << endl;
		}
else {
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
}
cout << "Pay Rate ($$.$$)" << endl;
cin >> payRate;
payRate[3] = '/0';

cout << "Hours Worked" << endl;
cin >> hoursWorked;

if (cm_stringCount(hoursWorked) > 2)
	{
		cout << "Too Many Hours entered." << endl;
	}
else 
{
		cout << "Job Title" << endl;
		cin >> jobTitle;
	}
	//place job title code here.
	if (!jobTitle)
	{
	cout << "Does not Job Title" << endl;
	}
	else
	{
	cout << "Job Title Exists" << endl;
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
	default: overTime == "Error";
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
