
#pragma once

#include <iostream>
class SavingsAccount {

	int savingBalance = 0;
	
public:
	static float annualInterestRate;
	int amountKept;
	int calculateMonthlyInterest();
	static void modifyInterestRate(float input);
	SavingsAccount(){
		savingBalance = 0;
		amountKept = 0;
	}
	int read(int num){
		savingBalance = num + savingBalance;
		return (num);
	}
	void write() {
		std::cout << savingBalance << std::endl;
	}
	SavingsAccount(float amount,int interestRate = 0) {
		amountKept = amount;
		
	}
};