#include "Header.hpp"
#include "Functions.cpp"
int main()
{
int h = 0;
bool quit = false;
while (!quit)
{
    std::cout << "Would you like to enter program? Enter 1 for no 0 for Yes" << std::endl;
    std::cin >> quit;
}
std::cout << PayRoll::increment(h);
return (0);
}
