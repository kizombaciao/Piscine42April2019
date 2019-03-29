
void ft_putchar(char c);

void ft_putnbr(int n)
{

    if (n = -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        n = (n % -1000000000) * -1;  // now n is a positive integer
    }
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n >= 10)
    {
        ft_nbr(n / 10);
        ft_putchar((n % 10) + '0');
    }
    else
    {
        ft_putchar(n + '0');
    }
}