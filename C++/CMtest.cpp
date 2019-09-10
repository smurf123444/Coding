#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;
int main(void)
{
	// runners in string format
	string runner1;
	string runner2;
	string runner3;
	//time variables, both for input and manipulation
	struct std::tm time1, time2, time3;
	struct std::tm when1, when2, when3;
	//Start asking questions of who came when
	cout << "First runners name?" << endl;
	cin >> runner1;
	cout << "Please, enter the time: (Minute, Sec)" << endl;
	cout << "Minute (By it self)" << endl;
	//use get_time from <ctime> and store information based on format.
	//minutes = %M
	cin >> get_time(&when1, "%M");
	cout << "Seconds (By it self)" << endl;
	//seconds = %S
	cin >> get_time(&when1, "%S");
	//Assign input to manipulation variables, to combat garbage values.
	time1.tm_min = when1.tm_min;
	time1.tm_sec = when1.tm_sec;
	//continue to next players with same method (function)
	cout << "Second runners name?" << endl;
	cin >> runner2;
	cout << "Please, enter the time: (Minute, Sec) " << endl;
	cout << "Minute (By it self)" << endl;
	cin >> get_time(&when2, "%M");
	cout << "Seconds (By it self)" << endl;
	cin >> get_time(&when2, "%S");

	time2.tm_min = when2.tm_min;
	time2.tm_sec = when2.tm_sec;
	cout << "Third runners name?" << endl;
	cin >> runner3;
	cout << "Please, enter the time: (Minute, Sec) " << endl;
	cout << "Minute (By it self)" << endl;
	cin >> get_time(&when3, "%M");
	cout << "Seconds (By it self)" << endl;
	cin >> get_time(&when3, "%S");

	time3.tm_min = when3.tm_min;
	time3.tm_sec = when3.tm_sec;
	//comparing the min to other players, if player 1 is less in minutes then automatic win (same for player 2 and 3)
	if (time1.tm_min < time2.tm_min && time1.tm_min < time3.tm_min)
	{

		cout << "Player : " << runner1 << " Wins! " << time1.tm_min << ":" << time1.tm_sec << endl;
		system("pause");
		return(0);
	}
	if (time2.tm_min < time1.tm_min && time2.tm_min < time3.tm_min)
	{

		cout << "Player : " << runner2 << " Wins! " << time2.tm_min << ":" << time2.tm_sec << endl;
		system("pause");
		return(0);
	}
	if (time3.tm_min < time2.tm_min && time3.tm_min < time1.tm_min)
	{
	
		cout << "Player : " << runner3 << " Wins! " << time3.tm_min << ":" << time3.tm_sec << endl;
		system("pause");
		return(0);
	}
	//if minutes equal on all players
	if (time3.tm_min == time2.tm_min && time3.tm_min == time1.tm_min)
	{
		if (time1.tm_sec == time2.tm_sec && time1.tm_sec != time3.tm_sec)
		{
			cout << "First Runner : " << runner1 << " tied with the Second Runner: " << runner2 << endl;
			system("pause");
			return (0);
		}
		if (time1.tm_sec == time3.tm_sec && time1.tm_sec != time2.tm_sec)
		{
			cout << "First Runner : " << runner1 << " tied with the Third Runner: " << runner3 << endl;
			system("pause");
			return (0);
		}
		if (time3.tm_sec == time2.tm_sec && time3.tm_sec != time1.tm_sec)
		{
			cout << "Second Runner : " << runner2 << " tied with the Third Runner: " << runner3 << endl;
			system("pause");
			return (0);
		}
		if (time3.tm_sec == time2.tm_sec && time3.tm_sec == time1.tm_sec)
		{
			cout << runner1<< ", " << runner2<< ", & " << runner3 << " all tied! " << time3.tm_min << ":" << time3.tm_sec << endl;
			system("pause");
			return (0);
		}
		// if minutes of player 1 is specifically equal to player 2 
		if (time1.tm_min == time2.tm_min)
		{
			//then compare the seconds of player 1 with both player 2 and 3
			if (time1.tm_sec < time2.tm_sec && time1.tm_sec < time3.tm_sec)
			{
				// if player one sec are less then player one wins 
				cout << "Player : " << runner1 << " Wins! " << time1.tm_min << ":" << time1.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time1.tm_min == time3.tm_min)
		{
			if (time1.tm_sec < time3.tm_sec && time1.tm_sec < time2.tm_sec)
			{
				cout << "Player : " << runner1 << " Wins! " << time1.tm_min << ":" << time1.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time2.tm_min == time1.tm_min)
		{
			if (time2.tm_sec < time1.tm_sec && time2.tm_sec < time3.tm_sec)
			{
				cout << "Player : " << runner2 << " Wins! " << time2.tm_min << ":" << time2.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time2.tm_min == time3.tm_min)
		{
			if (time2.tm_sec < time3.tm_sec && time2.tm_sec < time1.tm_sec)
			{
				cout << "Player : " << runner2 << " Wins! " << time2.tm_min << ":" << time2.tm_sec << endl;
				system("pause");
				return(0);
			}
		}
		if (time3.tm_min == time2.tm_min)
		{
			if (time3.tm_sec < time2.tm_sec && time3.tm_sec < time1.tm_sec)
			{
				cout << "Player : " << runner3 << " Wins! " << time3.tm_min << ":" << time3.tm_sec << endl;
				system("pause");
				return (0);
			}
		}
		if (time3.tm_min == time1.tm_min)
		{
			if (time3.tm_sec < time1.tm_sec && time3.tm_sec < time2.tm_sec)
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