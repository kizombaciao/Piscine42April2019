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
            printf("\n111:  %c", str2[i]);
        }
        i++;
	}
    
	i = 0; // assign 2 if it has also appeared in str1
	while (str1[i]) {
		if (vf[(int)str1[i]] == 1) // now if it also appeared in str1
        {
            vf[(int)str1[i]] = 2;
            printf("\n222:  %c", str1[i]);
            // create a new array keeping in order of those with double entry
        }
        i++;
	}
    printf("\n333:  %d  %d  %d", vf['t'], vf['e'], vf['s']);
    
    
	i = 0; // how does this ensure the same order?  doesn't preserve the order!!!
	while (i < 128) {
		if (vf[i] == 2) // output only those that appeared in both
		{
			c = i; // automatic typecast???
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
