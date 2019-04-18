#include <stdio.h>
#include <unistd.h>

// easier version to understand
int main(int ac, char **av)
{
    int vf[128];
    int i = 0;
    char c;
    
    if (ac == 3) {
        // initialize vf to 0
        while (i < 128) {
            vf[i] = 0;
            i++;
        }
        // set vf = 1 if it appears in av[2]
        while (*av[2]) {
            vf[(int)*av[2]] = 1;
            av[2]++;
        }
        // if av[1] appeared in vf, then print
        while (*av[1]) {
            if (vf[(int)*av[1]] == 1) {
                write(1, av[1], 1);
                vf[(int)*av[1]] = 2;
            }
            av[1]++;
        }
    } else {
        write(1, "\n", 1);
    }
    return 0;
}
