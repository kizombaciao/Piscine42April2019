#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		n;
	int		*s;

	n = max >= min ? max - min : min - max;
	if (!(s = (int *)malloc(sizeof(int) * (n)))) // using malloc inside if
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--; // more tricks
	*s = min; // ???
	return (s - n); // get back to beginning of the pointer
}
int main(int ac, char **av)
{
    char *s;
    int n, min, max;
    
    min = ft_atoi(av[1]);
    max = ft_atoi(av[2]);
    n = max - min > 0 ? max - min + 1 : min - max + 1;
    if (ac != 3) {
        return 0;
    }
    s = ft_range(min, max);
}
