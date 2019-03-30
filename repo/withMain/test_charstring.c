#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char str1[5] = {'\0'};
    char *str;

    str = str1;

    // difference between if(str) vs if(*str) ???
    if (*str)
    {
        while (*str)
        {
            ft_putchar(*str);
            ++str;
        }
    }

    printf("\n111:   %s", str);
}