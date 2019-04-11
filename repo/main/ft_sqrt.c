#include <stdio.h>

int ft_sqrt(int nb)
{
    int guess;

    guess = 0;
    while (guess <= nb)
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
    int num;
    int nb = 144;

    num = ft_sqrt(-5);

    printf("\n%d  ", num);  
}

// time clock 2 seconds!!!
// https://www.geeksforgeeks.org/how-to-measure-time-taken-by-a-program-in-c/
