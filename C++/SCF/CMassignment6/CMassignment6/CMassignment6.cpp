#include "Header.hpp"
float SavingsAccount::annualInterestRate = .03;
int main()
{
	int  t = 0;
	float l = 0, q = 0;
	float saved = 0;
	const int array = 5;
	float r[5];
	float h[5];
	SavingsAccount savings[array] = { (2000), (4000), (8000), (16000), (32000) };

	std::cout << std::endl;
	std::cout << "Welcome to Assignment 6! This will calculate interest based on declared class array arguments that are sent to the contrustor for its processing" << std::endl;
	std::cout << "The Variables are $2000, $4000, $8000, $16000, $32000" << std::endl;
	std::cout << "We will begin by calculating each variable with the interest rate of 3% or .03" << std::endl;
	while (t < array)
	{
		int month;
		std::cout << std::endl;
		std::cout << " /////////////////////////////// " << std::endl;
		std::cout << std::endl;
		std::cout << " Interest Rate : 3%" << std::endl;
		std::cout << std::endl;
		std::cout << " >> Month # 1 << " << std::endl;
		std::cout << std::endl;
		std::cout << "  > Item #  " << t << " < " << std::endl;
		std::cout << std::endl;
		month = savings[t].calculateMonthlyInterest();
		r[t] = savings[t].read(month);
		std::cout << std::endl;
		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(2);
		std::cout << std::fixed << " Savings balance for Month 1 Item #" << t << ": $" << r[t] + savings[t++].amountKept << std::endl;
		std::cout << std::endl;
	}
	saved = l;
	q = saved;
	//std::cout << "Saved Account : " << std::endl;
	//std::cout << saved << std::endl;
	SavingsAccount::modifyInterestRate(.04);
	t = 0;
	float month = 0;

	//std::cout << "TEST : L VALUE = " << l << std::endl;
	while (t < array)
	{
		month = 0;
		std::cout << std::endl;
		std::cout << " /////////////////////////////// " << std::endl;
		std::cout << std::endl;
		std::cout << " Interest Rate : 4%" << std::endl;
		std::cout << std::endl;
		std::cout << " >> Month # 2 << " << std::endl;
		std::cout << std::endl;
		std::cout << "  > Item #  " << t << " < " << std::endl;
		std::cout << std::endl;
		month = savings[t].calculateMonthlyInterest() + r[t];
		h[t] = savings[t].read(month);
		std::cout << std::endl;
		std::cout << " Savings balance for Month 1 + Month 2 Item #" << t << ": $" << h[t] << std::endl;
		std::cout << " Amount after monthly interest charge (including previous month if applicable) : $";
		std::cout << savings[t].amountKept + h[t++] << std::endl;
		std::cout << std::endl;
	}
	std::cout << " /////////////////////////////// " << std::endl;
	saved = l + saved;
	system("pause");
	//std::cout << "Saved Account : " << std::endl;
	//std::cout << saved << std::endl;
}
