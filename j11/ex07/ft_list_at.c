/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:49:03 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 22:49:51 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int n;

	if (!begin_list)
		return (NULL);
	n = nbr;
	while (n-- && begin_list)
		begin_list = begin_list->next;
	return (n >= -1 ? begin_list : NULL);
}
