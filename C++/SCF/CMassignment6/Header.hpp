#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <iomanip>
class SavingsAccount {
	int savingBalance = 0;
public:
	static float annualInterestRate;
	float amountKept;
	float calculateMonthlyInterest();
	static void modifyInterestRate(float input);
	SavingsAccount(){
		savingBalance = 0;
		amountKept = 0;
	}
	float read(float num){
		savingBalance = num + savingBalance;
		return (num);
	}
	SavingsAccount(float amount,int interestRate = 0) {
		amountKept = amount;
	}
};
#endif
