/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:48:40 by cchao             #+#    #+#             */
/*   Updated: 2019/03/31 19:48:43 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_t_left = 'o';
char	g_t_right = 'o';
char	g_b_left = 'o';
char	g_b_right = 'o';
char	g_h_side = '-';
char	g_v_side = '|';
char	g_space = ' ';

int		ft_putchar(char c);

void	rush00_top(int width)
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

void	rush00_bottom(int width)
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

void	rush00_mid(int width)
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

void	rush00(int width, int height)
{
	int j;

	if (width > 0 && height > 0)
	{
		rush00_top(width);
		j = 0;
		while (j < height - 2)
		{
			rush00_mid(width);
			ft_putchar(10);
			j++;
		}
		if (height > 1)
		{
			rush00_bottom(width);
			ft_putchar(10);
		}
	}
}
