#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_swap(char *a, char *b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int should_swap(char *a, char *b)
{
    int i;

    i = 0;
    while (a[i] == b[i])
    {
        i++;
    }
    if (a[i] > b[i])
    {
        return (1);
    }
    return (0);

}

int main(int ac, char **av)
{
    int i;
    int j;

     if (ac <= 0)
        return (0);

    i = 1;
    while (av[i][j])
    {
        j = 0;
        while (av[i][j])
        {

            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}
