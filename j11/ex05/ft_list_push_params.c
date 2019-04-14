/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:31:22 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 22:33:27 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (*begin_list)
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 1;
	while (i < ac)
		ft_list_push_front(&list, av[i++]);
	return (list);
}
