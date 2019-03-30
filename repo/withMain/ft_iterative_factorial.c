#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int num;
    int i;
    
    i = 1;
    if ((nb < 0) || (nb > 12))
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    if (nb == 1)
    {
        return (1);
    }
    num = 1; 
    while (i <= nb)
    {
        num *= i;
        i++;
    }
    return (num);
}


int main()
{
    int nb;

    nb = ft_iterative_factorial(5);
    printf("\n%d", nb);
}