#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
class SavingsAccount {

	int savingBalance;
	
public:
	static int annualInterestRate;
	int amountKept;
	void calculateMonthlyInterest();
	static void modifyInterestRate();
	SavingsAccount(){
		savingBalance = 0;
	}
	SavingsAccount(int amount,int interestRate = 0) {
		std::cout << "Function contructor called: " << std::endl;
		amountKept = amount;
		savingBalance = amount + savingBalance;
		std::cout << amountKept << std::endl;
	}
};