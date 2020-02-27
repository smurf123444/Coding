#include <iostream>
#include "aseqlist.h"
#include "employeeClass.h"

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
        }
        else
        {
            std::cout << "Name Not Found." << std::endl;
        }
    return (L.Find(Emp));
}
int main(){

    SeqList list;
    Employee obj("6278","Manning","Chris", "24",'f');
     Employee obj2("6278","Fanning","Chris", "24",'f');
    Employee copy;
    list.Insert(obj);
    list.Insert(obj2);
    /*
    copy = list.GetData(0);
    copy.printEmployee();
    */
    PrintByGender(list, 'm');
    inList(list, "Manning", obj);
    inList(list, "Tanning", obj);
    inList(list, "Fanning", obj2);
    return (0);
}