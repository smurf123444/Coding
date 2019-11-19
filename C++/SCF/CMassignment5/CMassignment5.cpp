#include "Header.hpp"
float SavingsAccount::annualInterestRate = .03;
int main()
{
	int l = 0, t = 0;
	float saved = 0;
	const int array = 5;
	int r[5];
	SavingsAccount savings[array]= {(2000), (4000), (8000), (16000), (32000)};
	std::cout << std::endl;
	while (t < array)
	{
		int month; 
		std::cout << "Original Savings" << std::endl;
		std::cout << "Item # " << t << std::endl;
		std::cout << "-------" << std::endl;
		std::cout << savings[t++].amountKept << std::endl;
		std::cout << std::endl;
	} 
	t = 0;
	l = 0;
	while (t < array)
		{
			int month;
			
			std::cout << std::endl;
			std::cout << "item # " << t << std::endl;
			std::cout << "-----" << std::endl;
			month = savings[t].calculateMonthlyInterest();
			l = savings[t].read(month) + l;
			r[t] = l + savings[t].amountKept;
			std::cout << "Savings balance : $" << r[t++] << std::endl;
		}
	saved = l;
	std::cout << "Saved Account : " << std::endl;
	std::cout << saved << std::endl;
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
		l = savings[t].read(month) + r[t++];
		std::cout << "Savings balance : $" << l << std::endl;
	}
	saved = l + saved;
	std::cout << "Saved Account : " << std::endl;
	std::cout << saved << std::endl;
}
