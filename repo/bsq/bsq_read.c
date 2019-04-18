#include <stdio.h>

void bsq_read()
{
	int		i;
	int		j;
	char	c;
	int		nrow, ncol;
	char	prev;
	int		m[100][100];

	i = 0;
	j = 0;
	while (read(0, &c, 1) > 0)
	{
		if (c == '\n')
		{
			i++;
			ncol = j;
			j = 0;
		}
		else
		{
			m[i][j] = c;
			j++;	
		}
	}
	nrow = i;
	bsq_print(nrow, ncol, m);
}




/*
		if (data->topleft == '\0')
			data->topleft = c;
		if (c == '\n' && i == 0 && j > 1)
			data->topright = prev;
		if (c == '\n')
			i++;
		if (i == 0)
			j++;
		if (prev == '\n')
			data->bottomleft = c;
		prev = c;
	}
	data->width = j;
	data->height = i;
	return (data);
*/