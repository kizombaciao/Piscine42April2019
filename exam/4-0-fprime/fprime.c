#include <stdlib.h>
#include <stdio.h>
int        ft_atoi(char *s)
{
    int        sign;
    long    r;
    
    r = 0;
    sign = 1;
    while (*s == 32 || (*s >= 9 && *s <= 13)) /* skip special chars */
        s++;
    if (*s == '-') /* check if negative number */
    {
        sign = -1;
        s++;
    }
    if (*s == '+') /* check if positive char used */
        s++;
    while (*s >= '0' && *s <= '9')
    {
        r = r * 10 + *s - '0';
        s++;
    }
    return (sign * (int)r);
}
// how does the code ensure that the factors are prime numbers???
// why no isPrime() function calls???
void	fprime(unsigned int nb)
{
	unsigned	i;

	if (nb == 1)
		printf("1"); // can we ignore if nb = 1???
	else
	{
		i = 1;
		while (i < nb) // amended from (nb > 1)
		{
			if (nb % ++i == 0) // found a factor
			{
				printf("%d", i);
				nb /= i;
				if (nb > 1) // to know if there are more factors
					printf("*");
				--i; // not sure if this is correct???
			} // b/c if there was a lower factor, we would have seen it
		}
	}
}
int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1])); // NEED ATOI()
	printf("\n");
	return (0);
}
