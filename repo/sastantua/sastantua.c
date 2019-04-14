/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:49:29 by cchao             #+#    #+#             */
/*   Updated: 2019/03/31 22:04:49 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NB_LINES(a) (2 * a + a * (a + 1) / 2)
#define DOOR_SIZE(a) (a - ((a % 2) ? 0 : 1))

void	ft_putchar(char c);


void	ft_n_putchar(char c, int n)
{
	while (n--)
	{
		ft_putchar(c);
	}
}

void	ft_build_rows(int line, int size, int stars, int spaces)
{
	ft_n_putchar(' ', spaces);
	ft_putchar('/');
	if (line >= NB_LINES(size) - DOOR_SIZE(size))
	{
		ft_n_putchar('*', stars - (DOOR_SIZE(size) - 1) / 2);
		if (size >= 5 && line == NB_LINES(size) - DOOR_SIZE(size) / 2 - 1)
		{
			ft_n_putchar('|', DOOR_SIZE(size) - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
		{
			ft_n_putchar('|', DOOR_SIZE(size));
		}
		ft_n_putchar('*', stars - (DOOR_SIZE(size) - 1) / 2);
	}
	else
	{
		ft_n_putchar('*', stars * 2 + 1);
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int i;
	int counter;
	int tier;
	int line;
	int stars[NB_LINES(size)];

	i = 0;
	tier = 1;
	counter = 0;
	while (tier++ <= size)
	{
		line = 1;
		while (line++ < (tier + 2))
		{
			stars[i] = counter;
			counter++;
			i++;
		}
		counter += ((tier % 2) ? (tier - 1) / 2 : tier / 2) + 1;
	}
	i = -1;
	while (++i < NB_LINES(size))
	{
		ft_build_rows(i, size, stars[i], stars[NB_LINES(size) - 1] - stars[i]);
	}
}
