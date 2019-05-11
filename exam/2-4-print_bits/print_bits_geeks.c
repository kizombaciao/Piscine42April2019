#include <stdio.h>
#include <unistd.h>


void bin(unsigned int n) // same as unsigned char // also, works with int
{ 
    unsigned i; 
    for (i = 1 << 7; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 

// USE THIS ONE!!!
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

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// USE THIS VERSION!!!
void bin3(int o)
{
    int i;
    char c1 = '1';
    char c0 = '0';

    i = 128;
    while (i >>= 1)
        if (o & i)
            ft_putchar(c1);
        else
        {
            ft_putchar(c0);
        }
}

int main(void) 
{ 
    char a = 'a';

    bin(7); 
    printf("\n"); 
    
    bin(4); 
    printf("\n");

    bin2(7); 
    printf("\n"); 
    
    printf("\nBIN3:  \n"); 
    bin3(2);
    printf("\n"); 

    bin3(4);

    printf("\n%d  %c", a, a);
} 

/*
void bin2(char n)
{
    int i;

    i = 1 << 7;
    while (i > 0)
    {
        if (n & i)
            write(1, '1', 1);
        else
            write(1, '0', 1); 
    }
}
*/

/*
*/