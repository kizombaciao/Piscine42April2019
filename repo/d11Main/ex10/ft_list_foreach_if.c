#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
    t_list *curr;

    curr = begin_list;

    while (curr)
    {
        if (!cmp(curr->data, data_ref))
        {
            f(curr->data);
        }
        curr = curr->next;

    }


}




int main()
{



}

// (*f)(list_ptr->data)
// (*cmp)(list_ptr->data, data_ref)

// https://github.com/alvinsunyixiao/42-piscine/blob/master/d11/ex10/ft_list_foreach_if.c
