#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    if (!*str)
    {
        return (1);
    }
    while (*str)
    {
        if (*str < 'a' || *str > 'z')
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main()
{
    int n;
    char c;

    printf("\n111:   %d", ft_str_is_lowercase("2abc"));

    return (0);
}