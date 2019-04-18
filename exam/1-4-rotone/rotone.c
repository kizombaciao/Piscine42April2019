#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s); // also, if not alphabet
		++s; // note, increment ++
	}
}
int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}

void ttt()
{
    
    while (*av[1]) {
        if (*av[1] != 'z') {
            c = *av[1] + 1;
        } else {
            c = 'a';
        }
    }
    
}
