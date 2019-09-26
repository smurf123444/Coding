#include <iostream>

using namespace std;

int take()
{
	int order, stock, special;
	int orderref, stockref, specialref;
	cout << "Order : " << endl;
	cin >> order;
	cout << "Stock : " << endl;
	cin >> stock;
	cout << "Special : " << endl;
	cin >> special;
	orderref = order;
	stockref = stock;
	specialref = special;
	cout << "Order : " << order << " " << "Stock : " << stock << " " << "Special : " << special << endl;
}

void give(int &ordermod, int &stockmod, int &specialmod)
{
	ordermod = 10;
	stockmod = 10;
	specialmod = 10;
}

int main()
{

	cout << "Old Value : " << take() << endl;
	give()
	cout << "New Value : " << endl;
	system("pause");
}