#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1]) // cycle a char at a time
		{
			if (*av[1] >= 'A' && *av[1] <= 'Z') // upper case
			{
				*av[1] += 32; // add 32 to get to lower case
				write(1, av[1], 1);
			}
			else if (*av[1] >= 'a' && *av[1] <= 'z') // lower case
			{
				*av[1] -= 32; // subtract 32 to get to upper
				write(1, av[1], 1);
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (1);
}

/*
*(*(av + i) + j)
*/
