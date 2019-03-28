#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int d1;
    int d2;

    d1 = -1;

    while (d1++ < 98)
    {
        d2 = d1;
        while (d2++ < 99)
        {
            ft_putchar('0' + (d1 / 10));
            ft_putchar('0' + (d1 % 10));
            ft_putchar(' ');
            ft_putchar('0' + (d2 / 10));
            ft_putchar('0' + (d2 % 10));
            if (d1 != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}

int main()
{
    ft_print_comb2();
    return (0);
}