

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
	PayRoll()
	{
		hoursWorked = 0;
		payRate = 0;

			cout << "input Pay Rate here : " << endl;
			cin >> payRate;
			cout << "Input Hours Worked : " << endl;
			cin >> hoursWorked;
			cout << "Total Pay" << endl;

			cout << grossPay() << endl;
			cout << "Would you like to quit? 0 for No 1 for Yes" << endl;
			cin >> quit;
			if (quit == true) {
				return;
			}

	}

};
int main() 
{
	int i = 0;
	const int array = 7;
	bool quit = false;

	cout << "Welcome to program Quit? 0 for No 1 for Yes" << endl;
	cin >> quit;
	if (quit == true)
	{
		return 0;
	}
	while (i <= array && !quit)
	{
		PayRoll obj1[array];

		cout << "Would you like to quit? 0 for No 1 for Yes" << endl;
		cin >> quit;

	}
	return 0;
}
