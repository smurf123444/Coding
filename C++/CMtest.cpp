#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void)
{
    string runner1;
    string runner2;
    string runner3;
    float minbef1, minaft1, secbef1, time1;
    float minbef2, minaft2, secbef2, time2;
    float minbef3, minaft3, secbef3, time3;
	float minAdd1, minAdd2, minAdd3, secMorph1, secMorph2, secMorph3, secaft1 = 0, secaft2, secaft3;
    cout << "First runners name?" << endl;
    cin >> runner1;
    cout << "Time? (min & sec)" << endl;
    cin >> minbef1;
    cin >> secbef1;
    minAdd1 = secbef1 / 60;
    minaft1 = minbef1 + minAdd1;
	secMorph1 = remainder(minaft1,1);
	secaft1 = secMorph1 * 60;
    time1 = (minbef1 * 60) + secbef1;
    cout << "Second runners name?" << endl;
    cin >> runner2;
    cout << "Time? (min & sec)" << endl;
    cin >> minbef2;
    cin >> secbef2;
	minAdd2 = secbef2 / 60;
	minaft2 = minbef2 + minAdd2;
	secMorph2 = remainder(minaft2, 1);
	secaft2 = secMorph2 * 60;
	time2 = (minbef2 * 60) + secbef2;
    cout << "Third runners name?" << endl;
    cin >> runner3;
    cout << "Time? (min & sec)" << endl;
    cin >> minbef3;
    cin >> secbef3;
	minAdd3 = secbef3 / 60;
	minaft3 = minbef3 + minAdd3;
	secMorph3 = remainder(minaft3, 1);
	secaft3 = secMorph3 * 60;
	time3 = (minbef3 * 60) + secbef3;
    if(time1 > time2 && time1 > time3)
    {
        cout << "The first runner wins!" << endl;
        cout << runner1 << endl;
        cout << minbef3 << endl;
        cout << secbef1 << endl;

        cout << left << setw(20) << "Total Time: " << setw(10) << right << minaft1 << ":" << secaft1 << endl;
    }
    if(time2 > time3 && time2 > time1)
    {
        cout << "The second runner wins!" << endl;
        cout << runner2 << endl;
        cout << minbef3 << endl;
        cout << secbef2 << endl;
        cout << left << setw(20) << "Total Time: " << setw(10) << right << minaft2 << ":" << secaft2 << endl;
    }
    if(time3 > time2 && time3 > time1)
    {
        cout << "The third runner wins!" << endl;
        cout << runner3 << endl;
        cout << minbef3 << endl;
        cout << secbef3 << endl;
        cout << left << setw(20) << "Total Time: " << setw(10) << right << minaft3 << ":" << secaft3 << endl;
		
    }
	system("pause");
}