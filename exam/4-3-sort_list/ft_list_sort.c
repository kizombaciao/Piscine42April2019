
#include "ft_list.h"

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
        while (p2->next) // ?
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
