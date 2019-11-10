#include <iostream>
#include <string>
using namespace std;
class PayRoll
{
private:
	int hoursWorked = 0, payRate = 0;

public:
	bool quit = false;
	int grossPay() {
		int total = 0;
		total = payRate * hoursWorked;
		return (total);
	}
	void function()
	{
		hoursWorked = 0;
		payRate = 0;
			cout << "input Pay Rate here : " << endl;
			cin >> payRate;
			cout << "Input Hours Worked : " << endl;
			cin >> hoursWorked;
			cout << "Total Pay" << endl;
			cout << grossPay() << endl;
	}
};
int main() 
{
	int i = 1, t = 0;
	const int array = 7;
	string quit = "0";
	PayRoll obj1[array];
	cout << "Welcome to program Quit? 0 for No 1 for Yes" << endl;
	getline(cin,quit);
	if (quit == "1")
	{
		return 0;
	}
	while (i <= array)
	{
		
		cout << "Pay Roll item # " << i++ << endl;
		obj1[t++].function();
		cout << "Would you like to quit? 0 for No 1 for Yes" << endl;
		cin >> quit;
		if (quit == "1")
		{
			return (0);
		}
	}
	if (quit != "1") {
		obj1[0];
	}
	return 0;
}
