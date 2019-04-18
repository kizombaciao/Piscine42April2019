#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len) {
	int	max;

	if (!len) // check if len = 0
		return (0);
    
    // decrement first,
    // arbitrarily set max to last integer
	max = tab[--len];
    // trick: automatic false if len gets to zero
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
int main()
{
    int tab[] = {7, 6, 4};

    printf("%d", max(tab, 3));
    return (0);
}

/*
int		main(void) {
	int	*tab;
	if (!(tab = (int*)malloc(sizeof(int) * 3)))//
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d", max(tab, 3));
	return (0);
}
*/
