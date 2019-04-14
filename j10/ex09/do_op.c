/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:03:12 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 19:10:23 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"


/*
void	ft_initialize(t_doop *opp)
{
	opp[0].oper = '+';
	opp[0].opfunc = &ft_add;
	opp[1].oper = '-';
	opp[1].opfunc = &ft_subtract;
	opp[2].oper = '*';
	opp[2].opfunc = &ft_multiply;
	opp[3].oper = '/';
	opp[3].opfunc = &ft_divide;
	opp[4].oper = '%';
	opp[4].opfunc = &ft_modulus;
}
*/

int		ft_calc(t_doop *opp, int n1, char op, int n2)
{
	int i;

	i = 0;
	if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		while (i < NBOPER)
		{
			if (opp[i].oper == op)
			{
				return (opp[i].opfunc(n1, n2));
			}
			i++;
		}
	}
	return (0);
}
