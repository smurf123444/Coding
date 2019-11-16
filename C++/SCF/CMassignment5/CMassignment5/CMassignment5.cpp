// CMassignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.hpp"

using namespace std;
int SavingsAccount::annualInterestRate = 3;

int main()
{
	int l = 0, t = 0;
	const int array = 5;
	SavingsAccount savings[array]= {(2333), (4333), (2543), (6533)};
	
	string annual = " ";
	cout << "Savings array item #1" << endl;
	cout << savings[t].amountKept << endl;
	
		//cout << "Test" << endl;
	while (t < array)
		{
			savings[t++].calculateMonthlyInterest();
			//savings[l++].calculateMonthlyInterest();
			//SavingsAccount::write(9);
			//cout << t++ << endl;
		}
	
	
	cout << "RESULT" << endl;
	cout << l << endl;
}
	/*
		getline(cin, annual);
		int stream = stoi(annual);
		cout << stream << endl;
		t = savings[l].calculateMonthlyInterest(stream) + t;
		cout << savings[l++].calculateMonthlyInterest(stream) << endl;
		*/
		
//static member function 

/*
void switchEnds(int* array, int size);
int main()
{
	
	const int size = 9;
	int activity[size] = { 8, 13, 42, 2, 19, 9, 3, 4, 2 };
	//length = new int[];
	switchEnds(activity, size);
}
void switchEnds(int* array, int size)
{
	int first, last; 
	first = *array;
	last = *(array + size - 1);
	*array = last;
	cout << " First: " << first << endl << " Last: " << *array << endl;
}*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
