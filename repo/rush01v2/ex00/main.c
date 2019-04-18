/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:38:15 by mstepina          #+#    #+#             */
/*   Updated: 2019/04/07 22:41:16 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int ac, char **av)
{
	char	**grid;

	grid = NULL;
	if (ac != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
	{
		grid = ft_build(ac, &av[1]);
		if (check_inputs(grid))
		{
			ft_print(grid);
			ft_putchar('\n');
			if (solve(&av[1], 0))
				ft_print(&av[1]);
			else
				ft_putstr("Error\n");
		}
		else
			ft_putstr("Error\n");
	}
	ft_destroy(grid);
	return (0);
}
