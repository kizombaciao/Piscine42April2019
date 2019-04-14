/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:16:28 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 22:18:43 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*list;

	i = 0;
	if (!begin_list)
		return (i);
	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
