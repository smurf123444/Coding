#include "EmployeeClass.h"

/*
Christopher Manning 
Project #2: Employee Class Array
COP2224 Tues 6-8:50 p.m.
*/

bool is_alpha(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}
int employeeNumberFunc(std::string num);
int global = 0;
int PayRoll::records = global;
int main()
{
	int i = 0, size = 0, h = 0;
	std::string num = "";
	bool quit = false;
	std::cout << "Welcome to Project 2! Our final project for this COP2224, " << std::endl;
	std::cout << " This program is designed to take in employee Information and store them in a class array." << std::endl;
	std::cout << "Please type in below the information asked, also if you would like to exit this program before coninuing... " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Enter Anything for [Exit Program] OR 0 for [Enter Program]" << std::endl;
	std::cin >> quit;
		if (quit == true)
		{
			return (0);
		}
	std::cout << "Enter the amount of records." << std::endl;
	std::cin >> size;
	bool ready = false;
	int var_num = 0;
	//declare dynamic ptr for class payRoll
	PayRoll* iptr = nullptr;
	std::cin.ignore();
	//make it the amount of records.
	iptr = new PayRoll[size];
		while (i < size) 
		{
			std::cout << "Enter Employee Number" << std::endl;
			num = iptr[i].setEmployeeNumber();
			std::cin.ignore();
				while (!ready)
				{
			if (std::isalpha(num[0]) == true || std::isalpha(num[0]) == true || is_alpha(num) == true)
				{
				ready = false;
				std::cout << "Enter something without letters" << std::endl;
				getline(std::cin, num);
				
				}
			std::stringstream(num) >> var_num;
			if ((var_num < 100000 || var_num > 999999 || num.length() > 6) && is_alpha(num) != true)
				{
				ready = false;
				std::cout << "Enter something between 100000 & 999999" << std::endl;
				getline(std::cin, num);
				}
			if ((var_num > 100000 && var_num < 999999) && std::isalpha(num[6]) != true && is_alpha(num) != true)
				{
				ready = true;
				iptr[i].quickSet(var_num);
				}
			}
				std::cout << "First Name?" << std::endl;
				iptr[i].setFirstName();
				//if first name includes anything besides letters
			while (is_alpha(iptr[i].getFirstName()) != true)
			{
				std::cout << "First Name contains a non alpha character, Enter correct Name" << std::endl;
				iptr[i].setFirstName();
			}
			std::cout << "Last Name?" << std::endl;
			iptr[i].setLastName();
			//if last name has anything besides letters
			while (is_alpha(iptr[i].getLastName()) != true)
			{
				std::cout << "Last Name contains a non alpha character, Enter correct Name" << std::endl;
				iptr[i].setLastName();
			}
			std::cout << "Pay Rate ($$.$$)" << std::endl;
			std::string payRateString = "";
			std::cin.ignore();
			getline(std::cin, payRateString);
			iptr[i].setPayRate(payRateString);
			float payRate = iptr[i].getPayRate();
			//if pay rate is negative or over 1000
			while ((isalpha(payRateString[0]) == true || isalpha(payRateString[3]) == true || isalpha(payRateString[4]) == true ||
				isalpha(payRateString[1]) == true || payRate < 0 || payRate > 99.99 ||
				payRateString.length() > 5 || payRateString.length() < 5 || payRateString[2] != '.'))
			{
				std::cout << "Enter a Valid number for pay rate" << std::endl;
				getline(std::cin, payRateString);
				std::stringstream(payRateString) >> payRate;
			}
			std::cout << "Hours Worked (##.##)" << std::endl;
			std::string hoursWorkedString = "";
			int hoursWorked = 0;
			std::getline(std::cin, hoursWorkedString);
			iptr[i].setHoursWorked(hoursWorkedString);
			std::stringstream(hoursWorkedString) >> hoursWorked;
			//check if hours worked is above 99 or below 0
			while ((isalpha(hoursWorkedString[0]) == true || isalpha(hoursWorkedString[3]) == true || isalpha(hoursWorkedString[4]) == true ||
				isalpha(hoursWorkedString[1]) == true || hoursWorked < 0 || hoursWorked > 99.99 ||
				hoursWorkedString.length() > 5 || hoursWorkedString.length() < 5 || hoursWorkedString[2] != '.'))
			{
				std::cout << "Enter correct valuse for hours worked.. not " << hoursWorkedString << std::endl;
				getline(std::cin, hoursWorkedString);
				std::stringstream(hoursWorkedString) >> hoursWorked;
			}
			std::string test = iptr[i].setPayAmount();
			std::cout << test << std::endl;
			std::cout << "End of " << ++i << std::endl << " Enter 1 for quit 0 for continue" << std::endl;
			std::cin >> quit;
			if (quit == true)
			{
				global = i;
				PayRoll::increment();
				size = i;
			}
			else
			{
				global++;
				PayRoll::increment();
			}
	}
		int mi = 0;
		std::cout << "<Total Records> : " << global << std::endl;
		std::fstream fs;
		fs.open("cop2224_proj2.txt", std::fstream::in | std::fstream::out | std::fstream::ate | std::fstream::app);
		while (mi < size) 
		{
		int info1 = iptr[mi].getEmployeeNumber();
		std::string info2 = iptr[mi].getFirstName();
		std::string info3 = iptr[mi].getLastName();
		double info4 = iptr[mi].getPayRate();
		double info5 = iptr[mi].getHoursWorked();
		double info6 = iptr[mi++].getPayAmount();
		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(2);
		std::cout << " Info : " << info1 << "," << info2 << "," << info3 << ",$" << info4 << "," << info5 << ",$" << info6 << std::endl;
		fs << info1 << "," << info2 << "," << info3 << ",$" << info4 << "," << info5 << ",$" << info6 << std::endl;
		}
		fs.close();
	delete[] iptr;
	return (0);
}