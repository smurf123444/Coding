#include "Header.hpp"

void SavingsAccount::calculateMonthlyInterest()
{
	int n = 0, t = 0;
	t = annualInterestRate * amountKept;
	//multiply balance by annualInterestRate then divide by 12 for monthly
	n = t / 12; 
	std::cout << amountKept << std::endl;
	std::cout << n << std::endl;
}
void SavingsAccount::modifyInterestRate()
{
//set static member function to new value : SavingsAccount::annualInterestRate = new variable;

}
