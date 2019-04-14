/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:20:11 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 19:22:21 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int			main(int ac, char **av)
{
	int		n1;
	char	*op;
	int		n2;
	t_doop	opp[NBOPER];

	if (ac != 4)
		return (0);
	n1 = ft_atoi(av[1]);
	n2 = ft_atoi(av[3]);
	op = av[2];
	if (n2 == 0 && *op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (n2 == 0 && *op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_initialize(opp);
	ft_putnbr(ft_calc(opp, n1, *op, n2));
	ft_putchar('\n');
	return (0);
}
