#include <stdio.h>
#include <unistd.h>

#define SHIFT   'a' - 'A'

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += SHIFT;
        }
        i++;
    }
    return (str);
}

int main()
{
    int n;
    char str[] = " what IS this ANYWAY?";

    printf("\n111:   %s", ft_strlowcase(str));

    return (0);
}