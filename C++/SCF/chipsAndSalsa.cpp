#include <iostream>
#include <string>
using namespace std;

int main()
{
	int index = 0;
	int month = 0;
	int totalSale = 0;
	string salsa[] = { "Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int jars [5];
	while (index < 5)
	{
		month = index + 1;
		cout << "How many " <<salsa[0] << " have you sold in " << month  <<" month: "<< endl;
		cin >> jars[index];
		totalSale = jars[index] + totalSale;
		index++;
	}
	cout << "Total Sales of month: "<< month << " of " << salsa[0] <<": " << totalSale << endl;
	index = 0;
while (index < 5)
	{
		month = index + 1;
		cout << "How many " <<salsa[1] << " have you sold in " << month  <<" month: "<< endl;
		cin >> jars[index];
		totalSale = jars[index] + totalSale;
		index++;
	}
	cout << "Total Sales of month: "<< month << " of " << salsa[1] <<": " << totalSale << endl;

	index = 0;
	while (index < 5)
	{
		month = index + 1;
		cout << "How many " <<salsa[2] << " have you sold in " << month  <<" month: "<< endl;
		cin >> jars[index];
		totalSale = jars[index] + totalSale;
		index++;
	}
	cout << "Total Sales of month: "<< month << " of " << salsa[2] <<": " << totalSale << endl;
	index = 0;
	while (index < 5)
	{
		month = index + 1;
		cout << "How many " <<salsa[3] << " have you sold in " << month  <<" month: "<< endl;
		cin >> jars[index];
		totalSale = jars[index] + totalSale;
		index++;
	}
	cout << "Total Sales of month: "<< month << " of " << salsa[3] <<": " << totalSale << endl;
	index = 0;
	while (index < 5)
	{
		month = index + 1;
		cout << "How many " <<salsa[4] << " have you sold in " << month  <<" month: "<< endl;
		cin >> jars[index];
		totalSale = jars[index] + totalSale;
		index++;
	}
	cout << "Total Sales of month: "<< month << " of " << salsa[4] <<": " << totalSale << endl;
	index = 0;
	while (index < 5)
	{
		month = index + 1;
		cout << "How many " <<salsa[5] << " have you sold in " << month  <<" month: "<< endl;
		cin >> jars[index];
		totalSale = jars[index] + totalSale;
		index++;
	}
	cout << "Total Sales of month: "<< month << " of " << salsa[5] <<": " << totalSale << endl;
	index = 0;
	return (0);
}
