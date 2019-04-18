#include "cchao.h"

int func(int n1, int n2)
{
    return (n1 - n2);
}


int ft_is_sort(int *tab, int length, int (*f)(int, int))
{
    int i;

    i = 0;
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    int num;
    int arr[5] = {1, 5, 3, 4, 2};

    num = ft_is_sort(arr, 5, &func);   

    printf("\n%d", num);

}