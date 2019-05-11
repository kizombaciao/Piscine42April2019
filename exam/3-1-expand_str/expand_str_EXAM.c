#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int is_sp(char c)
{
	return (c == ' ' || c == '\t');
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int rb_sp(char *s)
{
	int i;

	i = 0;
	while (s[i] && is_sp(s[i]))
		i++;
	return (i);
}

int re_sp(char *s)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = len - 1;
	while (s[i] && is_sp(s[i]))
		i--;
	return (i);
}

void expand_str(char *s)
{
	int i;
	int j;

	i = rb_sp(s);
	j = re_sp(s);
	while (i <= j)
	{
		if (!is_sp(s[i]))
			ft_putchar(s[i]);
		else
		{
			ft_putstr("   ");
			while (is_sp(s[i]))
				i++;
			i--;
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
	expand_str(av[1]);
	ft_putchar('\n');
	return (0);
}
