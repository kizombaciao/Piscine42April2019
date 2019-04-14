/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:15:44 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 23:16:46 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
			void *data_ref, int (*cmp)(void *, void *))
{
	t_list *curr;

	curr = begin_list;
	while (curr)
	{
		if (!cmp(curr->data, data_ref))
		{
			f(curr->data);
		}
		curr = curr->next;
	}
}
