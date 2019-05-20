#include <unistd.h>
#include <stdio.h>


int hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j++])
			i++;
	}
	if (s1[i] == '\0')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	printf("\n111 %d", hidenp(av[1], av[2]));
	return (0);
}