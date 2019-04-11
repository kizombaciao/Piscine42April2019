#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int i;


    printf("\n222   %d", ++min);

    if (min >= max)
        return (NULL);

    if ((arr = (int *)malloc(sizeof(*arr) * (max - min))) == NULL)
        return (NULL);

    i = 0;
    while (min < max)
    {
        arr[i] = min++;
        i++;
    }

    return (arr);

}


int main()
{
    int i;
    int *arr;

    arr = ft_range(1, 10);
    
    i = 0;
    while (arr[i])  // how does int array know when to end???
    {
        printf("\n111:  %d", arr[i]);
        i++;
    }
}