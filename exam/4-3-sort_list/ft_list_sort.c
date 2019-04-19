
#include "ft_list.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *p1;
    t_list *p2;
    t_list *tmp;

    if (!begin_list)
        return ;

    p1 = *begin_list; // NOTE!!!


    while (p1) // TO GET BUBBLE
    {
        p2 = *begin_list;
        // LIKE BUBBLE SORT, THE INNER LOOP NEEDS TO BE AHEAD OF OUTER BY 1 STEP, POSSIBLY.
        while (p2->next) // ??? CHECK IF 'next' IS REALLY NEEDED ???
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
