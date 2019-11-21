#include "Header.hpp"
bool is_alpha(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isalpha(*it)) ++it;
	return !s.empty() && it == s.end();
}

void employeeNumberFunc(std::string num);
int PayRoll::records = 8;
int main()
{
int h = 0;
std::string num = "";
bool quit = false;
std::cout << PayRoll::increment() << std::endl;

while (!quit)
{
    std::cout << "Would you like to enter program? Enter 1 for no 0 for Yes" << std::endl;
    std::cin >> quit;
	if (quit == true)
	{
		return (0);
	}
	std::cout << "enter number" << std::endl;
	std::cin >> num;
	employeeNumberFunc(num);
}

std::cout << PayRoll::increment();
return (0);
}

void employeeNumberFunc(std::string num)
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
}
