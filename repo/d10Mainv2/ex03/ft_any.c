#include "cchao.h"

int func(char *c)
{
    int i;

    i = 0;
    while (c[i])
    {
        printf("\n222a   %c", c[i]);
        if (c[i] == '2')
        {
            printf("\n222b  %lu", sizeof(c[i]));   
            return (1);
        } 
        i++;
    }
    return (0);
}

int ft_any(char **tab, int (*f)(char *))
{
    int i;

i = 0;
while (tab[i])
{
    if (f(tab[i]))
    {
        return (1);
    }
    i++;
}
return (0);
}