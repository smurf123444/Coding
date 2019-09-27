#include <iostream>

using namespace std;

int take(int &order, int &stock, int &special)
{
	int orderref, stockref, specialref;
	orderref = order;
	stockref = stock;
	specialref = special;
	//cout << "Order : " << order << " " << "Stock : " << stock << " " << "Special : " << special << endl;
	return (0);
}

void give(int &order, int &stock, int &special)
{
	int currentStock = 0, backOrder = 0, readyToShip = 0, totalShipping = 0, totalAmount = 0;
	currentStock = stock - order;
	if (currentStock < 0)
	{
		backOrder = currentStock * 1;
	}
	else
	{
		backOrder = 0;
	}
	readyToShip = currentStock * 100;
	totalShipping = (currentStock * special) + (currentStock * 10);
	totalAmount = readyToShip + totalShipping;
	cout << "Stock after Order: " << currentStock << " Back Order : "<< backOrder << " Ready to ship : " << readyToShip <<" Total Shipping : "<< totalShipping << " Total Amount : " << endl;
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
/*	//write a program 1-10 display roman numeral
	int choice = 0;
	bool quit = false;
	do {
		cout << "Enter value to be converted (0 to exit)" << endl;
		cin >> choice;
		while ((choice <= 0) || (choice >= 9))
		{
			if ((choice >= 0) && (choice <= 5))
			{
				break;
			}
			cout << "Enter something 1-5" << endl;
		}
		if (choice >= 0 && choice <= 9)
		{
			switch (choice)
			{
			case 1:
				cout << "I" << endl;
				system("pause");

				break;
			case 2:
				cout << "II" << endl;
				system("pause");

				break;
			case 3:
				cout << "III" << endl;
				system("pause");

				break;
			case 4:
				cout << "IV" << endl;
				system("pause");

				break;
			case 5:
				cout << "V" << endl;
				system("pause");
				break;
			case 0:
				cout << "peace out" << endl;
				quit = true;
				system("pause");
				return (0);
				break;
			default:
				std::cout << "Enter the correct input\n" << endl; // no error
				break;
			}
		}
	} while (!quit);
}*/
	
