/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:44:15 by lusanche          #+#    #+#             */
/*   Updated: 2019/04/14 21:12:33 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	rush_print1(t_rush *data)
{
	if (data->rush == 0 || data->rush == 1 || data->rush == 2 \
			|| data->rush == 3 || data->rush == 4)
	{
		ft_putstr("[rush-0");
		ft_putnbr(data->rush);
		ft_putstr("] [");
		ft_putnbr(data->width);
		ft_putstr("] [");
		ft_putnbr(data->height);
		ft_putstr("] ");
	}
}

void	rush_print1a(t_rush *data)
{
	int i;

	if (data->rush == 5)
	{
		i = 0;
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

void	rush_print2(t_rush *data)
{
	int i;

	if (data->rush == 6)
	{
		i = 2;
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

void	rush_print2a(t_rush *data)
{
	if (data->rush == 7)
	{
		ft_putstr("[rush-02] [");
		ft_putnbr(data->width);
		ft_putstr("] [");
		ft_putnbr(data->height);
		ft_putstr("] ");
	}
}
