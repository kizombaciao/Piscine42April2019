#include "cchao.h"

void ft_swap_ptr(char **p1, char **p2)
{
    char *tmp;

    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{

    int h;
    int i;

    tab = ft_split_whitespaces(tab[0]);
    h = 0;
    while (tab && tab[h])
    {
        i = 0;
        while (tab[i])
        {
            if (tab[i + 1] && cmp(tab[i], tab[i + 1]) > 0)
            {
                ft_swap_ptr(&tab[i], &tab[i + 1]);
            }
            i++;
        }
        h++;
    }
    i = 0;
    while (tab[i])
        printf("\n%s", tab[i++]);
}

int main(int ac, char **av)
{
    if (ac <= 1)
        return (0);
    ft_advanced_sort_wordtab(&av[1], &ft_strcmp);

}
