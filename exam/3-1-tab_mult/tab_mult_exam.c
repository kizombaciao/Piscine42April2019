#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_is_space(char c)
{
    return (c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\f' || c == '\r');
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nb;

    i = 0;
    while (ft_is_space(str[i]))
        i++;
    sign = 1;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    nb = 0;
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = (nb % 1000000000) * -1; 
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void ft_display(int nb)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(nb);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');		
		ft_putnbr(i * nb);
		ft_putchar('\n');
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
	ft_display(ft_atoi(av[1]));
	return (0);
}

