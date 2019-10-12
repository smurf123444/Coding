/*
Christopher Manning
project1.cpp
COP2224 Tues 6P.M.-8:50P.M.
Here is a program designed for taking inputs of different variables used
to store into a .txt file using the fstream library and functions.
We had to tell if the strings were only letters, and include a space in the job title.
*/
#include <iostream> 
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
//function for reading string into new const variable to properly iterate through to the end using string functions.
bool is_alpha(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}
int main()
{
	//declare our variables
	int employeeNumber, location, hoursWorked, i = 0;
	string firstName, lastName, overTime, locationString, jobTitle, employeeNumberString;
	double payRate;
	char eligibleOvertime = 'Y';
	bool quit = false;
	//loop for program to not quit after each question.
	while (!quit) {
		//allow user to quit early.
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
		//ask for employee number to be stored in a string then turned into a int
		cout << "Employee number?" << endl;
		cin.ignore();
		getline(cin, employeeNumberString);
		stringstream(employeeNumberString) >> employeeNumber;
		// to check if it is a valid entry according to a 6 digit number.
		while (employeeNumber > 999999 || employeeNumber < 100000)
		{

			cout << "Employee number need to be between 100000 and 999999, Enter Correct Value" << endl;
			
			getline(cin, employeeNumberString);
			stringstream(employeeNumberString) >> employeeNumber;

		}
		//ask for first name
		cout << "First Name?" << endl;
		cin >> firstName;
		i = 0;
		//if first name includes anything besides letters
		while (is_alpha(firstName) != true)
		{
			cout << "First Name contains a non alpha character, Enter correct Name" << endl;
			cin >> firstName;
		}
		//ask for last name
		cout << "Last Name?" << endl;
		cin >> lastName;
		//if last name has anything besides letters
		while (is_alpha(lastName) != true)
		{
			cout << "Last Name contains a non alpha character, Enter correct Name" << endl;
			cin >> lastName;
		}
		//ask for location
		cout << "Office Location(0 = Tampa; 1 = Sarasota; 2 = Orlando; 3 = Miami)" << endl;
		cin >> location;
		//if input is invalid
		while (location > 3 || location < 0)
		{
			cout << "enter correct value for location" << endl;
			cin >> location;
		}
		//switch case for locations
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
		//ask for pay rate to be stored in double.
		cout << "Pay Rate ($$.$$)" << endl;
		cin >> payRate;
		//if pay rate is negative or over 1000
		while (payRate < 0 || payRate > 1000)
		{
			cout << "Enter a Valid number for pay rate" << endl;
			cin >> payRate;
		}
		//ask how many hours worked
		cout << "Hours Worked" << endl;
		cin >> hoursWorked;
		//check if hours worked is above 99 or below 0
		while (hoursWorked < 0 || hoursWorked > 99)
		{
			cout << "Enter Valid work hours." << endl;
			cin >> hoursWorked;
		}
		//ask for job title in string format to be stored using getline.
		cout << "Job Title" << endl;
		cin.ignore();
		getline(cin, jobTitle);
		//ask if your eligible for overtime based on Y or N
		cout << "Eligible for Overtime Y = yes N = no" << endl;
		cin >> eligibleOvertime;
		//if not Y or N
		while (eligibleOvertime != 'Y' && eligibleOvertime != 'N')
		{
			cout << "The overtime is not an alpha character. Please enter Y or N" << endl;
			cin >> eligibleOvertime;
		}
		//switch case for eligible overtime after error checks.
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
		//if haven't quit. (unneccessary)
		if (!quit)
		{
			fstream fs;
			fs.open("cop2224_proj1.txt", fstream::in | fstream::out | fstream::ate);
			fs << employeeNumber << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << overTime << endl;
			fs.close();
			cout << "All values entered correctly" << endl;
			cout << employeeNumber << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << overTime << endl;
			cout << "add another employee record? \n1 for No 0 for Yes" << endl;
			cin >> quit;
		}
	}
	return (0);
}
