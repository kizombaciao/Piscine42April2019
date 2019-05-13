#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*d;

	len = ft_strlen(s);
	
	if (!(d = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	
	return (d);
}

