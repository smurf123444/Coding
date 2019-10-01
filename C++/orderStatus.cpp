/*Christopher Manning Assignment #15 */
#include <iostream>

using namespace std;
//this function is will change the values in the main program using reference.
void take(int &order, int &stock, int &special)
{
	//initialize the ints to use
	int orderref, stockref, specialref;
	cout << "Welcome to Order Status, This Program will\ngenerate a Total amount and the Stock\nthat is left over as well as a Back Order log." << endl;
	cout << "Please enter the following..." << endl;
	cout << "Number of spools Ordered : " << endl;
	//take in the orderref and assing to order.
	cin >> orderref;
	order = orderref;
	cout << "Number of spools in stock : " << endl;
	//take in the stockref and assign to stock.
	cin >> stockref;
	stock = stockref;
	cout << "Special Shipping charges (with the standard 10$ shipping): " << endl;
	//take in the specialref and assign to special.
	cin >> specialref;
	special = specialref;
}
void give(int order, int stock, int shipping)
{
	int currentStock = 0, backOrder = 0, totalPrice = 0, totalShipping = 0, totalAmount = 0;
	//give current stock based on stock - order
	currentStock = stock - order;
	//give me the total price regardless if its a negative.
	totalPrice = currentStock * 100;
	//if total price is negative, begin to parse information with proper calculation to revert the numbers to
	//useful numbers instead of garbage or negatives.
	if (totalPrice < 0)
	{
		//if total price is negative, then take original stock and multiply by 100 for price.
		totalPrice = stock * 100;
		//since the total price is negative, indicating weve gone over our stock supply,
		//back order will be given the value of current stock in its positive form(giving us the over drawn amount).
		backOrder = currentStock * -1;
		//if totale price is negative, then current stock is empty and is set to 0 for assurance.
		currentStock = currentStock * 0;
		//since total price is negative, total shipping will be based on all stock avalible at the start.
		//to not confuse the process.
		totalShipping = (10 * stock) + shipping;
	}
	//if the total price is not negative, then we must calculate what we need for shipping based on currentstock (i believe)
	totalShipping = (10 * currentStock) + shipping;
	//total amount is given the proper value of shipping + price.
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
