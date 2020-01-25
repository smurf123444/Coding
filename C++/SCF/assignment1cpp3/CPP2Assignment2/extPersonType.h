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
int association;
int phoneNumber;
public:

extPersonType();
~extPersonType();

};

#endif