#include <iostream>
#include "aseqlist.h"
#include "employeeClass.h"
/*
void PrintByGender(const SeqList & L, char gender)
{
    int i = 0;
    while (i < 6)
    {

    }
}*/
int main(){

    SeqList tits;
    Employee obj("6278","Manning","Chris", "24","Male");
    Employee tit;
    tits.Insert(obj);
   tit = tits.GetData(0);
   tit.printEmployee();
    return (0);
}