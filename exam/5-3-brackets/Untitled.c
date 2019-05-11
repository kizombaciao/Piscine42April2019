void ft_putchar(char c)
{
    write(1, &c, 1);
}

// int to char display
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = (nb % 10000000) * -1);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}


// 123 / 10 = 12
// 12 / 10 = 1

// 1 % 10 = 1
// 12 % 10 = 2
// 123 % 10 = 3

// char to int
int ft_atoi(char *str)
{
    int i;
    int sign;
    int nb;

    // skip spaces
    i = 0;
    while (is_space(str[i]))
        i++;

    sign = 1;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    nb = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }

}