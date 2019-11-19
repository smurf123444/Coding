#include "Header.hpp"

float SavingsAccount::calculateMonthlyInterest()
{
	float t = 0;
	t = (annualInterestRate * amountKept) / 12 ;
	//multiply balance by annualInterestRate then divide by 12 for monthly
	std::cout << " Amount : $";
	std::cout << amountKept << std::endl;
	std::cout << " Monthly interest charge : $"; 
	std::cout << t << std::endl;

	return(t);
}
void SavingsAccount::modifyInterestRate(float input)
{
//set static member function to new value : SavingsAccount::annualInterestRate = new variable;
	annualInterestRate = input;
}
