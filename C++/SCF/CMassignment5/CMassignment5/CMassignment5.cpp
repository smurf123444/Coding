#include "Header.hpp"
float SavingsAccount::annualInterestRate = .03;
int main()
{
	int l = 0, t = 0;
	const int array = 5;
	SavingsAccount savings[array]= {(2000), (4000), (8000), (16000), (32000)};
	std::cout << std::endl;
	while (t < array)
		{
			int month;
			std::cout << std::endl;
			std::cout << "item # " << t << std::endl;
			std::cout << "-----" << std::endl;
			month = savings[t].calculateMonthlyInterest();
			l = savings[t++].read(month) + l;
			std::cout << "Savings balance : $" << l << std::endl;
		}
	SavingsAccount::modifyInterestRate(.04);
	t = 0;
	l = 0;
	while (t < array)
	{
		int month;
		std::cout << std::endl;
		std::cout << "item # " << t << std::endl;
		std::cout << "-----" << std::endl;
		month = savings[t].calculateMonthlyInterest();
		l = savings[t++].read(month) + l;
		std::cout << "Savings balance : $" << l << std::endl;
	}
}