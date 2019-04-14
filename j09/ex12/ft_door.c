/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:36:16 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 14:38:35 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

t_bool	open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door->state = OPEN;
	return (TRUE);
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open?");
	return (door->state == OPEN);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close?");
	return (door->state == CLOSE);
}
