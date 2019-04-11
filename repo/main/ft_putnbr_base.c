#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int valid_base(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (base[0] == '\0' || base[1] == '\0') // ???
        return (0);
    while (base[i])
    {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[i] < ' ' || base[i] > '~') // non-printable
            return (0);
        while (base[j])
        {
            if (base[i] == base[j]) // same char twice
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

int main()
{
    char s10[] = "0123456789";
    char s2[] = "01";
    char s16[] = "0123456789ABCDEF";
    char s8[] = "poneyvif";

    //ft_putnbr_base(7, s8);
    ft_putnbr_base(40, "0123456789abcdef");
    printf("\n");
    //$expected = "28";
    ft_putnbr_base(31, "0123456789abcdef");
    printf("\n");
    //$expected = "1f";
    ft_putnbr_base(15, "01");
    printf("\n");
    //$expected = '1111';
    ft_putnbr_base(-15, "0123456789");
    printf("\n");
    ft_putnbr_base(-16, "01");
    printf("\n");
    //$expected = '-15-10000';
    ft_putnbr_base(2147483647, "0123456789abcdef");
    printf("\n");
    ft_putnbr_base(-2147483648, "0123456789abcdef");
    //$expected = '7fffffff-80000000';

    return (0);
}

// 0123456789
// 01
// 0123456789ABCDEF
// poneyvif