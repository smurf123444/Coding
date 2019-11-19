#pragma once
#include <iostream>
class SavingsAccount {
	int savingBalance = 0;
public:
	static float annualInterestRate;
	float amountKept;
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
	SavingsAccount(float amount,int interestRate = 0) {
		amountKept = amount;
	}
};
