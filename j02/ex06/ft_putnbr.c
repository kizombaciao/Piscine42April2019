#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        /* ft_putstr("-2147483648"); */
        return;
    }
    
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

int main()
{
    ft_putnbr(4289);
    return (0);
}