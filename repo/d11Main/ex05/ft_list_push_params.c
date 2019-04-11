#include "ft_list.h"

t_list *ft_list_push_params(int ac, char **av)
{
    t_list *list;
    int i;

    list = NULL;
    i = 1;
    while (i < ac)
    {
        ft_list_push_front(&list, av[i++]);   
    }
    return (list);

// below code does not display!!!
    while (!list->next)
    {
        printf("\n333  %s", list->data);
        list = list->next;
    }
}

int main(int ac, char **av)
{
    t_list *list;

    list = NULL;
    ft_list_push_params(ac, av);

}