/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:01:36 by mstepina          #+#    #+#             */
/*   Updated: 2019/04/07 21:40:41 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_inputs(char **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (ft_strlen(grid[i]) != 9)
			return (0);
		j = 0;
		while (j < 9)
		{
			if ((grid[i][j] < '0' || grid[i][j] > '9') && grid[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
