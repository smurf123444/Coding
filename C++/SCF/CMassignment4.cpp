/*
Christopher Manning 
Assignment #4: Inventory Class
Page 501 Problem #7
COP2224 Tues 6-8:50 p.m.
*/

#include <iostream>
#include <string>
using namespace std; 
class Inventory 
{ 
    // Access specifier 
    private: 
    // Data Members 
    int itemNumber;
    string description;
    int quantity;
    double cost;
    public: 
    // Member Functions() 
    string setDescription(string des)
	{
		description = des;
        return(description);
	}
    int setItemNumber(int in){
        itemNumber = in;
        return itemNumber;
    }
    int setQuantity(int qn){
        quantity = qn;
        return quantity;
    }
    double setCost(double c){
        cost = c;
        return cost;
    }
    //default constructor
  	Inventory()
	{
		description = "";
		itemNumber = 0;
		quantity = 0;
		cost = 0;
	}
    Inventory(string desc, int num, int q, double c)
	{
		setDescription(desc);
		setItemNumber(num);
		setQuantity(q);
		setCost(c);
	}
    void getItemNumber()
    {
    cout << " Item Number         : " << itemNumber << endl;
    }
    void getQuantity()
    {
         cout << " Quantity            : " << quantity << endl;
    }
    void getCost()
    {
         cout << " Cost                : " << "$" << cost << endl;
    }
    void getDescription()
    {
        cout << " Description         : " << "\"" << description << "\"" << endl;
    }
    void getTotalCost()
     {
         double costTotal;
         costTotal = quantity * cost;
         cout << " Total Cost          : " << "$" << costTotal << endl;
     }
};  
int main() {
    string desc;
    int i, q;
    double c;
    bool quit = false;
    cout << " Welcome to Assignment 4 " << endl;
    cout << " This program is designed to calculate total cost (quantity * cost) " <<endl;
    cout << " Press 0 to Continue and Press 1 to Quit " << endl;
    cin >> quit;
    if(quit){
        return (0);
    }
    while (!quit)
    {
    cout << "Step #" << endl;
    cout << "1. Enter the Description" << endl;
    cin >> desc;
    cout << "2. Enter the Item Number" << endl;
    cin >> i;
    cout << "3. Enter the Quantity" << endl;
    cin >> q;
    cout << "4. Enter the Cost per Item." << endl;
    cin >> c;
    Inventory obj1(desc, i, q, c);
    cout << "--------------------" << endl;
    cout << ">>>>>>RESULTS<<<<<<" << endl;
    cout << "--------------------" << endl;
    //obj1.setDescription(desc),obj1.setItemNumber(i),obj1.setQuantity(q),obj1.setCost(c)
    obj1.getDescription();
	obj1.getItemNumber();
	obj1.getQuantity();
	obj1.getCost();
	obj1.getTotalCost();
    cout << "Press 0 to Continue and Press 1 to Quit" << endl;
    cin >> quit;
    }
    return 0; 
} 
