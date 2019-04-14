/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:51:54 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 21:51:56 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;

	last = *begin_list;
	if (last == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (last->next == NULL)
			last = last->next;
		last->next = ft_create_elem(data);
	}
}

// TRACE SAYS THIS CODE DOESN'T WORK!!!  why???