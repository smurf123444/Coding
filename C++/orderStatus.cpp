#include <iostream>

using namespace std;

void take(int &order, int &stock, int &special)
{
	int orderref, stockref, specialref;
	cout << "Number of spools Ordered : " << endl;
	cin >> orderref;
	order = orderref;
	cout << "Number of spools in stock : " << endl;
	cin >> stockref;
	stock = stockref;
	cout << "Special Shipping charges (with the standard 10$ shipping): " << endl;
	cin >> specialref;
	special = specialref;
}
void give(int &order, int &stock, int &shipping)
{
	int currentStock = 0, backOrder = 0, totalPrice = 0, totalShipping = 0, totalAmount = 0;
	currentStock = stock - order;
	totalPrice = currentStock * 100;
	if (totalPrice < 0)
	{
		totalPrice = stock * 100;
		backOrder = currentStock * -1;
		currentStock = currentStock * 0;
		totalShipping = (10 * stock) + shipping;
	}
	totalAmount = totalShipping + totalPrice;
	cout << "Stock after Order: " << currentStock << " Back Order : " << backOrder << " Total Price : " << totalPrice << " Total Shipping : " << totalShipping << " Total Amount : " << totalAmount << endl;
}
int main()
{
	int order, stock, specialref;
	
	take(order, stock, specialref);

	give(order, stock, specialref);
	system("pause");
}
