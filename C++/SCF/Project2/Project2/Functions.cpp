#include "Header.hpp"

bool fread(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}

int trade()
{
	int var_employeeNumber = 0;
	std::string employeeNumberString;
	bool ready = false;
	std::cout << "Employee number?" << std::endl;
	std::cin.ignore();
	getline(std::cin, employeeNumberString);
	// to check if it is a valid entry according to a 6 digit number.
	while (!ready)
	{
		if (isalpha(employeeNumberString[6]) == true || isalpha(employeeNumberString[1]) == true /*|| is_alphaQ(employeeNumberString) == true*/)
		{
			ready = false;
			std::cout << "Enter number with out letters." << std::endl;
			getline(std::cin, employeeNumberString);
		}
		std::stringstream(employeeNumberString) >> var_employeeNumber;
		if ((var_employeeNumber < 100000 || var_employeeNumber > 999999 || employeeNumberString.length() > 6) /*&& is_alphaQ(employeeNumberString) != true*/)
		{
			ready = false;
			std::cout << "Enter number between 10000 and 999999 not " << employeeNumberString << std::endl;
			getline(std::cin, employeeNumberString);
		}

		if ((var_employeeNumber > 100000 && var_employeeNumber < 999999) && isalpha(employeeNumberString[6]) != true /*&& is_alphaQ(employeeNumberString) != true*/)
		{
			ready = true;
		}

	}
	return (var_employeeNumber);
}
