#include <iostream>
using namespace std; 
class Geeks 
{ 
    // Access specifier 
    private:
    
    // Data Members 
    int itemNumber = 0;
    int quantity = 0;
    double cost = 0;
    public: 
    // Member Functions() 
    int getItemNumber(){
        int i = 0;
        i = itemNumber;
        return i;
    }
    int getQuantity(){
        int i = 0;
        i = quantity;
        return i;
    }
    double getCost(){
        double i = 0;
        i = cost;
        return i;
    }
     void resetZero() 
     { 
       itemNumber = 0;
       quantity = 0;
       cost = 0;
     } 
    double retVal(int item, int quantity, double cost)
     {
         item = getItemNumber();
         quantity = getQuantity();
         cost = getCost();
         cout << " Quantity: " << item << " Item #: " << quantity << " Cost: " << cost << endl; 
         return (0);
     }
    void setTotalCost(){
        cout << "Item #" << endl;
        cin >> itemNumber;
        cout << "Quantity" << endl;
        cin >> quantity;
        cout << "Total Cost" << endl;
        cin >> cost;
        retVal(itemNumber, quantity, cost);
     }
}; 
  
int main() { 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.setTotalCost(); 
    obj1.resetZero();
    // accessing member function 
  
    return 0; 
} 