#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    if (!*str)
    {
        return (1);
    }

    //str--;
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return (1);
        }
        str++;
    }
    return (0);
}

int main()
{
    int n;
    char c;

    printf("\n111:   %d", ft_str_is_numeric(""));

    return (0);
}