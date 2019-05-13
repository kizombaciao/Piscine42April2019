#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_abc(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char opp(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('z' - (c - 'a'));
	else
		return ('Z' - (c - 'A'));
}

void alpha_mirror(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (is_abc(s[i]))
			ft_putchar(opp(s[i]));
		else
			ft_putchar(s[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	alpha_mirror(av[1]);
	ft_putchar('\n');
	return (0);
}