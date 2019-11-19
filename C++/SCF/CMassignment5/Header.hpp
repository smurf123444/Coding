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
	void outPut()
	{
		std::cout << "New Saving Balance" << std::endl;
		std::cout << savingBalance << std::endl;
	}
	int read(int num){
		savingBalance = num + savingBalance;
		outPut();
		return (num);
	}
	SavingsAccount(float amount,int interestRate = 0) {
		amountKept = amount;
	}
};
