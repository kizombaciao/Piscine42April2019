/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:25:26 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 17:28:06 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tmp;

	if (!(tmp = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	i = 0;
	while (i < length)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
