/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:12:05 by cchao             #+#    #+#             */
/*   Updated: 2019/04/14 23:12:27 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

t_btree		*btree_create_node(void *value)
{
	t_btree	*node;

	node = (t_btree*)malloc(sizeof(t_btree));
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->value = value;
	}
	return (node);
}
