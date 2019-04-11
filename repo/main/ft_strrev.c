#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char *ft_strrev(char *str)
{
    int i;
    int j;
    char tmp;

    j = ft_strlen(str);
    i = -1;
    while (++i < --j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    return(str);
}

int main()
{
    char str[] = "0123456789";

    printf("\n%s", ft_strrev(str));
}

