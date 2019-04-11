#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    int len;
    char *str;

    len = 0;
    while (src[len])
        len++;

    printf("\n222:  %d", len);

    if((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
        return (NULL);
        
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    if (str[i] == '\0')
        printf("\nHEY"); // how did the '\0' get added ???

    return (str); // we don't need to close with '\0'???
}


// note, I did not need to initialize.

int main()
{
    printf("\n%s", ft_strdup("test"));

}