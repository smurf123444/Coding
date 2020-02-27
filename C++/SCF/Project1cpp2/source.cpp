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
        if(c.getGender() == 'm')
        {
            std::cout << "Its a Male" << std::endl;
            c.printEmployee();
        }
        else if (c.getGender() == 'f'){
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
    Employee obj[6], temp;
    std::string employeeNumberString, lastName, firstName, ageString, genderString, selectionString;
    char genderChar;
    std::string input;
    bool quit = false;
    int tog = 0;
    int i = 0;
    std::cout << "Welcome to project 1 cpp 2 for SCF!" << std::endl;
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    while (!quit)
    {
        std::cout << "Please Enter Menu Selection" << std::endl;
        std::getline(std::cin, selectionString);
        std::stringstream(selectionString) >> tog;
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
                    obj[i++] = temp;
                    std::cout << "Add More? 1 for [Exit] 0 for [Continue]" << std::endl;
                    std::getline(std::cin, selectionString);
                    std::stringstream(selectionString) >> quit;
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
            if (i == 0)
            {
                std::cout << "Nothing in list to compare.." << std::endl;
                std::cout << std::endl;
                break;
            }
            else
            {
                if (inList(list, input, obj[i++]) == 1)
                {
                    std::cout << "Located Last name" << std::endl;
                }
                else
                {
                    std::cout << "Could Not Locate." << std::endl;
                }
            }
            //Delete Employee
            break;
        case 3: //Print Employee by Gender
            break;
        case 4: // Search for Employee
            break;
        case 5: // Print all Employees
            break;
        case 6: // Exit
            break;
        default:
            break;
           
        }
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