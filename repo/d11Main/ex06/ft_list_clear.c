#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
    t_list *tmp;
    t_list *list;

    list = *begin_list;

    if (!list)
        return ;

    while (list)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
    *begin_list = NULL;
}


int main()
{



}