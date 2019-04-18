#include "cchao.h"

int main()
{
    int i = 0;

    int arr[5] = {1, 2, 3, 4, 5};
    int *tab;

    tab = ft_map(arr, 5, &ft_sq);

    i = -1;
    while (++i < 5)
    {
        printf("\n%d", tab[i]);
    }

    return (0);
}