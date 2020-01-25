#include <string>

class AddressType{
    public:
    std::string address, city, state, zip;

    AddressType();
    ~AddressType();
    void setAddress(std::string input);
    void setCity(std::string input);
    void setState(std::string input);
    void setZip(std::string input);
    void getAddress();
    void getCity();
    void getState();
    void getZip();
};



