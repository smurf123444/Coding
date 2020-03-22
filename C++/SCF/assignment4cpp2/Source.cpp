#include <iostream>
#include "orderedLinkedList.h"
#include <string>
#include <stdlib.h>
#include <sstream>
int main()
{

/*	Write a program to test the Linked List
Process integers in an Ordered Linked List object
Create a menu to do the following
Provide the ability to add elements to the list
Provide the ability to print the list
Provide the ability to find the kth element of the list
Provide the ability to delete the kth element of the list
*/
	orderedLinkedList<int> obj;
	bool quit = false;
	string input = "";
	int inputInt;
	while (!quit)
	{
		cout << "Welcome to CPP 2 Assignment 4" << endl;
		cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
		cout << endl;
		cout << "1. Add elements to the list." << endl;
		cout << "2. Print the list." << endl;
		cout << "3. Find the kTh element of the list." << endl;
		cout << "4. Delete the kTh element of the list." << endl;
		cout << endl;
		cout << "Type Here : ";
		getline(cin, input);
		switch(input[0])
		{
			case 49 : 
			input = "";
			cout << "Type in a number you would like to add to the top of the list." << endl;
			getline(cin, input);
			stringstream(input) >> inputInt;
			obj.insert(inputInt);
			cout << "Added " << inputInt << " to the list."<< endl;
			break;
			case 50 : 
			input = "";
			cout << "Printing List." << endl;
			cout << endl;
			obj.print();
			cout << endl;
			break;
			case 51 : 
			input = "";
			cout << "Type an Index you would like to find in the list" << endl;
			getline(cin, input);
			stringstream(input) >> inputInt;
			cout << "Finding element" << inputInt << " in the list..."<< endl;

			obj.findKthElement(inputInt);
			
			break;
			case 52 : 
			input = "";
			cout << "Type an Index number you would like to delete" << endl;
			getline(cin, input);
			stringstream(input) >> inputInt;
			cout << "Deleting element" << input << " in the list."<< endl;

			obj.deleteKthElement(inputInt);

			break;
			default :
			cout << "Incorrect input" << endl;
			 break;
		};
	}

	return (0);

}
