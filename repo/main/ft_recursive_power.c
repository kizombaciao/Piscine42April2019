#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power >= 31)
    {
        return (-1);
    }
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    return (nb * ft_recursive_power(nb, power - 1));
}


int main()
{
    int nb;
    int power;

    nb = 2;
    power = 1000000;

    nb = ft_recursive_power(2, 31);
    printf("\n%d", nb);

}