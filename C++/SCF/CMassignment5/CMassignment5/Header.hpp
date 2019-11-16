
#pragma once

#include <iostream>
class SavingsAccount {

	int savingBalance;
	
public:
	static int annualInterestRate;
	int amountKept;
	int calculateMonthlyInterest();
	static void modifyInterestRate();
	SavingsAccount(){
		savingBalance = 0;
	}
	int read(int num){
		savingBalance = num + savingBalance;
		return (num);
	}
	SavingsAccount(float amount,int interestRate = 0) {
		amountKept = amount;
	}
};