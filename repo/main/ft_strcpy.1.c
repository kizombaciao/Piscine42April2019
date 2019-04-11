#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        printf("\n%d", i);
        i++;
    }
    dest[i] = '\0';
    return(dest); // why does this not get returned???
}

int main()
{
    int n;
    char c;
    char d[] = "";
    char s[] = "src";
    char *p;


    p = ft_strcpy(d, s);

    printf("\n111:   %s    %s", ft_strcpy(d, s), d);

    return (0);
}