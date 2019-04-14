/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:46:34 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 19:47:49 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_ptr(char **p1, char **p2)
{
	char *tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
{
	int h;
	int i;

	h = 0;
	while (tab && tab[h])
	{
		i = 0;
		while (tab[i])
		{
			if (tab[i + 1] && ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap_ptr(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		h++;
	}
}
