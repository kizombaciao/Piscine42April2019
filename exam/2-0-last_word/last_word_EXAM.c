#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int is_sp(char c)
{
	return (c == ' ' || c == '\t');
}

void last_word(char *s)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = --len;
	while (s[i] && is_sp(s[i]))
		i--;
	while (s[i] && !is_sp(s[i]))
		i--;
	i++;
	while (s[i] && !is_sp(s[i]))
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	last_word(av[1]);
	return (0);
}

