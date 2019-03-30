#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}

// below doesn't work because parameters are passed as local copy
// so you have a local copy of the address
// which means the addresses are not exchanged within main
void ft_swap2(int *a, int *b)
{
    int *tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int n1, n2;
    int *p1, *p2;

    n1 = 1;
    n2 = 2;

    p1 = &n1;
    p2 = &n2;

    ft_swap(p1, p2);

    printf("\n111:  %d   %d", n1, n2);

    printf("\n333:  %d   %d", *p1, *p2);


    ft_swap2(p1, p2);

    printf("\n222:  %d   %d", n1, n2);

}