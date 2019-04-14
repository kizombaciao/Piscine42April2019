void ft_putchar(char c);

int valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i])
    {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[i] < ' ' || base[i] > '~')
            return (0);
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int size;
    int to_nbr[100];
    int i;

    i = 0;
    size = 0;
    if (valid_base(base))
    {
        if (nbr < 0)
        {
            nbr *= -1;
            ft_putchar('-');
        }
        while (base[size])
            size++;
        while (nbr)
        {
            to_nbr[i] = nbr % size;
            nbr /= size;
            i++;
        }
        while (--i >= 0)
            ft_putchar(base[to_nbr[i]]);
    }
}