#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while (src != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("\n111:  %s", dest);
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




// https://linux.die.net/man/3/strncpy
