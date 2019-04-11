#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int n;

    if (!begin_list)        // same as begin_list == NULL???
        return (NULL);    

    n = nbr;
    while (n-- && begin_list)
        begin_list = begin_list->next;
    return (n >= -1 ? begin_list : NULL); // why -1???
}

int main()
{



}

// https://github.com/Eywek/42-piscine/blob/master/day11/ex07/ft_list_at.c
