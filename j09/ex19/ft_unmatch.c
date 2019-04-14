/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:41:02 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 14:42:15 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int curr;
	int find;

	curr = 0;
	while (curr < length)
	{
		i = 0;
		find = 0;
		while (i < length && !find)
		{
			if (i != curr)
				find = (tab[i] == tab[curr]) ? 1 : 0;
			i++;
		}
		if (!find)
			return (tab[curr]);
		curr++;
	}
	return (tab[curr]);
}
