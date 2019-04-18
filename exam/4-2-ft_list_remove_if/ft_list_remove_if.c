#include "ft_list.h"
#include <stdlib.h>

// note, how we don't even need to specify the number of args for (*cmp)()
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*i;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list; // why even create tmp???
		*begin_list = (*begin_list)->next;
		free(tmp); // this doesn't look right
	}
	i = *begin_list;
	while (i && i->next) // TO REMOVE, ALSO NEED TO LOOK A STEP AHEAD
	{
		if (cmp(i->next->data, data_ref) == 0)
		{
			tmp = i->next; // see this example in Geeks
			i->next = tmp->next;
			free (tmp);
		}
		i = i->next;
	}
}

int func(void *p1, void *p2)
{
    if (*p1 == *p2) {
        return 0;
    }
    return 1;
}

int main()
{
    // how to use void pointer???
    
}
