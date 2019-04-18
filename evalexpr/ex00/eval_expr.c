/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:14:12 by cchao             #+#    #+#             */
/*   Updated: 2019/04/14 23:14:14 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int		eval_expr(char *s)
{
	t_btree		*root;
	int			r;

	r = 0;
	s = ft_trim(s);
	root = btree_create_node(s);
	btree_construct(root);
	r = btree_traversal(root);
	return (r);
}
