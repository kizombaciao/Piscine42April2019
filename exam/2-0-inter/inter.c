#include <unistd.h>
#include <stdio.h>

void solve(char *str1, char *str2) { // note, passed as single pointer
	int vf[128]; // because 128 ascii
    int	i;
	char c;

	i = 0;
	while (i < 128)
		vf[i++] = 0; // initializing all vf to zero.
	i = 0;
	while (str2[i]) { // assign 1 to vf if the ascii appeared in str2
		if (vf[(int)str2[i]] == 0) // typecast, using ascii as index
        {
            vf[(int)str2[i]] = 1; // trick used to mark ascii if appeared in str2
        }
        i++;
	}
    i = 0; // assign 2 if it has also appeared in str1
	while (str1[i]) {
		if (vf[(int)str1[i]] == 1) // now if it also appeared in str1
        {
            vf[(int)str1[i]] = 2; // setting to 2 is unnecessary.
            c = str1[i]; // just write if it appears in both
            write(1, &c, 1);
        }
        i++;
	}
}
int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
