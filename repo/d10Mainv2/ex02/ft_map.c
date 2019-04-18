#include "cchao.h"

int ft_sq(int num)
{
    return (num * num);
}

int     *ft_map(int *tab, int length, int (*f)(int))
{
    int i;
    int *tmp;


    if(!(tmp = (int *)malloc(sizeof(int) * 5)))
        return (0);

    i = 0;
    while (i < length)
    {
        tmp[i] = f(tab[i]);
        i++;
    }
    return (tmp);
}


// NEED TO IMPLEMENT MALLOC