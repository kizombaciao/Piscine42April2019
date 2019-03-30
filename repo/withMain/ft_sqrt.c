#include <time.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int guess;

    guess = 0;
    while (guess < nb)
    {
        if ((guess * guess) == nb)
        {
            return (guess);
        }
        guess += 1;   
    }
    return (0);
}

int main()
{
    clock_t t;
    int num;
    int nb = 144;

    t = clock();
    num = ft_sqrt(nb);

    t = clock() - t;
    printf("\n%d   %d", num, t);  
}

// time clock 2 seconds!!!
// https://www.geeksforgeeks.org/how-to-measure-time-taken-by-a-program-in-c/
