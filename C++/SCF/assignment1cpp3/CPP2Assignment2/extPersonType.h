//personType.h
 #ifndef _EXTPERSONTYPE_H_
 #define _EXTPERSONTYPE_H_
#include <string>
#include <iostream>
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
using namespace std;

class extPersonType : public personType, public dateType, public AddressType
{
private:
    int association = 0;
    int phoneNumber = 0;
public:

    extPersonType() : personType(), dateType(), AddressType() {}

    void setClassification(int input);
    void setPhoneNumber(int input);
    int getPhoneNumber();
    int getClassification();

};

#endif