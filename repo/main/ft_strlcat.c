#include <stdio.h>
#include <unistd.h>


/*
** Appends the NULL-terminated string src to the end of dst.
** It will append at most size - strlen(dst) - 1 bytes, NULL-terminating
** the result.
*/

int my_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i])
        i++;
    return (i);
}

 unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] && j < size)
		j++;

	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (i < size)
		dest[j] = '\0';
	return (i + my_strlen(src));
}


int main()
{
    char s1[100] = "hereiam";
    char s2[] = "here";


    printf("\n111:   %d", ft_strlcat(s1, s2, 11));

    return (0);
}
