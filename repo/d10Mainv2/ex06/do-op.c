#include "do-op.h"

int ft_add(int n1, int n2)
{
    return (n1 + n2);
}

int ft_subtract(int n1, int n2)
{
    return (n1 - n2);
}

int ft_multiply(int n1, int n2)
{
    return (n1 * n2);
}


int ft_divide(int n1, int n2)
{
    return (n1 / n2);
}


int ft_modulus(int n1, int n2)
{
    return (n1 % n2);
}

void ft_initialize(t_doop *opp)
{
    opp[0].oper = '+';
    opp[0].opfunc = &ft_add;
    opp[1].oper = '-';
    opp[1].opfunc = &ft_subtract;
    opp[2].oper = '*';
    opp[2].opfunc = &ft_multiply;
    opp[3].oper = '/';
    opp[3].opfunc = &ft_divide;
    opp[4].oper = '%';
    opp[4].opfunc = &ft_modulus;
}

int ft_calc(t_doop *opp, int n1, char op, int n2)
{
    int i;

    i = 0;
    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
    {
        while (i < NBOPER)
        {
            if (opp[i].oper == op)
            {
                //printf("\nMATCH  %c", op);
                return (opp[i].opfunc(n1, n2));
            }
            i++;
        }
    }
    return (0);
}

