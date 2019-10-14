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
int employeeNumber()
{
	int employeeNumber;
	string employeeNumberString;
	bool ready = false;
	cout << "Employee number?" << endl;
	cin.ignore();
	getline(cin, employeeNumberString);
	// to check if it is a valid entry according to a 6 digit number.
	while (!ready)
	{
		if ( isalpha(employeeNumberString[6]) == true || isalpha(employeeNumberString[1]) == true || is_alpha(employeeNumberString) == true)
		{
			ready = false;
			cout << "Enter number with out letters." << endl;
			getline(cin, employeeNumberString);
		}
		stringstream(employeeNumberString) >> employeeNumber;
		if ((employeeNumber < 100000 || employeeNumber > 999999 || employeeNumberString.length() > 6) && is_alpha(employeeNumberString) != true)
		{
			ready = false;
			cout << "Enter number between 10000 and 999999 not " << employeeNumberString << endl;
			getline(cin, employeeNumberString);
		}
		if ((employeeNumber > 100000 && employeeNumber < 999999) && isalpha(employeeNumberString[6]) != true && is_alpha(employeeNumberString) != true)
		{
			ready = true;
		}
	}
	return (employeeNumber);
}
int main()
{
	//declare our variables
	int location, hoursWorked, employeeInt;
	string firstName, lastName, outputOvertime, inputOvertime, locationString, jobTitle, payRateString, hoursWorkedString, employeeNumberString;
	locale loc, loc2;
	double payRate;
	bool quit = false, ready = false;
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
		employeeInt = employeeNumber();
		//ask for first name
		cout << "First Name?" << endl;
		cin >> firstName;
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
		cin.ignore();
		getline(cin, locationString);
		stringstream(locationString) >> location;
		//if input is invalid
		while ((location > 3 || location < 0) || (is_alpha(locationString) == true || locationString.length() > 1))
		{
			cout << "enter correct value for location" << endl;
			getline(cin, locationString);
			stringstream(locationString) >> location;
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

		getline(cin, payRateString);
		stringstream(payRateString) >> payRate;
		//if pay rate is negative or over 1000
		while ((isalpha(payRateString[1]) == true || isalpha(payRateString[3]) == true || isalpha(payRateString[4]) == true || isalpha(payRateString[2]) == true)||
				(payRate < 0 || payRate > 99.99) || ((payRateString.length() > 5 || payRateString.length() < 5) && payRateString[3] != '.'))
		{
			cout << "Enter a Valid number for pay rate" << endl;
			getline(cin, payRateString);
			stringstream(payRateString) >> payRate;
		}
		//ask how many hours worked
		cout << "Hours Worked" << endl;
		getline(cin, hoursWorkedString);
		stringstream(hoursWorkedString) >> hoursWorked;

		//check if hours worked is above 99 or below 0
		while (is_alpha(hoursWorkedString) == true || hoursWorkedString.length() > 2 || isalpha(hoursWorkedString[1]) || isalpha(hoursWorkedString[0]))
		{
			cout << "Enter correct valuse for hours worked.. not " << hoursWorkedString << endl;
			getline(cin, hoursWorkedString);
			stringstream(hoursWorkedString) >> hoursWorked;
		}
		/*while ((hoursWorked < 0 || hoursWorked > 99) || (isalpha(hoursWorkedString[1]) || (is_alpha(hoursWorkedString))))
		{
			cout << "Enter Valid work hours in between 0 and 99" << endl;
			getline(cin, hoursWorkedString);
			stringstream(hoursWorkedString) >> hoursWorked;
		}*/
		//ask for job title in string format to be stored using getline.
		cout << "Job Title" << endl;
		getline(cin, jobTitle);
		//ask if your eligible for overtime based on Y or N
		cout << "Eligible for Overtime Y = yes N = no" << endl;
		//if not Y or N
		getline(cin, inputOvertime);
		while (inputOvertime[0] != 'Y' && inputOvertime[0] != 'N')
		{
			cout << "Enter either Y or N, not " << inputOvertime[0] << endl;
			cin >> inputOvertime;
		}
		//switch case for eligible overtime after error checks.
		switch (inputOvertime[0])
		{
		case 'N': outputOvertime = "No";
			cout << "False" << endl;
			break;
		case 'Y': outputOvertime = "Yes";
			cout << "True" << endl;
			break;
		default: outputOvertime = "Error";
		}
		//if haven't quit. (unneccessary)
		if (!quit)
		{
			fstream fs;
			fs.open("cop2224_proj1.txt", fstream::in | fstream::out | fstream::ate);
			fs << employeeInt << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << outputOvertime << endl;
			fs.close();
			cout << "All values entered correctly" << endl;
			cout << employeeInt << "," << firstName << "," << lastName << "," << locationString << "," << payRate << "," << hoursWorked << "," << jobTitle << "," << outputOvertime << endl;
			cout << "add another employee record? \n1 for No 0 for Yes" << endl;
			cin >> quit;
		}
	}
	return (0);
}
