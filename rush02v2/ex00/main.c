/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:39:11 by lusanche          #+#    #+#             */
/*   Updated: 2019/04/14 20:41:47 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

int		rush_error(t_rush *data)
{
	return ((data->topleft != 'o' && data->topleft != '/' \
	&& data->topleft != 'A')
	|| (data->topright != '\0' && data->topright != 'A' \
	&& data->topright != 'C'
	&& data->topright != 'o' && data->topright != '\\')
	|| (data->bottomleft != '\0' && data->bottomleft != 'A' \
	&& data->bottomleft != 'C'
	&& data->bottomleft != 'o' && data->bottomleft != '\\'));
}

int		main(void)
{
	t_rush	*data;

	data = rush_create();
	data = rush_read(data);
	if (rush_error(data))
	{
		ft_putstr("aucune\n");
		return (0);
	}
	data = rush_solve_0_4(data);
	data = rush_solve(data);
	rush_print1(data);
	rush_print1a(data);
	rush_print2(data);
	rush_print2a(data);
	rush_print3(data);
	rush_print4(data);
	rush_print4a(data);
	rush_bonus(data);
	rush_destroy(data);
	return (0);
}
