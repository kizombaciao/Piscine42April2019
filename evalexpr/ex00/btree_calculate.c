/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_calculate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:10:17 by cchao             #+#    #+#             */
/*   Updated: 2019/04/14 23:11:41 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int		calculate(int n1, char *op, int n2)
{
	if (op[0] == '+')
		return (n1 + n2);
	if (op[0] == '-')
		return (n1 - n2);
	if (op[0] == '*')
		return (n1 * n2);
	if (op[0] == '/')
		return (n1 / n2);
	if (op[0] == '%')
		return (n1 % n2);
	return (0);
}

int		btree_traversal(t_btree *node)
{
	int n1;
	int n2;
	int r;

	if (node)
	{
		if (is_numeric(node->value))
			return (ft_atoi(node->value)); // corrected!
		else
		{
			n1 = btree_traversal(node->left);
			n2 = btree_traversal(node->right);
			r = calculate(n1, node->value, n2);
			return (r);
		}
	}
	return (0);
}
