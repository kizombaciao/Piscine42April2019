#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *last;

    last = *begin_list;

    if (last == NULL)
        *begin_list = ft_create_elem(data);
    else
    {
        while (last->next == NULL)
            last = last->next;

        last->next = ft_create_elem(data);
    }
}


// the code is gettin seg default!!!
