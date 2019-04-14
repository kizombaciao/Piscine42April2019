/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:41:05 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 22:41:50 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;

	list = *begin_list;
	if (!list)
		return ;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*begin_list = NULL;
}
