#include "cchao.h"

int func(char *s)
{
    printf("\n222a   %s   %c", s, s[1]);
    if (s[1] == '2')
        return (1);
    return (0);
}

int ft_count_if(char **tab, int (*f)(char *))
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (tab[i] != NULL)
    {
        if(f(tab[i]))
        {
            count++;
        }
        i++;
    }
    return (count);
}


int main()
{
    int num;
    int i;
    char **p;

    p = (char **)malloc(sizeof(char *) * 3);
    i = 0;
    while (i < 2)
    {
        p[i] = (char *)malloc(sizeof(char) * 6);
        p[i] = "42";
        i++;
    }
    p[i] = NULL;

    num = ft_count_if(p, &func);
    printf("\n111   %d", num);

    return (0);
}