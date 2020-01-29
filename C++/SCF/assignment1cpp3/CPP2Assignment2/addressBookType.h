#include <string>
#include "extPersonType.h"
#include "dateType.h"
class addressBookType : public extPersonType, public AddressType, public dateType {
    private:
    
    public:
        int i = 0;
        addressBookType() : extPersonType(), AddressType(), dateType() { dateType::setMonth(i++); }
};