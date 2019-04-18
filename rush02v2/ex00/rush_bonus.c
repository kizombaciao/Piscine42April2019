/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:42:13 by lusanche          #+#    #+#             */
/*   Updated: 2019/04/14 20:43:51 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	rush_bonus(t_rush *data)
{
	if (data->width == data->height)
	{
		ft_putstr("[square] [");
		ft_putnbr(data->width);
		ft_putstr("] [");
		ft_putnbr(data->height);
		ft_putstr("] ");
	}
	ft_putstr("[rectangle] [");
	ft_putnbr(data->width);
	ft_putstr("] [");
	ft_putnbr(data->height);
	ft_putstr("]\n");
}
