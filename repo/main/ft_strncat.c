#include <stdio.h>
#include <unistd.h>

char *ft_strncat(char *dest, char *src, int nb)
{
    char *tmp;

    tmp = dest;
    while (*dest)
    {
        dest++;
    }
    while (nb--)
    {
        *dest++ = *src++;
    }
    *dest = '\0';

    return (tmp); // ??? why must i have to create a tmp???

}


int main()
{
    int n;
    char d[100] = "what";
    char s[] = "test";

    printf("\n111:   %s", ft_strncat(d, s, 6));

    return (0);
}