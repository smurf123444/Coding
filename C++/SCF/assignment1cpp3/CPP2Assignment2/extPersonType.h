//personType.h
 
#include <string>
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
extPersonType(){
  association = 0;
  phoneNumber = 0;
}

};

