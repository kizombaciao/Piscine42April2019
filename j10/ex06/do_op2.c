/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op_math.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:07:22 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 19:07:30 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_add(int n1, int n2)
{
	return (n1 + n2);
}

int		ft_subtract(int n1, int n2)
{
	return (n1 - n2);
}

int		ft_multiply(int n1, int n2)
{
	return (n1 * n2);
}

int		ft_divide(int n1, int n2)
{
	return (n1 / n2);
}

int		ft_modulus(int n1, int n2)
{
	return (n1 % n2);
}
