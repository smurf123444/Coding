#include <iostream>
#include "extPersonType.h"
#include "personType.h"


/*
i. Load the data into the address book from a disk.
iii. Search for a person by last name.
iv. Print the address, phone number, and date of birth (if it exists) of a
given person.
v. Print the names of the people whose birthdays are in a given month.
vii. Depending on the user’s request, print the names of all family
members, friends, or business associates.
*/
/*
Create the addressType class as outlined in the problem
Create the extpersonType class using the personType class as outlined in the problem

Create the addressBookType class using the extPersonType, addressType and dateType classes as outlined in the problem

Follow the listed operations (I), (iii), (iv), (v) and (vii) in the problem. You will need to create a menu with 5 options as follows (operations (ii) and (vi) are not required for this assignment)

In (i), do not load the file from disk – provide the user a menu option with the ability to enter the personal information, the date of birth information and the address information.  You will need to create an array of 10 addressBookType objects and add an object to the array as the user data in entered. The user should have the ability to use this menu option at any time using the program to enter another object. You will need to keep track of the number of objects entered to make sure the user can not enter more than 10 objects.
in (iii) and (iv), provide a menu option to search by name and print the address, phone number and date of birth if the name exists.  Give an appropriate message if the name is not found
in (v), provide a menu option to enter a month of the year and display the name, address and phone number of the entries with birthdays in that month
in (vii), provide a menu option to enter the classification of a person (family, friend or business) and display the name, address and phone number of the entries with birthdays in that month
Provide a menu option to exit the program
Make sure the user does not exceed the 10 max limit of addressBookType objects at any point during the program
*/
int main(){
    extPersonType person;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    cout << "Welcome to SCF assignment 2" << endl; 
    cout << endl;
    person.setDate(12, 23, 43);
    cout << person.getDay() << endl;
    return (0);
}