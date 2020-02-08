//personType.h
 #ifndef _EXTPERSONTYPE_H_
 #define _EXTPERSONTYPE_H_
#include <string>
#include <iostream>
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
using namespace std;

class extPersonType : public personType
{
private:
    int association = 0;
    string phoneNumber = "";
public:

    extPersonType() : personType() {}

    void setClassification(int input);
    void setPhoneNumber(string input);
    string getPhoneNumber();
    int getClassification();

};

#endif