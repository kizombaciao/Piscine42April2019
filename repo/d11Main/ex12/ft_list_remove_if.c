#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *curr;
    t_list *remove;

    // i think this can go in the beginning too!
    curr = *begin_list;
    if (curr && !cmp(curr->data, data_ref))
    {
        remove = curr;
        begin_list = curr->next;
        free(remove);
    }

    curr = *begin_list;
    while (curr && curr->next)
    {
        if (!cmp(curr->next->data, data_ref))
        {
            remove = curr->next;
            curr->next = curr->next->next;
            free(remove);
        }
        curr = curr->next;
    }
}

int main()
{


}

// https://github.com/Eywek/42-piscine/blob/master/day11/ex12/ft_list_remove_if.c
