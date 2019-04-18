#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{ // not sure if the changes are reverted back to the main()???
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
int main()
{
    ft_list_foreach();
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

