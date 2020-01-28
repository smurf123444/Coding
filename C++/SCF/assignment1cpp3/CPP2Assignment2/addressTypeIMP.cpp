#include <iostream>
#include "addressType.h"

AddressType::AddressType(){
        address = "";
        city = "";
        state = "";
        zip = "";
}

void AddressType::setAddress(std::string input)
{
    AddressType::address = input;
}

void AddressType::setCity(std::string input)
{
    AddressType::city = input;
}

void AddressType::setState(std::string input)
{
    AddressType::state = input;
}
void AddressType::setZip(std::string input)
{
 AddressType::zip = input;
}
void AddressType::getAddress()
{
 std::cout << "Address: " << AddressType::address << std::endl;
}
void AddressType::getCity()
{

std::cout << "City: " << AddressType::city << std::endl;
}
void AddressType::getState(){

 std::cout << "State: " << AddressType::state << std::endl;

}
void AddressType::getZip(){
 std::cout << "Zip: " << AddressType::zip << std::endl;
}