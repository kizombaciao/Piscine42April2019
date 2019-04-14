/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:15:06 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 19:16:37 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int base;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' \
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
	}
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	base = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		base = base * 10 + (str[i++] - '0');
	}
	return (sign * base);
}
