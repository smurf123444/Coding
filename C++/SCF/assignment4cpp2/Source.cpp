#include <iostream>
#include "orderedLinkedList.h"
#include <string>
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
		inputInt = input[0];
		switch(inputInt)
		{
			case 1 : 
			input = "";
			cout << "Type in a number you would like to add to the top of the list." << endl;
			getline(cin, input);
			obj.insert(input[0]);
			cout << "Added " << input[0] << " to the list."<< endl;
			break;
			case 2 : 
			input = "";
			cout << "Printing List." << endl;
			obj.print();
			break;
			case 3 : 
			input = "";
			cout << "Type an Index you would like to find in the list" << endl;
			getline(cin, input);
			cout << "Finding element" << input[0] << " in the list..."<< endl;

			obj.findKthElement(input[0]);
			
			break;
			case 4 : 
			input = "";
			cout << "Type an Index number you would like to delete" << endl;
			getline(cin, input);
			cout << "Deleting element" << input[0] << " in the list."<< endl;

			obj.deleteKthElement(input[0]);

			break;
			default :
			cout << "Incorrect input" << endl;
			 break;
		};
	}

	return (0);

}