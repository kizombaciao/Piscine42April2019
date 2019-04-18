#include "sudoku.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char **ft_build(int ac, char **av)
{
    int i;
    char **tmp;

    if (!(tmp = (char **)malloc(sizeof(char *) * (ac))))
    {
        return (0);
    }
    tmp[ac - 1] = NULL;
    i = 0;
    while (i < ac - 1)
    {
        if (!(tmp[i] = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1))))
            return (0);
        tmp[i] = ft_strcpy(tmp[i], av[i]);
        i++;
    }
    return (tmp);
}

void	ft_destroy(char **factory)
{
	int i;

	i = 0;
	while (factory[i])
	{
		free(factory[i]);
		i++;
	}
	free(factory);
}