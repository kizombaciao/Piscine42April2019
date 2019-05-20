#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int i;

	if (n < 1)
		return ;

	if (n == 1)
		printf("1");

	i = 2;
	while (i <= n)
	{
		if ((n % i) == 0)
		{
			printf("%d", i);
			n = n / i;
			// if still greater than smallest prime
			if (n >= 2) 
				printf("*");
			i = 1;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
