#include <iostream>
#include <array>

class Entity{
public:
    static const int exampleSize = 5;
    int example[exampleSize];

    std::array<int, 5> another;

    Entity()
    {
        for (int i = 0; i < another.size(); i++)
            example[i] = 2;
    }
};

void passValue(int value);
void passArray(int prime[5]);
int main()
{
    
        int value = 1;
    std::cout << "before passValue: " << value << "\n";
    passValue(value);
    std::cout << "after passValue: " << value << "\n";
 
    int prime[5] = { 2, 3, 5, 7, 11 };
    std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
    passArray(prime);
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";

    return 0;
}
void passValue(int value) // value is a copy of the argument
{
    value = 99; // so changing it here won't change the value of the argument
}
 
void passArray(int meow[5]) // prime is the actual array
{
    time_t result = time(NULL);
    meow[0] = 1; // so changing it here will change the original argument!
    meow[1] = 7;
    meow[2] = 5;
    meow[3] = 3;
    meow[4] = 2;
}
/*void function() {
        // Declare a 10x10 array
    const int numRows = 10;
    const int numCols = 10;
    int product[numRows][numCols] = { 0 };
 
    // Calculate a multiplication table
    for (int row = 0; row < numRows; ++row)
        for (int col = 0; col < numCols; ++col)
            product[row][col] = row * col;
 
    // Print the table
    for (int row = 1; row < numRows; ++row)
    {
        for (int col = 1; col < numCols; ++col)
            std::cout << product[row][col] << "\t";
 
        std::cout << '\n';
    }
 std::cout << "Hey" << std::endl;
}*/