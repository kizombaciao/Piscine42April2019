#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_13(char c)
{ // need to make sure to cycle like a clock
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	return (c);
}
int	main(int ac, char **av)
{
	if (ac == 2)
		while (*av[1])
			ft_putchar(rot_13(*av[1]++));  // cycle a char at a time
            // remember, av[1] is the content which happens to be an address
	ft_putchar('\n');
	return (0);
}
