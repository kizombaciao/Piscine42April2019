#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *tmp;

    if(!(tmp = (t_list *)malloc(sizeof(t_list))))
        return (NULL);

    tmp->data = data;
    tmp->next = NULL;
    //printf("\n%d", *(int *)(tmp->data));
    printf("\n%c", *(char *)(tmp->data));

    return (tmp);
}

// creates a new element of t_list type.