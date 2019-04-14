/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:23:21 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 22:23:50 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *listptr;

	if (!begin_list)
		return (NULL);
	listptr = begin_list;
	while (listptr->next)
		listptr = listptr->next;
	return (listptr);
}
