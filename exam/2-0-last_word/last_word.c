#include <unistd.h>

int		ft_isblank(char c) // modularize
{
    if (c == ' ' || c == '\t') // return(c == ' ' || c == '\t');
		return (1);
	return (0);
}
int		main(int ac, char **av)
{
	if (ac == 2)  // given no error statements required
	{
		while (*av[1]) // get to the end of the string
			av[1]++; // note, av[1]++
		av[1]--; // now decrement from the end
		while (ft_isblank(*av[1])) // ignore spaces and tabs, end of the word
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1])) // to front of the last word
			av[1]--;
		av[1]++; // because overshot
		while (*av[1] && !ft_isblank(*av[1])) // display last word
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
