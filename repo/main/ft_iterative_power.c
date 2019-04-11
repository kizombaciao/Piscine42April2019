#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int num;

    num = 1;
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    while (i < power)
    {
        num *= nb;
        i++;
    }
    return (num);
}

int main()
{
    int nb;
    int power;

    nb = -3;
    power = 2;

    nb = ft_iterative_power(nb, power);
    printf("\n%d", nb);
}

// need to use OS time clock to check if under 2 seconds