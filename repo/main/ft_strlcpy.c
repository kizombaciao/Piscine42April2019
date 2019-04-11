#include <stdio.h>
#include <unistd.h>

/*
** 'ft_strlcpy' copies a 'C-string' into another one, until 'size' chars are
** copied and guarantee to NUL-terminate the result.
*/

int my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = my_strlen(src);
    while (size > 1 && *src)
    {
        *dest++ = *src++;
        size--;
    }
    if (size >= 1)
        *dest = '\0';
    return (i);
}

int main()
{
    char s1[256] = "\0zxcvzxcvzxcvxzcvzxcv";

    printf("\n111:   %d", ft_strlcpy(s1, "asdf", 16));
    printf("\n111:   %d", ft_strlcpy(s1, "uiop", 0));
    printf("\n111:   %d", ft_strlcpy(s1, "qwerty", 4));
    printf("\n111:   %d", ft_strlcpy(s1, "", 4));




    return (0);
}