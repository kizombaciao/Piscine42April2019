#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *tmp_list;

	tmp_list = begin_list;
	while (tmp_list) {
		(*f)(tmp_list->data);
		tmp_list = tmp_list->next;
	}
}

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list {
	struct s_list *next;
	void *data;
}      t_list;

void ft_list_foreach(t_list *begin_list, void(*f)(void *));

#endif
