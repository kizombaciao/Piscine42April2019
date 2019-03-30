#include <stdio.h>
#include <unistd.h>

void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int tmp;

    i = 0;
    while (i < size)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    }

    i = 0;
    while (i < size)
    {
        printf("\n%d", tab[i]);
        i++;
    }
}

int main()
{
    int arr[] = {9, 1, 5, 3, 4, 2, 1, 1, 0};

    ft_sort_integer_table(arr, 9);

}