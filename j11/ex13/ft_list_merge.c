/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:30:39 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 23:32:54 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *curr;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	curr = *begin_list1;
	while (curr->next)
		curr = curr->next;
	curr->next = begin_list2;
}
