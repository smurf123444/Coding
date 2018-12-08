#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    
    /*
      void* ptr = 0;        assigning invalid memory address
      void* ptr = nullptr;  assigning correct memory address 
    */

   /*  stack allocates memory automatically */
    int var = 8;            //setting var to 8
    int* ptr = &var;        //pointing to var address
    *ptr = 10;              //manipulating ptr
    LOG(var);               //LOG output

    /*  heap allocates memory manually */

    char* buffer = new char[8]; // the new keyword is used to create on heap
    memset(buffer, 0, 8);

    char** ptr1 = &buffer;      // pointer to a pointer ;D
    LOG(ptr1);                  // logging address to ptr1
    delete[] buffer;            // deleting data after used

    std::cin.get();             // type key to exit

}