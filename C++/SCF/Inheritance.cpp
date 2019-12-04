#pragma once

#include <string>
using namespace std;

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE };

enum Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

class Person{
private:  
	string name;

public:  
	Person() 
	{ 
		setName(""); 
	} 
	Person(string pName) 
	{ 
		setName(pName); 
	} 
	void setName(string pName) 
	{ 
		name = pName; 
	} 
	string getName() 
	{ 
		return name; 
	}
};
class Student:public Person
{
private:  
	Discipline major; 
	Person *advisor;
public:  
	void setMajor(Discipline d) 
	{ 
		major = d; 
	}  
	Discipline getMajor() 
	{ 
		return major; 
	} 
	void setAdvisor(Person *p) 
	{ 
		advisor = p; 
	}  
	Person *getAdvisor()
	{ 
		return advisor; 
	}
};

class Faculty:public Person{
private: 
	Discipline department;
public: 
	void setDepartment(Discipline d) 
	{ 
		department = d;
	}  
	Discipline getDepartment( ) 
	{ 
		return department;
	}
};

/*
class NumberArray
{
private:
	double *aPtr;
	int arraySize;
public:
	NumberArray(const NumberArray &);

};
*/



// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "inheritance.h"
/*
class NumberArray
{
private:
	double *aPtr;
	int arraySize;
public:
	NumberArray(const NumberArray &);
};*/

int main()
{
	Student studentObj;
	string name;
	Person advisor;
	int major = 0;
	int index = 0;
	cout << "Please enter the name " << endl;
	cin >> name
	studentObj.setName(name);
	cout << "Please enter the Major " << endl;
	cin >> name
		switch (name)
		{
		case 1: studentObj.setMajor(1);
			break;
		case 2: studentObj.setMajor(2);
			break;
		case 3: studentObj.setMajor(3);
			break;
		default: cout << "Incorrect input" << endl;
			return 0;
			break;
		}
	cout << "Please enter the advisor " << endl;
	cin >> advisor;
	studentObj.setAdvisor(advisor)


    return 0;
}

// create a faculty obj
// have the user input the name and department for the faculty member
// output the data for the student and faculty objects
