#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *curr;

    if (!*begin_list1)
    {
        *begin_list1 = begin_list2; // note the ** versus * !
        return ;
    }
        
    curr = *begin_list1;
    while (curr->next)
        curr = curr->next;
    curr->next = begin_list2;

    // will the new combined list be accessible from the calling function???
}

int main()
{


}

// https://github.com/EpicWAX/Piscine-C/blob/master/j11/ex13/ft_list_merge.c
