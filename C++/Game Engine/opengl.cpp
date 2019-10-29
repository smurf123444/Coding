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
    double retVal(int item, int quantity, double cost)
     {
         cout << " Quantity: " << getItemNumber(item) << " Item #: " << getQuantity(quantity) << " Cost: " << getCost(cost) << endl; 
         return (0);
     }
};  
int main() {
    Inventory obj1;
    int item = 20, quantity = 40;
    double count = 60;
    obj1.retVal(item,quantity,count);
    return 0; 
} 