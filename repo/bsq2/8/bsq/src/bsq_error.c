#include "../inc/bsq.h"

int		ft_argc_error(int argc)
{
	if (argc == 1)
		return (0);
	return (1);
}

int     ft_open_error(int fd)
{
    if (fd == -1)
    {
        ft_putstr("open() failed.\n");
		return (0);
    }
    return (1);
}

int     ft_close_error(int fd)
{
    if (fd == -1)
    {
        ft_putstr("close() failed.\n");
		return (0);
    }
    return (1);
}
