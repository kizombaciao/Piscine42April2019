#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i;
	t_list *t;

	t = begin_list;

	if (!t)
		return (0);

	i = 0;
	while (t)
	{
		i++;
		t = t->next;
	}
	return (i);
}

