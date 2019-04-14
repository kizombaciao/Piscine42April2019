#include "ft_list.h"

void ft_list_reverse_fun(t_list *begin_list)
{
    int count;
    int i;
    int j;
    t_list *curr;
    void *tmp;

    count = 0;
    curr = begin_list;

    while (curr->next && ++count)
        curr = curr->next; // what happens when you read NULL->next ???

    i = 0;
    while (i < count)
    {
        j = i;
        curr = begin_list;
        while (curr && curr->next && j < count)
        {
            // WHY ARE WE SWAP DATA???
            tmp = curr->data;
            curr->data = curr->next->data;
            curr->next->data = tmp;
            curr = curr->next;
            j++;
        }
        i++;
    }
}