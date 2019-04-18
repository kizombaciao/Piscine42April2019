/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:37:34 by mstepina          #+#    #+#             */
/*   Updated: 2019/04/07 22:07:20 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	solve(char **grid, int p)
{
	unsigned char	y;
	unsigned char	x;
	char			n;

	y = p / 9;
	x = p % 9;
	n = 1 + '0';
	if (p == 81)
		return (1);
	if (grid[y][x] != '.')
		return (solve(grid, p + 1));
	while (n < (10 + '0'))
	{
		if (is_legal(n, x, y, grid))
		{
			grid[y][x] = n;
			if (solve(grid, p + 1))
				return (1);
		}
		n++;
	}
	grid[y][x] = '.';
	return (0);
}
