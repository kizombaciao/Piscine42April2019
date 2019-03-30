#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_putstr2(char *str)
{
    if (str)
    {
        while (*str)
        {
            ft_putchar(*str);
            ++str;
        }
    }
}

int main()
{
    char str[] = "howisyourday";

    ft_putstr(str);

    ft_putstr2(str);

    printf("\n111:   %s", str);
}