#include "Header.hpp"
bool is_alpha(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}
bool employeeNumberFunc(std::string num);
int global = 0;
int PayRoll::records = global;
int main()
{
	int i = 0, size = 0, h = 0;
	std::string num = "";
	bool quit = false;
	std::cout << "Enter the amount of records." << std::endl;
	std::cin >> size;
	//declare dynamic ptr for class payRoll
	PayRoll* iptr = nullptr;
	//make it the amount of records.
	iptr = new PayRoll[size];
		while (i < size) 
		{
			std::cout << "Would you like to enter program? Enter 1 for no 0 for Yes" << std::endl;
			std::cin >> quit;
			if (quit == true)
			{
				return (0);
			}
			std::cout << "Enter Employee Number" << std::endl;
			std::cin >> num;
			if (employeeNumberFunc(num))
			{
				int var_num;
				std::stringstream(num) >> var_num;
				iptr[i].setEmployeeNumber(var_num);
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
		std::cout << "Records # : " << global << std::endl;
		while (mi < size) 
		{
		int info1 = iptr[mi].getEmployeeNumber();
		std::string info2 = iptr[mi].getFirstName();
		std::string info3 = iptr[mi].getLastName();
		double info4 = iptr[mi].getPayRate();
		double info5 = iptr[mi].getHoursWorked();
		double info6 = iptr[mi++].getPayAmount();
		std::cout << " Info : " << info1 << "," << info2 << "," << info3 << "," << info4 << "," << info5 << "," << info6 << std::endl;
		}
	delete[] iptr;
	return (0);
}
bool employeeNumberFunc(std::string num)
{
	std::string employeeNumber_string = num;
	int var_employeeNumber = 0;
	bool ready = false;
	std::cin.ignore();
	// to check if it is a valid entry according to a 6 digit number.
	while (!ready)
	{
		if (std::isalpha(employeeNumber_string[0]) == true || std::isalpha(employeeNumber_string[0]) == true || is_alpha(employeeNumber_string) == true)
		{
			ready = false;
			std::cout << "Enter number with out letters." << std::endl;

			getline(std::cin, employeeNumber_string);
		}
		std::stringstream(employeeNumber_string) >> var_employeeNumber;
		if ((var_employeeNumber < 100000 || var_employeeNumber > 999999 || employeeNumber_string.length() > 6) && is_alpha(employeeNumber_string) != true)
		{
			ready = false;
			std::cout << "Enter number between 10000 and 999999 not " << employeeNumber_string << std::endl;

			getline(std::cin, employeeNumber_string);
		}
		if ((var_employeeNumber > 100000 && var_employeeNumber < 999999) && std::isalpha(employeeNumber_string[6]) != true && is_alpha(employeeNumber_string) != true)
		{
			ready = true;
		}
	}
	return (ready);
}
