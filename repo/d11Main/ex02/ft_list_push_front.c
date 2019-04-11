#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *list;

    if (*begin_list)
    {
        list = ft_create_elem(data);
        list->next = *begin_list; // single asterisk!
        *begin_list = list;
    }
    else
    {
        *begin_list = ft_create_elem(data);
    }
}



// https://github.com/fotonmoton/42/blob/master/d11_test/main.c



// adds a new element of type t_list to the beginning of the list.
// given that we are passed a ptr to the beginning.