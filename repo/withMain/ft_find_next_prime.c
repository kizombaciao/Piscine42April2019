#include <stdio.h>

#define max 2000000000

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

int ft_find_next_prime(int nb)
{
    int guess;

    guess = nb + 1;
    while (guess <= max)
    {
        if (ft_is_prime(guess))
        {
            return (guess);
        }
        guess++;
    }
    return (0);
}

int main()
{
    int num;

    num = ft_find_next_prime(18);
    printf("\n%d", num);  
}
