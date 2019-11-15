#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
class SavingsAccount {
	static int annualInterestRate;
	static int savingBalance;
public:
	static int calculateMonthlyInterest(int annual);
	static int write(int write);
	static int modifyInterestRate(int write);
	SavingsAccount(){
		std::cout << "Constructor" << std::endl;
	}
	SavingsAccount(int amount,int interestRate = 0) {
		std::cout << "Function contructor called: " << std::endl;
		this->annualInterestRate = interestRate + this->annualInterestRate;
		this->savingBalance = amount + this->savingBalance;
		std::cout << "Savings Balance : "<< this->savingBalance << std::endl;
		std::cout << "Annual Interest Rates." <<this->annualInterestRate << std::endl;
	}
};