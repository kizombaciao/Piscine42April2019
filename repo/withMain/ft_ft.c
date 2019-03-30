
#include <stdio.h>

void ft_ft(int *nbr)
{
    printf("111: %d\n", *nbr);
    *nbr = 42;
}

int main()
{
    int n;
    int *ptr;

    n = 2;
    ptr = &n;

    ft_ft(ptr);

    printf("%d", *ptr);
}