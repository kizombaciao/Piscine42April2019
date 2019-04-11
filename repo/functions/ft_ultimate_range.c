/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:16:21 by cchao             #+#    #+#             */
/*   Updated: 2019/04/04 20:17:29 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tmp;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	if ((tmp = (int *)malloc(sizeof(*tmp) * (max - min))) == NULL)
		return (0);
	i = 0;
	while (min + i < max)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (i);
}
