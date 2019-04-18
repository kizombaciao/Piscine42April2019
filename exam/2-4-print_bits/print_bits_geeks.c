#include <stdio.h>

void bin(unsigned int n) // same as unsigned char // also, works with int
{ 
    unsigned i; 
    for (i = 1 << 7; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 

void bin2(unsigned char n)
{
    unsigned i;
    i = 1 << 7;
    while (i > 0)
    {
        (n & i) ? printf("1") : printf("0");
        i = i / 2;
    }
}

int main(void) 
{ 
    bin(7); 
    printf("\n"); 
    
    bin(4); 
    printf("\n");

    bin2(7); 
    printf("\n"); 
    
    bin2(4); 
} 

