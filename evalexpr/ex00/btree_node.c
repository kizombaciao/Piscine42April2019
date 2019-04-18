/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:12:43 by cchao             #+#    #+#             */
/*   Updated: 2019/04/14 23:12:46 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

void	create_node(char *str, int i, t_btree *node)
{
	node->left = btree_create_node(ft_first(str, i));
	node->right = btree_create_node(ft_last(str, i));
	node->value = ft_get_op(str, i);
	btree_construct(node->left);
	btree_construct(node->right);
}

int		plus_minus(char *str, t_btree *node)
{
	int i;
	int p;

	p = 0;
	i = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
			p++;
		if (str[i] == ')')
			p--;
		if ((str[i] == '+' || str[i] == '-') && p == 0)
		{
			create_node(str, i, node);
			return (1);
		}
		i--;
	}
	return (0);
}

int		mult_div_mod(char *str, t_btree *node)
{
	int i;
	int p;

	i = ft_strlen(str) - 1;
	p = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
			p++;
		if (str[i] == ')')
			p--;
		if ((str[i] == '*' || str[i] == '/' || str[i] == '%') && p == 0)
		{
			create_node(str, i, node);
			return (1);
		}
		i--;
	}
	return (0);
}

void	btree_construct(t_btree *node)
{
	char	*str;

	if (node->value)
	{
		str = check_par(node->value);
		if (plus_minus(str, node) == 1)
			return ;
		if (mult_div_mod(node->value, node) == 1)
			return ;
	}
}
