#include "Header.hpp"
using namespace std;
int SavingsAccount::calculateMonthlyInterest()
{
	float t = 0;
	t = (annualInterestRate * amountKept) / 12 ;
	//multiply balance by annualInterestRate then divide by 12 for monthly
	savingBalance = t + savingBalance;
	cout << "Amount : $";
	cout << amountKept << endl;
	cout << "Monthly interest charge : $"; 
	cout << t << endl;
	
	return(t);
}
void SavingsAccount::modifyInterestRate()
{
//set static member function to new value : SavingsAccount::annualInterestRate = new variable;

}
