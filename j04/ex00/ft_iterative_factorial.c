/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:58:50 by cchao             #+#    #+#             */
/*   Updated: 2019/03/30 15:03:56 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int num;
	int i;

	i = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb == 1)
	{
		return (1);
	}
	num = 1;
	while (i <= nb)
	{
		num *= i;
		i++;
	}
	return (num);
}
