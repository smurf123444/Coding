#include <iostream>
#include "aseqlist.h"
#include "employeeClass.h"

void PrintByGender(const SeqList & L, char gender)
{
    int i = 0;
    Employee c;
    while (i < 6)
    {
        c = L.GetData(i);
        if(c.getEmployeeNumber() == )
    }
}
int main(){

    SeqList list;
    Employee obj("6278","Manning","Chris", "24","Male");
    Employee copy;
    list.Insert(obj);
    copy = list.GetData(0);
    obj.printEmployee();
    

    return (0);
}