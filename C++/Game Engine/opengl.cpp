#include <iostream>
using namespace std; 
class Geeks 
{ 
    // Access specifier 
    private:
    
    // Data Members 
    int itemNumber;
    int quantity;
    double cost;
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
    void setTotalCost(){
       
        cout << "Item #" << endl;
        cin >> itemNumber;
        cout << "Quantity" << endl;
        cin >> quantity;
        cout << "Total Cost" << endl;
        cin >> cost;
     }
     void setZero() 
     { 
       itemNumber = 0;
       quantity = 0;
       cost = 0;
     } 
     double retVal(int item, int quantity, double cost)
     {
         int i, q;
         double c;
         i = item;
         q = quantity;
         c = cost;
         return (0);
     }
    
}; 
  
int main() { 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.setTotalCost(); 
    cout << " Quantity: " << obj1.getQuantity() << " Item #: " << obj1.getItemNumber()<< " Cost: " << obj1.getCost() << endl; 
    // accessing member function 
  
    return 0; 
} 