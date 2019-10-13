
#include<iostream>
#include <sstream>
#include<fstream>// needed to use files
#include<string>// needed for string character
#include<iomanip>
using namespace std;

// Functions prototypes
int employeeNum();
string Fname();
string Lname();
string officeLocation();
double payRate();
double hoursWorked();
string jobTitle();
string eligibleForOT();


int main() {
	bool i;
	bool quit = false;
	while (!quit) {

		cout << "Welcome to the program. 1 for Exit 0 for Continue.." << endl;
		cin >> i;
		if (i == true)
		{
			return 0;
		}
		// Open the output file
		ofstream outputFile;
		outputFile.open("cop2224_proj1.txt"); // Open outputFile
		outputFile << employeeNum() << ",";
		outputFile << Fname() << ",";
		outputFile << Lname() << ",";
		outputFile << officeLocation() << ",";
		outputFile << payRate() << ",";
		outputFile << hoursWorked() << ",";
		outputFile << jobTitle() << ",";
		outputFile << eligibleForOT() << "";

		outputFile.close();
		cout << "Ready to quit? 1 for yes 0 for no." << endl;
		cin >> quit;
	}
	return (0);
}
bool is_alpha(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}

int employeeNum() {
	int num; //  employee number
	cout << "Please enter the 6 digit employee number:" << endl;
	cin >> num;
	if (num <= 999999 || num >= 100000) {
		return num;
	}
	while (num < 100000 || num > 999999) {
		cout << "Please Re-enter the number with 6 valid digits" << endl;
		cin >> num;
		return num;
	}
	return (0);
}

string Fname()
{
	string fn;// employee first name
	cout << "Please enter the employee first name:" << endl;
	cin >> fn;
	while (is_alpha(fn) != true)
	{
		cout << "Please re-enter the employee first name:" << endl;
		cin >> fn;
	}
	return fn;
}
string Lname() {
	string ln;// employee last name
	cout << "Please enter the employee last name:" << endl;
	cin >> ln;
	while (is_alpha(ln) != true)
	{
		cout << "Please re-enter the employee last name:" << endl;
		cin >> ln;
	}
	return ln;
}

string officeLocation() {
	string locationString; // employe office location
	int location;
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
	return (locationString);
}
double payRate() {
	double pR; // employee pay rate 
	string payRateString;
	cout << fixed << setprecision(2) << endl;
	cout << "please enter the employee pay rate: " << endl;
	cin.ignore();
	getline(cin, payRateString);
	stringstream(payRateString) >> pR;
	while ((pR < 0 || pR > 99.99) || (is_alpha(payRateString) == true) ||
		((payRateString.length() > 5 || payRateString.length() < 5) && payRateString[3] != '.'))
	{
		cout << "please enter the number of hours worked by the employee:" << endl;
		getline(cin, payRateString);
		stringstream(payRateString) >> pR;
	}
	cout << "" << endl;
	return pR;
}

double hoursWorked() {
	double hw;
	string hoursWorked;// employee hours worked 
	cout << fixed << setprecision(2) << endl;
	cout << "please enter the number of hours worked by the employee:" << endl;

	getline(cin, hoursWorked);
	stringstream(hoursWorked) >> hw;
	//stringstream(hoursWorked) >> hw;
	while (hw < 0 || hw > 99)
	{
		cout << "please re-enter the number of hours worked by the employee:" << endl;

		getline(cin, hoursWorked);
	}
	cout << "" << endl;
	return hw;


}

string jobTitle() {
	string jT;// employee job title
	cout << "please enter the employee job title:" << endl;
	cin.ignore();
	getline(cin, jT);
	while (is_alpha(jT) != true)
	{
		cout << "please enter the employee job title:" << endl;
		cin.ignore();
		getline(cin, jT);
	}
	cout << "" << endl;
	return jT;

}


string eligibleForOT() {
	string oT;
	cout << "Please enter 'Y' or 'N' if the employee is eligible for overtime:" << endl;
	cin.ignore();
	getline(cin, oT);
	while (oT[0] != 'Y' || oT[0] != 'N')
	{
		cout << "Please enter 'Y' or 'N' if the employee is eligible for overtime: " << endl;
		getline(cin, oT);
	}
	return oT;
}
