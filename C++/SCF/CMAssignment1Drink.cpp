#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double gross = 16500;
    double result = 0;
    double result2 = 0;
    double net = .15;
    double var = .52;
    result = net * gross;
    result2 = result * var;
    cout << "Amount of Students: " << gross << endl;
    cout << "Amount who purchased 1 or more Drinks: " << result << endl;
    cout << "Amount who purchased Citrus Drinks: " << result2 << endl;
    return 0;
}