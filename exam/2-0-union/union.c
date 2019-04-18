#include <unistd.h>

int		not_seen_before(char *s, int max_pos, char c) {
	int i; // check if that char has appeared upto the index
	i = -1;
	while (++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}
void	ft_union(char *s1, char *s2) {
	int	i;
	int j;
	i = -1; // so that i will start at 0
	while (s1[++i]) // loop through s1 and display chars only once.
        if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	j = -1; // so that j will start at 0
	while (s2[++j]) // note how s2[j] is checked against s1
		if (not_seen_before(s1, i, s2[j]) && not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1); // i will be the full length of s1
} // j will be indexed up to the loop
int		main(int ac, char **av) {
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
// how about create one long string: s1+s2
// then loop through the long string
// if it hasn't appeared up to the index, then write
// rather than keeping s1 and s2 separate as above.

// Below won't work since we need to retain order
// create an array using ascii of 128 as index
// enter 1 in array for ascii that has appeared at least once in av[2]
// loop through av[1] and find ones that have appeared in both
// write those as display
