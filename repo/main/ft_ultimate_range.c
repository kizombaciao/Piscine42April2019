#include <stdio.h>
#include <stdlib.h>

// is NULL and '\0' the same???
// note, we are passing **range!
// note, you have to create int *tmp

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tmp;

    if (min >= max)
    {
        *range = (void *)0;
        return (0);
    }

    if ((tmp = (int *)malloc(sizeof(*tmp) * (max - min))) == NULL)
        return (0);

    i = 0;
    while (min + i < max)
    {
        tmp[i] = min + i;
        printf("\n222:  %d", tmp[i]);
        i++;
    }
    *range = tmp;
    
    // KEEP BELOW!
    printf("\n222b:  %p", tmp);
    printf("\n222c:  %p", *range);
    printf("\n222d:  %p", range);
    printf("\n222e:  %d", **range);
    
    printf("\n222f:  %d", *(*range) + 1);
    printf("\n222g:  %d", (*range)[1]);

    return (i);
}


int main()
{
    int size;
    int **range;

    size = ft_ultimate_range(range, 1, 10);
    printf("\n111f:  %d", *(*range) + 2);
    printf("\n111g:  %d", (*range)[2]);

}