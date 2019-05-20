#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

void ulstr(char *s)
{
	int i;
	char c;

	i = 0;
	while (s[i])
	{
		if (is_alpha(s[i]))
		{
			if (is_lower(s[i]))
			{
				c = s[i] - 32;
				ft_putchar(c);
			}

			if (is_upper(s[i]))
			{
				c = s[i] + 32;
				ft_putchar(c);
			}
		}
		else
		{
			ft_putchar(s[i]);
		}
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

	ulstr(av[1]);

	ft_putchar('\n');
	return (0);
}