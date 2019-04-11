#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    if (!*str)
    {
        return (1);
    }
    while (*str)
    {
        if (*str < 'A' || *str > 'Z')
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

    printf("\n111:   %d", ft_str_is_uppercase("Abc"));

    return (0);
}