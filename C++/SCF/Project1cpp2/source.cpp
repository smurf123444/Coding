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
int main(){

    SeqList list;
    Employee obj("6278","Manning","Chris", "24",'f');
    Employee copy;
    list.Insert(obj);
    /*
    copy = list.GetData(0);
    copy.printEmployee();
    */
    PrintByGender(list, 'm');

    return (0);
}