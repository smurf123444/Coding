#include <iostream>
#include "aseqlist.h"
#include "employeeClass.h"
#include "stdio.h"
#include <sstream>
void PrintByGender(const SeqList & L, char gender)
{
    int i = 0;
    Employee c;
    while (i < L.ListSize())
    {
        c = L.GetData(i);
        if(c.getGender() == 'm' || c.getGender() == 'M')
        {
            std::cout << "Its a Male" << std::endl;
            c.printEmployee();
        }
        else if (c.getGender() == 'f' || c.getGender() == 'F'){
            std::cout << "Its a Female" << std::endl;
            c.printEmployee();
        }
        
        i++;
    }
}
int inList(const SeqList& L, std::string lname, Employee& Emp)
{
    if (Emp.getLastName() == lname && L.Find(Emp))
        {
            std::cout << "Name Found." << std::endl;
            return (1);
        }
        else
        {
            std::cout << "Name Not Found." << std::endl;
            return (0);
        }
    return (0);
}
int main(){

    SeqList list;
    Employee obj[6], temp, temp2;
    std::string employeeNumberString, lastName, firstName, ageString, genderString, selectionString;
    char genderChar;
    std::string input;
    bool quit = false;
    int tog = 0;
    int i = 0;
    int listSize = 0;
    std::cout << "Welcome to project 1 cpp 2 for SCF!" << std::endl;
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    std::cout << "Please Enter Menu Selection" << std::endl;
    std::getline(std::cin, selectionString);
    std::stringstream(selectionString) >> tog;
    while (!quit)
    {
        std::cout << std::endl;
        std::cout << "Please Select a Menu Option Below..." << std::endl;
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
        std::cout << "1. Enter Employee Information (6 Items max)" << std::endl;
        std::cout << "2. Delete Employee based on Last Name" << std::endl;
        std::cout << "3. Enter Gender to be found and printed." << std::endl;
        std::cout << "4. Enter Last Name to be found and printed." << std::endl;
        std::cout << "5. Print ALL Employees" << std::endl;
        std::cout << "6. Exit Program." << std::endl;
        switch (tog)
        {
        case 1:
            if (i < 6) {
                if (list.ListEmpty())
                {

                    std::cout << "Please Enter The Employee Information Below..." << std::endl;
                    std::cout << "----------------------" << std::endl;
                    std::cout << "Employee # : " << std::endl;
                    std::getline(std::cin, employeeNumberString);
                    std::cout << "Last Name : " << std::endl;
                    std::getline(std::cin, lastName);
                    std::cout << "First Name : " << std::endl;
                    std::getline(std::cin, firstName);
                    std::cout << "Age : " << std::endl;
                    std::getline(std::cin, ageString);
                    std::cout << "Gender : " << std::endl;
                    std::getline(std::cin, genderString);
                    genderChar = genderString[0];
                    temp = obj[i].writeEmployee(employeeNumberString, lastName, firstName, ageString, genderChar);
                    obj[i] = temp;
                    list.Insert(obj[i++]);
                    std::cout << "Add More? 1 for [Exit] 0 for [Continue]" << std::endl;
                    std::getline(std::cin, selectionString);
                    if (selectionString == "1")
                    {
                        listSize = listSize + i;
                        break;
                    }
                }
                else if (!list.ListEmpty())
                {
                    if (list.ListSize() > 6)
                    {
                        std::cout << "List too big.. breaking." << std::endl;
                        break;
                    }
                }
                else
                {
                    std::cout << "Error" << std::endl;
                    break;
                }//Enter Employee Info
            }
                break;
        case 2: 
            i = 0;
            std::cout << "Please Enter Last Name to be deleted.." << std::endl;
            std::getline(std::cin, input);
            if (listSize == 0)
            {
                std::cout << "Nothing in list to compare.." << std::endl;
                std::cout << std::endl;
                break;
            }
            else
            {
                while (i < listSize)
                {
                    if (inList(list, input, obj[i]) == 1)
                    {
                        std::cout << "Located Last name" << std::endl;
                        std::cout << "Deleting from list" << std::endl;
                        list.Delete(obj[i++]);
                    }
                    else
                    {
                        std::cout << "Could Not Locate." << std::endl;
                        i++;
                    }
                    
                }
            }
            //Delete Employee
            break;
        case 3:
            genderString = "";
            genderChar = 'n';
            std::cout << "Enter Gender to print by. " << std::endl;
            std::getline(std::cin, genderString);
            genderChar = genderString[1];
            PrintByGender(list, genderChar);
            //Print Employee by Gender
            break;
        case 4: 
            i = 0;
            std::cout << "Please Enter Last Name to be Searched.." << std::endl;
            std::getline(std::cin, input);
            if (listSize == 0)
            {
                std::cout << "Nothing in list to compare.." << std::endl;
                std::cout << std::endl;
                break;
            }
            else
            {
                while (i < listSize)
                {
                    if (inList(list, input, obj[i]) == 1)
                    {
                        std::cout << "Located Last name" << std::endl;
                        std::cout << "Displaying all." << std::endl;
                        obj[i].readEmployee(obj[i]);
                        obj[i++].printEmployee();
                    }
                    else
                    {
                        std::cout << "Could Not Locate." << std::endl;
                        i++;
                    }

                }
            }
            // Search for Employee
            break;
        case 5:
            i = 0;
            if (list.ListEmpty())
            {
                std::cout << "List Empty" << std::endl;
                break;
            }
            while (i < list.ListSize())
            {
                std::cout << "Displaying all of the objects within the List" << std::endl;
                temp2 = list.GetData(i++);
                temp2.printEmployee();
            }
            // Print all Employees
            break;
        case 6: 
            std::cout << "Exiting" << std::endl;
            quit = true;
            return 1;
            // Exit
            break;
        default:
            break;
           
        }
        std::cout << std::endl;
        std::cout << "Please Enter Menu Selection" << std::endl;
        std::getline(std::cin, selectionString);
        std::stringstream(selectionString) >> tog;
    }
    /*
    list.Insert(obj);
    list.Insert(obj2);
   
    copy = list.GetData(0);
    copy.printEmployee();
    
    PrintByGender(list, 'm');
    inList(list, "Manning", obj);
    inList(list, "Tanning", obj);
    inList(list, "Fanning", obj2);
    */
    return (0);
}