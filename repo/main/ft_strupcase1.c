#include <stdio.h>
#include <unistd.h>

#define SHIFT   'a' - 'A'

// trying to do without using an index.
// below code does not work!!!

char *ft_strupcase(char *str)
{
    //char c;

    //str--;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - SHIFT;
        }
        str++;
    }
    return (str);
}

int main()
{
    int n;
    char str[] = "testTEST";


    printf("\n111:   %d   %s", SHIFT, ft_strupcase(str));

    return (0);
}