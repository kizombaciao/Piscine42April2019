#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    if (str)
    {
        while (*str)
        {
            ft_putchar(*str);
            str++;
        }
    }
}

int my_strcmp(char *s1, char *s2)
{
    while ((*s1 && *s2) && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void my_sort_ascii(int ac, char **av)
{
    int i;
    int flag;
    char *tmp;

    flag = 1;
    while (flag)
    {
        flag = 0;
        i = 1;
        printf("\nHEY");
        while (i < (ac - 1))
        {
            if (my_strcmp(av[i], av[i + 1]) > 0)
            {
                tmp = av[i];
                av[i] = av[i + 1];
                av[i + 1] = tmp;
                flag = 1;
            }
            i++;
        }
    }
}

int main(int ac, char **av)
{
    int i;

    printf("\nAC:  %d", ac);

    if (ac < 1)
        return (0);

    my_sort_ascii(ac, av);

    i = 1;
    while (i < ac)
    {
        my_putstr(av[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}

/*
void	ft_swap(char *a, char *b)
{
	char *tmp;

	tmp = a;
	a = b;
	b = tmp;
}
*/