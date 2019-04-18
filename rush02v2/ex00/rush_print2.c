/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_print2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:10:28 by lusanche          #+#    #+#             */
/*   Updated: 2019/04/14 21:10:34 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	rush_print3(t_rush *data)
{
	int i;

	if (data->rush == 8)
	{
		i = 3;
		while (i <= 4)
		{
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(data->width);
			ft_putstr("] [");
			ft_putnbr(data->height);
			ft_putstr("]");
			if (i == 4)
				ft_putstr(" ");
			else
				ft_putstr(" || ");
			i++;
		}
	}
}

void	rush_print4(t_rush *data)
{
	if (data->rush == 9)
	{
		ft_putstr("[rush-03] [");
		ft_putnbr(data->width);
		ft_putstr("] [");
		ft_putnbr(data->height);
		ft_putstr("] ");
	}
}

void	rush_print4a(t_rush *data)
{
	int i;

	if (data->rush == 10)
	{
		i = 1;
		while (i <= 2)
		{
			ft_putstr("[rush-0");
			ft_putnbr(i * 2);
			ft_putstr("] [");
			ft_putnbr(data->width);
			ft_putstr("] [");
			ft_putnbr(data->height);
			ft_putstr("]");
			if (i == 2)
				ft_putstr(" ");
			else
				ft_putstr(" || ");
			i++;
		}
	}
}
