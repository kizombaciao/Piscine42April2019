#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match(++s1, s2) || match(s1, ++s2));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, ++s2));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (match(++s1, ++s2));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
    printf("\n111   %d", match(av[1], av[2]));
}

/*
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')

*s1 == *s2      NOT NECESSARY!

*/

/*

int		match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
    printf("\n111   %d", match(av[1], av[2]));
}

*/