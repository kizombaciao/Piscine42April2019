#include <stdio.h>

int ft_fibonacci(int index)
{

    if (index < 0)
    {
        return (-1);
    }

    if (index == 0)
    {
        return (0);
    }
    if (index == 1)
    {
        return (1);
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    int index;

    index = 6;

    index = ft_fibonacci(index);
    printf("\n%d", index);

}

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...