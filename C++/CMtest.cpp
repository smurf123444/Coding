#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;
int main(void)
{
	string runner1;
	string runner2;
	string runner3;
	struct std::tm time1, time2, time3;
	struct std::tm when1, when2, when3;
	cout << "First runners name?" << endl;
	cin >> runner1;
	cout << "Time?" << endl;
	cout << "Please, enter the time: (Minute, Sec)" << endl;
	cout << "Minute (By it self)" << endl;
	cin >> get_time(&when1, "%M");
	cout << "Seconds (By it self)" << endl;
	cin >> get_time(&when1, "%S");

	time1.tm_min = when1.tm_min;
	time1.tm_sec = when1.tm_sec;
	cout << "Second runners name?" << endl;
	cin >> runner2;
	cout << "Time? (min & sec)" << endl;
	cout << "Please, enter the time: (Minute, Sec) " << endl;
	cout << "Minute (By it self)" << endl;
	cin >> get_time(&when2, "%M");
	cout << "Seconds (By it self)" << endl;
	cin >> get_time(&when2, "%S");

	time2.tm_min = when2.tm_min;
	time2.tm_sec = when2.tm_sec;
	cout << "Third runners name?" << endl;
	cin >> runner3;
	cout << "Time? (min & sec)" << endl;
	cout << "Please, enter the time: (Minute, Sec) " << endl;
	cout << "Minute (By it self)" << endl;
	cin >> get_time(&when3, "%M");
	cout << "Seconds (By it self)" << endl;
	cin >> get_time(&when3, "%S");

	time3.tm_min = when3.tm_min;
	time3.tm_sec = when3.tm_sec;
	if (time1.tm_min > time2.tm_min && time1.tm_min > time3.tm_min)
	{

		cout << "Player : " << runner1 << " Wins! " << time1.tm_min << ":" << time1.tm_sec << endl;
		system("pause");
		return(0);
	}
	if (time2.tm_min > time1.tm_min && time2.tm_min > time3.tm_min)
	{

		cout << "Player : " << runner2 << " Wins! " << time2.tm_min << ":" << time2.tm_sec << endl;
		system("pause");
		return(0);
	}
	if (time3.tm_min > time2.tm_min && time3.tm_min > time1.tm_min)
	{
	
		cout << "Player : " << runner3 << " Wins! " << time3.tm_min << ":" << time3.tm_sec << endl;
		system("pause");
		return(0);
	}
	if (time3.tm_min == time2.tm_min && time3.tm_min == time1.tm_min)
	{
		if (time1.tm_min == time2.tm_min)
		{
			if (time1.tm_sec > time2.tm_sec && time1.tm_sec > time3.tm_sec)
			{
				cout << "Player : " << runner1 << " Wins! " << time1.tm_min << ":" << time1.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time1.tm_min == time3.tm_min)
		{
			if (time1.tm_sec > time3.tm_sec && time1.tm_sec > time2.tm_sec)
			{
				cout << "Player : " << runner1 << " Wins! " << time1.tm_min << ":" << time1.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time2.tm_min == time1.tm_min)
		{
			if (time2.tm_sec > time1.tm_sec && time2.tm_sec > time3.tm_sec)
			{
				cout << "Player : " << runner2 << " Wins! " << time2.tm_min << ":" << time2.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time2.tm_min == time3.tm_min)
		{
			if (time2.tm_sec > time3.tm_sec && time2.tm_sec > time1.tm_sec)
			{
				cout << "Player : " << runner2 << " Wins! " << time2.tm_min << ":" << time2.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time3.tm_min == time2.tm_min)
		{
			if (time3.tm_sec > time2.tm_sec && time3.tm_sec > time1.tm_sec)
			{
				cout << "Player : " << runner3 << " Wins! " << time3.tm_min << ":" << time3.tm_sec << endl;
				system("pause");
				return (0);
			}
		}
		if (time3.tm_min == time1.tm_min)
		{
			if (time3.tm_sec > time1.tm_sec && time3.tm_sec > time2.tm_sec)
			{
				cout << "Player : " << runner3 << " Wins! " << time3.tm_min << ": " << time3.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
	}
	system("pause");
	return (0);
}