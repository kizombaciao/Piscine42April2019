/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:13:18 by cchao             #+#    #+#             */
/*   Updated: 2019/04/14 23:13:24 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

char	*ft_first(char *s, int i)
{
	char	*r;
	int		j;

	j = 0;
	r = (char *)malloc(i + 1);
	while (j < i)
	{
		r[j] = s[j];
		j++;
	}
	r[j] = '\0';
	return (r);
}

char	*ft_last(char *s, int i)
{
	int		len;
	char	*r;

	len = 0;
	while (s[i + 1 + len] != '\0')
		len++;
	r = (char *)malloc(len + 1);
	len = 0;
	while (s[i + 1 + len] != '\0')
	{
		r[len] = s[i + 1 + len];
		len++;
	}
	r[len] = '\0';
	return (r);
}

char	*ft_get_op(char *s, int i)
{
	char	*op;

	op = (char *)malloc(2);
	op[0] = s[i];
	op[1] = '\0';
	return (op);
}

char	*remove_par(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	s[i - 1] = '\0';
	return (&s[1]);
}

char	*check_par(char *s)
{
	int i;
	int p;

	p = 0;
	i = 0;
	if (s[0] == '(')
	{
		while (s[i + 1] != '\0')
		{
			if (s[i] == '(')
				p++;
			if (s[i] == ')')
				p--;
			if (p == 0)
				return (s);
			i++;
		}
		return (remove_par(s));
	}
	return (s);
}
