#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *t;

	t = begin_list;

	if (!t)
		return ;

	while (t)
	{
		f(t->data);
		t = t->next;
	}
}

