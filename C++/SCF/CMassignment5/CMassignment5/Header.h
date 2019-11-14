#pragma once
#include <string>
#include <iostream>
#include <sstream>
class SavingsAccount {
	static int annualInterestRate;
	static int savingBalance;
public:
	static int calculateMonthlyInterest(int annual);
	static int write(int write);
	static int modifyInterestRate(int write);
	SavingsAccount() {

	}
};