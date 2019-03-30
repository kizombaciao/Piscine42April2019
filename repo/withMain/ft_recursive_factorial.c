#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int num;
    int i;
    
    i = 1;
    num = 1;

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
    return (nb * ft_recursive_factorial(nb - 1));
}


int main()
{
    int nb;

    nb = 13;
    nb = ft_recursive_factorial(nb);
    printf("\n%d", nb);

}