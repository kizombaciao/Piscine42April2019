#include <stdio.h>

int main()
{
    int counter = 9;
    int tier = 3;

    counter += ((tier % 2) ? (tier - 1) / 2 : tier / 2) + 1;


    printf("\n111: %d", tier % 2);
    printf("\n112: %d", (tier - 1) / 2);
    printf("\n111: %d", tier % 2);


    printf("\n%d", counter);
}