#include <stdio.h>
#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
    char *tmp;

    tmp = dest;

    printf("\n222:  %s    %s", dest, src);
    while (*dest)
    {
        dest++;
    }
    printf("\n222:  %sSRC  %s", dest, src);

    // DON'T KNOW WHY THIS WORKS???
    while ((*dest++ = *src++) != '\0')
    {
        ;
    }
    return (tmp);
}

int main()
{
    int n;
    char d[100] = "what";
    char s[] = "test";

    printf("\n111:   %s", ft_strcat(d, s));

    return (0);
}

/*
	i = 0;
while (dest[i] != '\0')
		i++;
j = 0;
while (src[j] != '\0')
{
	dest[i + j] = src[j];
	j++;
}
dest[i + j] = '\0';
return (dest);

*/