#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9) // recursion
		ft_putnbr(n / 10);
	ft_putchar(n % 10 +'0');
}
int		main(int ac, char **av)
{
	av = 0;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
}

/*
void putnbr(int n)
{
    if (n > 9) {
        putnbr(n / 10);
    }
    putchar(n % 10 + '0');
}
*/
