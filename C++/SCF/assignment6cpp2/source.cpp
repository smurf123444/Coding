#include <iostream>
#include "employeeClass.h"
#include "binarySearchTree.h"
#include <sstream>
int main()
{
    bool quit = false;
    string employeeNumString = "", employeeFirstName = "", employeeLastName = "", ageString = "", genderString = "", inputString = "";
    char gender = 'a';
    int input = 0;
    Employee test;
    bSearchTreeType<Employee> obj1;
    std::cout << " Welcome to Assignment 6 C++ 2 for Binary Tree Searching!" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Add Employee object elements to binary search tree" << std::endl;
    std::cout << "2. Delete Employee object elements from the Binary Search Tree" << std::endl;
    std::cout << "3. Return the number of nodes in the Binary Search Tree" << std::endl;
    std::cout << "4. Print the objects in the tree using the preorder traversal" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Please Type a number then press [Enter] : ";
    std::getline(cin, inputString);
    stringstream(inputString) >> input;
    while (!quit)
    {
        
        
        switch (input)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Employee Number : ";
            std::getline(cin, employeeNumString);
            std::cout << std::endl;
            std::cout << "Employee First Name : ";
            std::getline(cin, employeeFirstName);
            std::cout << std::endl;
            std::cout << "Employee Last Name : ";
            std::getline(cin, employeeLastName);
            std::cout << std::endl;
            std::cout << "Employee Age : ";
            std::getline(cin, ageString);
            std::cout << std::endl;
            std::cout << "Employee Gender : ";
            std::getline(cin, genderString);
            std::cout << std::endl;
            gender = genderString[0];
            while ((gender != 'm' || gender != 'M') || (gender != 'f' || gender != 'F'))
            {
                std::cout << "Type in a proper Gender" << std::endl;
                std::getline(cin, genderString);
                std::cout << std::endl;
                gender = genderString[0];
            }
            test.writeEmployee(employeeNumString, employeeFirstName, employeeLastName, ageString, gender); 
            obj1.insert(test);
            break; // Add Employee object elements to the Binary Search Tree
        case 2:
            obj1.deleteNode(test);
            
            break; // Delete Employee object elements from the Binary Search Tree
        case 3:
            obj1.treeNodeCount();
            
            break; // Return the number of nodes in the Binary Search Tree
        case 4: 
            obj1.preorderTraversal();
            break; // Print the objects in the tree using the preorder traversal
        case 5: 
            quit = true;
            break; // EXIT

        default : 
            break;
        }
    }
    return (0);
}