#include "colle.h"

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);

	rush04(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
