#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    int neg;
    int i;
    char c;
    int num;

    neg = 1;
    num = 1;

    // integer overflow


    // test for negative
    if (nb < 0)
    {
        neg = -1;
        nb = neg * nb;
    }

    // use recursion
    i = 0;
    num = nb;
    while (num >= 1)
    {
        if (num > 10)
        {
            c = num / 10 + '0';
            num = num % 10;
            write(1, &c, 1);
        }
        else 
        { 
            c = num + '0';
            num = 0;
            write(1, &c, 1);
        }
    }
}

// ABOVE DOES NOT WORK

int main()
{
    int n;
    char c;

    ft_putnbr(45789);

    //printf("\n111:   ");

    return (0);
}