/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:01:31 by mstepina          #+#    #+#             */
/*   Updated: 2019/04/06 14:01:36 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int check_line(char n, unsigned char y, char **tab)
{
	unsigned char	x;

	x = 0;
	while (x < 9)
	{
		if (tab[y][x] == n)
			return (0);
		x++;
	}
	return (1);
}

int check_col(char n, unsigned char x, char **tab)
{
	unsigned char	y;

	y = 0;
	while (y < 9)
	{
		if (tab[y][x] == n)
			return (0);
		y++;
	}
	return (1); 
}

int	check_square(char n, unsigned char x, unsigned char y, char **tab)
{
	unsigned char	x2;
	unsigned char	y2;

	x2 = x - (x % 3);
	y2 = y - (y % 3);
	x = x2;
	y = y2;
	while (y < y2 + 3)
	{
		while (x < x2 + 3)
		{
			if (tab[y][x] == n)
				return (0);
			x++;
		}
		x = x2;
		y++;
	}
	return (1);
}

int is_legal(char n, unsigned char x, unsigned char y, char **tab)
{
	return (check_line(n, y, tab) && check_col(n, x, tab) && check_square(n, x, y, tab));
}



/*
char is_legal(char n, unsigned char x, unsigned char y, char **tab)
{
	if (check_line(n, y, tab) == 1 && check_col(n, x, tab) == 1 && check_square(n, x, y, tab) == 1)
		{
			printf("\n222a  %d", check_line(n, y, tab));
			printf("\n222b  %d", check_col(n, x, tab));
			printf("\n222c  %d", check_square(n, x, y, tab));

			return (1);

		}
	else
		return (0);
}

int main (int argc, char **argv)
{
	char flag;
	char n = '9';
	unsigned char x = '0';
	unsigned char y = '0';

	printf("\n\n");


	ft_print(&argv[1]);
	flag = is_legal(n, x, y, &argv[1]);

	//"9...7...." "2...9..53" ".6..7.124" "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47.......");
	
	printf("\nFLAG   %d", flag);
}


*/
