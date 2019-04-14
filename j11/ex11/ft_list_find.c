/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:21:21 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 23:22:01 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;

	curr = begin_list;
	while (curr)
	{
		if (!cmp(curr->data, data_ref))
		{
			return (curr);
		}
		curr = curr->next;
	}
	return (NULL);
}
