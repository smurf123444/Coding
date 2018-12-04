#include <stdio.h>
#include <stdlib.h>

union Coins{
    struct {
        int quarter ;
        int dime;
        int nickel;
        int penny;
    };
    int coins[4];
};

int main()
{
    union Coins change;
    change.quarter = 25;
    change.dime = 10;
    change.nickel = 05;
    change.penny = 01;
 printf("The Values for US Coins .%i quarter, .%i dime, .0%i nickel, and .0%i pennie\n",
        change.quarter, change.dime, change.nickel, change.penny);
}