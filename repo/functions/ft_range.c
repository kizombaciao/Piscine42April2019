/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:09:23 by cchao             #+#    #+#             */
/*   Updated: 2019/04/04 20:10:14 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
		return (NULL);
	if ((arr = (int *)malloc(sizeof(*arr) * (max - min))) == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
