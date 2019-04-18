#include <unistd.h>

int main(int argc, char **argv) {
	int i;

	// we only need three parameters
	if (argc != 4) {
		write(1, "\n", 1);
		return 0;
	}

	// the second and third arguments must be letters
    // a letter is only one char
	if (argv[2][1] != '\0' || argv[3][1] != '\0') {
		write(1, "\n", 1);
		return 0;
	}

	// find and replace
	i = 0;
    while (argv[1][i] != '\0') {
        if (argv[1][i] == argv[2][0])
            argv[1][i] = argv[3][0];
        write(1, &argv[1][i], 1);
        i++;
    }

	write(1, "\n", 1);
	return 0;
}
/*
void ttt()
{
    while (*av[1]) {
        if (*av[1] == av[2][0]) {
            *av[1] = av[3][0];
        }
        *av[1]++
    }
}

/*

 while (*argv[1] != '\0') {
 if (*argv[1] == argv[2][0])
 *argv[1] = argv[3][0];
 write(1, argv[1], 1);
 argv[1]++;
 }
 */
