#include "Header.hpp"
float SavingsAccount::annualInterestRate = .03;
int main()
{
	int l = 0, t = 0, q = 0;
	float saved = 0;
	const int array = 5;
	//int r[5];
	SavingsAccount savings[array]= {(2000), (4000), (8000), (16000), (32000)};
	std::cout << std::endl;
	while (t < array)
	{
		int month; 
		std::cout << " Original Savings" << std::endl;
		std::cout << std::endl;
		std::cout << " Item # " << t << std::endl;
		std::cout << "-------" << std::endl;
		std::cout << std::endl;
		std::cout << savings[t++].amountKept << std::endl;
		std::cout << std::endl;
	} 
	t = 0;
	l = 0;
	while (t < array)
		{
			int month;
			std::cout << std::endl;
			std::cout << " /////////////////////////////// " << std::endl;
			std::cout << std::endl;
			std::cout << " >> Month # 1 << " << std::endl;
			std::cout << std::endl;
			std::cout << "  > Item #  " << t << " < " << std::endl;
			std::cout << std::endl;
			month = savings[t].calculateMonthlyInterest();
			l = savings[t].read(month) + l;
			//r[t] = l;
			std::cout << std::endl;
			std::cout << " Savings balance for Month 1 Item #" << t << ": $" << l + savings[t++].amountKept << std::endl;
			std::cout << std::endl;
		}
	saved = l;
	q = saved;
	//std::cout << "Saved Account : " << std::endl;
	//std::cout << saved << std::endl;
	SavingsAccount::modifyInterestRate(.04);
	t = 0;
	int month;
	month = saved;
	//std::cout << "TEST : L VALUE = " << l << std::endl;
	while (t < array)
	{
		
		std::cout << std::endl;
		std::cout << " /////////////////////////////// " << std::endl;
		std::cout << std::endl;
		std::cout << " >> Month # 2 << " << std::endl;
		std::cout << std::endl;
		std::cout << "  > Item #  " << t << " < " << std::endl;
		std::cout << std::endl;
		month = savings[t].calculateMonthlyInterest() + month;
		l = savings[t].read(month);
		std::cout << std::endl;
		std::cout << " Savings balance for Month 2 Item #" << t << ": $" << l << std::endl;
		std::cout << " Amount after monthly interest charge (including previous month if applicable) : $";
		std::cout << savings[t++].amountKept + l << std::endl;
		std::cout << std::endl;
	}
	std::cout << " /////////////////////////////// " << std::endl;
	saved = l + saved;
	//std::cout << "Saved Account : " << std::endl;
	//std::cout << saved << std::endl;
}
