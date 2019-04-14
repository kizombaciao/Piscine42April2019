#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *curr;

    if (!*begin_list1)
    {
        *begin_list1 = begin_list2;
        return ;
    }
    curr = *begin_list1;
    while (curr->next)
        curr = curr->next;
    curr->next = begin_list2;
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *p1;
    t_list *p2;
    t_list *tmp;

    if (!begin_list)
        return ;

    p1 = *begin_list;
    while (p1)
    {
        p2 = *begin_list;
        while (p2->next)
        {
            if (cmp(p2->data, p2->next->data) > 0)
            {
                tmp = p2->data;
                p2->data = p2->next->data;
                p2->next->data = tmp;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    ft_list_merge(begin_list1, begin_list2);
    ft_list_sort(begin_list1, cmp);
}