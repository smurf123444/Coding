// This program demonstrates a simple class.

#include <iostream>

using namespace std;
void countPerfect(int c[5])
{
	int i = 0;
	while (i < 5)
	{
		if (c[i] = 100) {
			cout << c[i++];
		}
		else
		{
			cout << endl;
		}
	}
}
int main()
{
	int i = 0;
	int array[5];
	
	while (i < 5)
	{
		cout << "Enter Test Scores" << endl;
		cin >> array[i++];
	}
}
/*Circle class declaration
class Date {
private:
	int day, year;
	string month;
public:
	void setDate(const string m, int d, int y)
	{
		month = m;
		day = d;
		year = y;
	}
	void getDate()
	{
		cout << "The Month is " << month << " The day is " << day << " the year is " << year;
	}
};
int main()
{
	Date date1;

	date1.setDate(May, 33, 1995);

	cout << date1.getDate() << endl;
	system("pause");
	return 0;
}
*/