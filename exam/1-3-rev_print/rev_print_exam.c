#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void rev_print(char *str)
{
	int len;

	len = ft_strlen(str);
	while (--len >= 0)
	{
		ft_putchar(str[len]);
	}
}


int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rev_print(av[1]);
	ft_putchar('\n');
	return (0);
}



