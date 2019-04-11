
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    //printf("222: %d\n", *nbr);

    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int main()
{
    int na, nb;
    int *pdiv, *pmod;
    int ndiv, nmod;


    na = 23;
    nb = 0;

    pdiv = &ndiv;
    pmod = &nmod;

    ft_div_mod(na, nb, pdiv, pmod);

    printf("\n111:  %d   %d", ndiv, nmod);

}