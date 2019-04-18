
#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j += 1;
		}
		i += 1;
	}
}
int		main(void)
{
	int a[6] = {9, 7, 6, 4, 1, 10};
	int i = 0;
	int size = 6;

	sort_int_tab(a, size);
	while (i < size)
		printf("%d ", a[i++]);
	return (0);
}
