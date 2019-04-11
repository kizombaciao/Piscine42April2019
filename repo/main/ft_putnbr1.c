#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    // integer overflow
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = (nb % -1000000000) * -1;
    }

    // test for negative
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }

    // use recursion - start from the back.
    // note, even a void func can be used in recursion.
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}

int main()
{
    int n;
    char c;

    ft_putnbr(21474836);
    return (0);
}