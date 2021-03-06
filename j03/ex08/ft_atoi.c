/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:14:24 by cchao             #+#    #+#             */
/*   Updated: 2019/03/29 12:17:56 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int num;
	int neg;

	neg = 1;
	num = 0;
	while (*str && (*str == ' ' || *str == '\n' \
				|| *str == '\t' || *str == '\v' \
				|| *str == '\f' || *str == '\r'))
	{
		++str;
	}
	if (*str == '-')
	{
		neg = -1;
	}
	if (*str == '-' || *str == '+')
	{
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		++str;
	}
	return (num * neg);
}
