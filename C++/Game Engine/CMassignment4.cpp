/*
Christopher Manning 
Assignment #4: Inventory Class
Page 501 Problem #7
COP2224 Tues 6-8:50 p.m.
*/

#include <iostream>
using namespace std; 
class Inventory 
{ 
    // Access specifier 
    private: 
    // Data Members 
    int itemNumber;
    int quantity;
    double cost;
    public: 
    // Member Functions() 
    int getItemNumber(int in){
        itemNumber = in;
        return itemNumber;
    }
    int getQuantity(int qn){
        quantity = qn;
        return quantity;
    }
    double getCost(double c){
        cost = c;
        return cost;
    }
    //default constructor
     Inventory() 
     { 
       itemNumber = 0;
       quantity = 0;
       cost = 0;
     }
    void getTotalCost(int item, int quantity, double cost)
     {
         double costTotal;
         costTotal = quantity * item;
         cout << " Item #: " << getItemNumber(item) << endl;
         cout << " Quantity: " << getQuantity(quantity) << endl;
         cout << " Cost Per: " << getCost(cost) << endl;
         cout << " Cost Total: " << costTotal << endl;
     }
};  
int main() {
    Inventory obj1;
    int i, q;
    double c;
    bool quit = false;
    cout << " Welcome to Assignment 4 " << endl;
    cout << " This program is designed to calculate total cost (quantity * item number) " <<endl;
    cout << " Press 0 to Continue and Press 1 to Quit " << endl;
    cin >> quit;
    if(quit){
        return (0);
    }
    while (!quit)
    {
    cout << "Step #" << endl;
    cout << "1. Enter the Inventory" << endl;
    cin >> i;
    cout << "2. Enter the Quantity" << endl;
    cin >> q;
    cout << "3. Enter the Cost per Item." << endl;
    cin >> c;
    obj1.getTotalCost(obj1.getItemNumber(i),obj1.getQuantity(q),obj1.getCost(c));
    cout << "Press 0 to Continue and Press 1 to Quit" << endl;
    cin >> quit;
    }
    return 0; 
} 