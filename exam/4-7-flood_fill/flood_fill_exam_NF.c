#include "flood_fill.h"

void flood_fill(char **tab, t_point size, t_point begin)
{
	char c;
	int x;
	int y;

	c = tab[begin.y - 1][begin.x - 1];
	y = begin.y - 1;
	while (y < size.y)
	{
		x = begin.x - 1;
		while ((tab[y][x] == c || tab[y][x] == 'F') && x < size.x)
		{
			tab[y][x] = 'F';
			x++;
		}
		x = begin.x - 1;
		while ((tab[y][x] == c || tab[y][x] == 'F') && x >= 0)
		{
			tab[y][x] = 'F';
			x--;
		}
		y++;
	}
	x = begin.x - 1;
	while (x < size.x && tab[y][x] == c)
	{
		y = begin.y - 1;
		while ((tab[y][x] == c || tab[y][x] == 'F') && y < size.y)
		{
			tab[y][x] = 'F';
			y++;
		}
		y = begin.y - 1;
		while ((tab[y][x] == c || tab[y][x] == 'F') && y >= 0)
		{
			tab[y][x] = 'F';
			y--;
		}
		x++;
	}
}




