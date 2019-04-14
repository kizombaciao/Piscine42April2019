/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:25:17 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 23:26:26 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;
	t_list *remove;

	curr = *begin_list;
	if (curr && !cmp(curr->data, data_ref))
	{
		remove = curr;
		begin_list = curr->next;
		free(remove);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (!cmp(curr->next->data, data_ref))
		{
			remove = curr->next;
			curr->next = curr->next->next;
			free(remove);
		}
		curr = curr->next;
	}
}
