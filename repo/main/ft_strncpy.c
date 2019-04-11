#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, const char *src, unsigned int n)
{
    char *tmp;

    tmp = dest;
    while (n--)
    {
        // if (*src) - why does this not work???
        if (*src == '\0')
        {
            *tmp++ = 0;
        }
        else
        {
            *tmp++ = *src++;
        }
    }
    printf("\n222:  %s", dest);
    return (dest);
}

int main()
{
    int n;
    char c;
    char src[] = "source";
    char dest[] = "destination";


    printf("\n111:   %s", ft_strncpy(dest, src, 3));

    return (0);
}


// note, that it does not erase what spaces is not used in destination.

// https://linux.die.net/man/3/strncpy
