/*
Here is a program designed for taking inputs of different variables used
to store into a .txt file using the fstream library and functions.
We had to tell if the strings were only letters, and include a space in the job title.
*/


#include <iostream>
#include <iomanip>  
#include <fstream>
#include <string>
#include <sstream>


using namespace std;

bool is_alpha(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}
int main()
{

	int employeeNumber, location, hoursWorked, i = 0;
	string firstName, lastName, overTime, locationString, jobTitle, employeeNumberString;
	double payRate;
	char eligibleOvertime = 'Y';
	bool quit = false;

	while (!quit) {
		if (!quit)
		{
			cout << "Welcome to the Project1 program!\nQuit? 1 for yes 0 for no" << endl;
			cin >> quit;
			if (quit)
			{
				system("pause");
				return (0);
			}
		}
		cout << "Employee number?" << endl;
		cin.ignore();
		getline(cin, employeeNumberString);
		stringstream(employeeNumberString) >> employeeNumber;

		while (employeeNumber > 999999 || employeeNumber < 100000)
		{

			cout << "Employee number need to be between 100000 and 999999, Enter Correct Value" << endl;
			cin >> employeeNumber;

		}

		cout << "First Name?" << endl;
		cin >> firstName;
		i = 0;
		while (is_alpha(firstName) != true)
		{
			if (firstName[i] == 0)
			{
				quit = 0;
			}
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
		cin.ignore();
		getline(cin, jobTitle);

		cout << "Eligible for Overtime Y = yes N = no" << endl;
		cin >> eligibleOvertime;
		while (eligibleOvertime != 'Y' && eligibleOvertime != 'N')
		{
			cout << "The overtime is not an alpha character." << endl;
			cin >> eligibleOvertime;
		}
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
		if (!quit)
		{
			//cout << "All values entered correctly" << endl;
			cout << "All values entered correctly" << endl;
			cout << employeeNumber << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << overTime << endl;
			cout << "add another employee record? 1 for no 0 for yes" << endl;
			cin >> quit;
		}
	}
	fstream fs;
	fs.open("cop2224_proj1.txt", fstream::in | fstream::out | fstream::app | fstream::ate);
	fs << employeeNumber << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << overTime << endl;
	fs.close();
	return (0);
}
