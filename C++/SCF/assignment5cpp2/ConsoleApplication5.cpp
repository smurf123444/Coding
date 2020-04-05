// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include "linkedQueue.h"
int main() {
	linkedQueueType <int> obj;
	linkedQueueType <int> obj2;
	linkedQueueType <int> temp;
	bool quit = false;
	string inputString = "", caseString = "", itemString;
	int input = 0, item = 0, i = 0;
	int* arr = 0;
/*	obj.addQueue(55);
	obj.addQueue(11);
	obj.addQueue(66);
	obj.addQueue(45);
	obj2.addQueue(24);
	obj2.addQueue(34);
	obj2.addQueue(12);
	obj2.addQueue(44);
	obj2.printQueue();*/

	std::cout << "Welcome to PRogramming assignment #5 " << endl;
	std::cout << "Please make a selection: " << endl;
	std::cout << "1. Provide the user the option to add an element to one of the two Linked Queues" << endl;
	std::cout << "2. Provide the user the option to delete an element from one the two Linked Queues" << endl;
	std::cout << "3. Return the number of nodes in one of the two Linked Queues" << endl;
	std::cout << "4. Print the contents one of the two Linked Queues" << endl;
	std::cout << "5. Determine if the two queues are equal" << endl;
	std::cout << "6. EXIT" << endl;
	while (!quit)
	{
		std::cout << "Type Here then press [Enter] : ";
		std::getline(cin, inputString);
		stringstream(inputString) >> input;

		switch (input) {
		case 1:
			std::cout << "Add an Element to Which List?" << endl;
			std::getline(cin, caseString);
			if (caseString == "1")
			{
				std::cout << "Adding an Element to the First Queue... What Would you like to add? " << endl;
				getline(cin, itemString);
				stringstream(itemString) >> item;
				obj.addQueue(item);
				std::cout << "Item : " << item << " added to Queue #1" << endl;
			}
			if (caseString == "2")
			{
				std::cout << "Adding an Element to the Second Queue... What Would you like to add? " << endl;
				getline(cin, itemString);
				stringstream(itemString) >> item;
				obj2.addQueue(item);
				std::cout << "Item : " << item << " added to Queue #2" << endl;
			}
			//Provide the user the option to add an element to one of the two Linked Queues
			break;
		case 2:
			caseString = "";
			itemString = "";
			item = 0;
			i = 0;
			std::cout << "Delete an Element to Which List?" << endl;
			std::getline(cin, caseString);
			if (caseString == "1")
			{
				std::cout << "Deleting an Element on the First Queue... What Would you like to delete? " << endl;
				getline(cin, itemString);
				stringstream(itemString) >> item;
				arr = obj.printQueue();
				i = 0;
				while (i < obj.countFunc())
				{
					if (arr[i] == item)
					{
						std::cout << "ITEM FOUND" << endl;
						obj.Delete(obj, item);
						i++;
					}
					else {
						std::cout << "..Searching.." << endl;
						i++;

					}
					
				}
				std::cout << "Item : " << item << " deleted from Queue #1" << endl;
			}
			if (caseString == "2")
			{
				std::cout << "Adding an Element to the Second Queue... What Would you like to add? " << endl;
				getline(cin, itemString);
				stringstream(itemString) >> item;
				obj2.addQueue(item);
				std::cout << "Item : " << item << " added to Queue #2" << endl;
			}
			//Provide the user the option to delete an element from one the two Linked Queues
			break;
		case 3:
			caseString = "";
			itemString = "";
			item = 0;
			i = 0;
			std::cout << "Return Count of Which List?" << endl;
			std::getline(cin, caseString);
			if (caseString == "1")
			{
				std::cout << obj.countFunc() << endl;
			}
			else if (caseString == "2")
			{
				std::cout << obj2.countFunc() << endl;
			}
			// Return the number of nodes in one of the two Linked Queues
			break;
		case 4:
			caseString = "";
			itemString = "";
			item = 0;
			i = 0;
			std::cout << "Print Elements to Which List?" << endl;
			std::getline(cin, caseString);
			if (caseString == "1")
			{
				obj.printQueue();
			}
			else if (caseString == "2")
			{
				obj2.printQueue();
			}
			// Print the contents one of the two Linked Queues
			break;
		case 5:
			caseString = "";
			itemString = "";
			item = 0;
			i = 0;
			std::cout << "Are Both lists Equal? (True or False)" << endl;
			if (obj == obj2)
			{
				std::cout << "Yes, Both objects are equal." << endl;

			}
			else
			{
				std::cout << "Titysss!!" << endl;
			}
			// Determine if the two queues are equal
			break;
		case 6:
			quit = true;
			
			break;
		default:
			break;
		}
	}
	//obj == obj2;
	//obj = obj2;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
