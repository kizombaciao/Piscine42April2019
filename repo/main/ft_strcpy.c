#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    char *tmp;

    printf("\n222:  %s   %s", dest, src);


    // who checks for buffer overflow???

    if (dest && src) {
        tmp = dest;
        while ((*dest++ = *src++))
            ;

        printf("\n222:  %s   %s", dest, src);
    }
    return(dest); // why does this not get returned???
}


int main()
{
    int n;
    char c;
    char d[] = "dest";
    char s[] = "src";
    char *p;


    p = ft_strcpy(d, s);

    printf("\n111:   %s    %s", ft_strcpy(d, s), d);

    return (0);
}