#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// ./aaa "abc" "def" "ghi"

int main(int ac, char **av)
{
    int i = 1;
    int j;

    if (ac <= 0)
        return (0);

    //av++;
    while (*(*(++av)))
    {
        j = 0;
        while (*(*(av)))
        {
            ft_putchar(*(*(av)));
            ++*(av);
            printf("\njjj  %d", j++);
        }
        printf("\niii  %d", i++);
        ft_putchar('\n');
        //++av;
    }
    return (0);
}