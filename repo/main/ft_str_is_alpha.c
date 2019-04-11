#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    //int flag;

    //flag = 1;

    if (!*str)
    {
        printf("\nWhoa");
        return (1);
    }
    printf("\n222:  %c", *str);
    while (*str)
    {
        if ((*str < 'A') || (*str > 'Z' && *str < 'a') || (*str > 'z'))
        {
            printf("\nHEY  %c", *str);
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

    printf("\n111:   %d", ft_str_is_alpha("abc abc"));

    return (0);
}
