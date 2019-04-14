/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 23:34:30 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 23:40:00 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	if ((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_par		*par;

	par = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!par)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		par[i].size_param = j;
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
