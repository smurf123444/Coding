#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    char str[10];
    int date;
    double amount;
    double totalAmount;
    double county;
    double state;
    double totalTax;
    cout << "What is the month?" << endl;
    cin >> str;
    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] -= 32;
    }
    cout << "What is the year?" << endl;
    cin >> date;
    cout << "What is the amount of sales?" << endl;
    cin >> amount;
    county = amount * .02;
    state = amount * .15;
    totalTax = state + county;
    totalAmount = totalTax + amount;
    cout << "Month: " << str << " " << date << endl;
    cout << "---------" << endl;
    cout << left << setw(20) << "Total Collected: " << right << "$" << setw(10) << right << totalAmount << endl;
    cout << "Sales: " << amount << endl;
    cout << "County Sales Tax: " << county << endl;
    cout << "State Sales Tax: " << state << endl;
    cout << "Total Sales Tax: " <<  totalTax << endl;
    return 0;
}