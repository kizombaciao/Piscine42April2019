#include <stdlib.h>
#include <stdio.h>
// first, find the length
// then call malloc to get memory for that length

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;

	while (src[len]) // first, find the length
		++len;
	if (!(s = (char *)malloc(sizeof(char) * (len + 1)))) // note, malloc used in if condition
		return (NULL);
	s[len] = '\0';
    while (len >= 0) // trick: copy from backward
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}

int main()
{
    char ttt[] = "test";
    char *aaa;
    
    printf("\n111:  %s", ft_strdup(ttt));
}
