
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    printf("222: %d   %d\n", *a, *b);

    int tmp;

    tmp = *a;

    *a = *a / *b;

    *b = tmp % *b;

}

int main()
{
    int na, nb;
    int *pa; 
    int *pb;

    na = 10;
    nb = -3;

    pa = &na;
    pb = &nb;

    ft_ultimate_div_mod(pa, pb);

    printf("\n111:  %d   %d", na, nb);

}