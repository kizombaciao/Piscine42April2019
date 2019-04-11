#include <stdio.h>

int ft_is_prime(int nb)
{
    int guess;

    if (nb <= 1)
    {
        return (0);
    }
    guess = 2;
    while (guess < nb)
    {
        if (nb % guess == 0)
        {
            return (0);
        }
        guess++;
    }
    return (1);
}

int main()
{
    int num;

    num = ft_is_prime(7);

    printf("\n%d", num);  
}
