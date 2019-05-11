#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_a(char c)
{
	return(c == 'a');
}

int main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	
	i = 0;
	while (av[1][i])
	{
		if (is_a(av[1][i]))
		{
			ft_putchar('a');
			ft_putchar('\n');	
			return (0);
		}
		i++;
	}
	ft_putchar('\n');			
	return (0);
}

