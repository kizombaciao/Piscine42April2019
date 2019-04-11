#include "ft_list.h"



void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *curr;
    t_list *insert;

    curr = *begin_list;
    if(!(insert = ft_create_elem(data)))
        return ;

    if (cmp(data, curr->data) < 0)
    {
        ft_list_push_front(begin_list, data);
        return ;
    }

    while (curr->next) // note, next !!!
    {
        if (cmp(data, curr->next->data) < 0)
        {
            ft_list_push_front(&(curr->next), data); // ??? because double asterisk
            return ;
        }
        curr = curr->next;
    }
    ft_list_push_back(begin_list, data);
}

int main()
{


}

// https://github.com/alvinsunyixiao/42-piscine/blob/master/d11/ex16/ft_sorted_list_insert.c
