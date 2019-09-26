#include <iostream>

using namespace std;

int take(int &order, int &stock, int &special)
{
	int orderref, stockref, specialref;
	orderref = order;
	stockref = stock;
	specialref = special;
	cout << "Old Order Val : " << orderref << " Old Stock Val : "<<stockref	 << " Old Special Val : "<< specialref << endl;
	//cout << "Order : " << order << " " << "Stock : " << stock << " " << "Special : " << special << endl;
	return (0);
}

void give(int &ordermod, int &stockmod, int &specialmod)
{
	int currentStock = 0, stock, backOrder = 0, readyToShip = 100, totalShipping = 10, totalAmount;
	stock = 0	;
	currentStock = stockmod - ordermod;
	if (currentStock < 0)
	{
		backOrder = currentStock * 1;
	}

	
	totalShipping = (currentStock * specialmod) + (currentStock * 10);

	cout << "Current Stock: " << currentStock << " Back Order : "<< backOrder << " Ready to ship : " << readyToShip <<" Total Shipping : "<< totalShipping <<endl;
}

int main()
{
	int order, stock, specialref;
	cout << "Number of spools Ordered : " << endl;
	cin >> order;
	cout << "Number of spools in stock : " << endl;
	cin >> stock;
	cout << "Special Shipping charges (with the standard 10$ shipping): " << endl;
	cin >> specialref;
	take(order,stock, specialref);
	give(order, stock, specialref);
	system("pause");
}
