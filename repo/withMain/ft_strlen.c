#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

int main()
{
    int n;

    char str[] = "testing";
    
    n = ft_strlen(str);

    printf("\n%d", n);
}