#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0; // note, counter starts from zero
    if (!begin_list)
        return (i);

	while (begin_list)
	{
		begin_list = begin_list->next;
		++i;
	}
	return (i); // think about if counter overshoots???
}

t_list *ft_create_elem(void *data)
{
    t_list *tmp;

    if(!(tmp = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    tmp->data = data;
    tmp->next = NULL;
    return (tmp);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *tmp;

    tmp = *begin_list;
    if (!*begin_list)
    {
        *begin_list = ft_create_elem(data);
        return ;
    }
    else
    {
            while (tmp)
            {
                tmp = tmp->next;
            }
            tmp->next = ft_create_elem(data);
    }
}

int main()
{
    t_list *tmp, *tmp2;
    int *p;
    int n;
    
    //tmp = (t_list *)malloc(sizeof(t_list));
    //tmp->data = p;
    //tmp->next = NULL;
    
    tmp = ft_create_elem(&n);

    tmp2 = (t_list *)malloc(sizeof(t_list));
    tmp2->data = p;
    tmp2->next = tmp;
    
    n = ft_list_size(tmp2);
    printf("\n%d", n);
}
