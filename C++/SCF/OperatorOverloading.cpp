// yoyo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
class numDays{
private:
int hours;
public:
	bool operator > (numDays obj) {
		return (this->hours > obj.hours);
	}
	bool operator == (numDays obj) {
		return (this->hours == obj.hours);
	}
	
	void operator --()
	{
		hours -=1 ;
	}
	numDays operator + (numDays const &obj) {
		numDays res;
		res.hours = hours + obj.hours;
		return res;
	}
	numDays(){hours = 0;}
	numDays(int a){hours = a;}
	int gethours(){return hours;}
	double getdays(){return hours/8;}
	void sethours(int a){hours = a;}
	void print(){cout << "The number of hours is : " << hours << endl;
	}
};

int main(){

	numDays b(23), a(54), c(12);
    c = a + b;
	c.print();
	system("pause");

}

