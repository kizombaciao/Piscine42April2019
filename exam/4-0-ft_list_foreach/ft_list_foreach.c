#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int func(int p)
{
    return (5);
}
void	ft_list_foreach(t_list *begin_list, int (*f)(int ))
{ // not sure if the changes are reverted back to the main()???
	t_list	*list_ptr;
    int nb;
	list_ptr = begin_list;
	while (list_ptr)
	{
		nb = (*f)(list_ptr->data); // or f(list_ptr->data);
        printf("\n222  %d", nb);
		list_ptr = list_ptr->next;
	}
}
int main()
{
    t_list *p;
    p = (t_list *)malloc(sizeof(t_list));
    p->next = NULL;
    p->data = 1;
    ft_list_foreach(p, &func); // NOTE!!!
}

/*
void ttt(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;
    
    list_ptr = begin_list;
    while (list_ptr) {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}
*/

