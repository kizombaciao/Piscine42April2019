/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:49:43 by cchao             #+#    #+#             */
/*   Updated: 2019/03/31 19:49:47 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_t_left = 'A';
char	g_t_right = 'C';
char	g_b_left = 'C';
char	g_b_right = 'A';
char	g_h_side = 'B';
char	g_v_side = 'B';
char	g_space = ' ';

int		ft_putchar(char c);

void	rush04_top(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(g_t_left);
		}
		else if (i == (width - 1))
		{
			ft_putchar(g_t_right);
		}
		else
		{
			ft_putchar(g_h_side);
		}
		i++;
	}
	ft_putchar(10);
}

void	rush04_bottom(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(g_b_left);
		}
		else if (i == (width - 1))
		{
			ft_putchar(g_b_right);
		}
		else
		{
			ft_putchar(g_h_side);
		}
		i++;
	}
}

void	rush04_mid(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0 || i == (width - 1))
		{
			ft_putchar(g_v_side);
		}
		else
		{
			ft_putchar(g_space);
		}
		i++;
	}
}

void	rush04(int width, int height)
{
	int i;
	int j;

	if (width > 0 && height > 0)
	{
		rush04_top(width);
		j = 0;
		while (j < height - 2)
		{
			rush04_mid(width);
			ft_putchar(10);
			j++;
		}
		if (height > 1)
		{
			rush04_bottom(width);
			ft_putchar(10);
		}
	}
}
