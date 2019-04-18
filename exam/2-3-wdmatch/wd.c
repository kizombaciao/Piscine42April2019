#include <unistd.h>

int main(int ac, char **av)
{
    int vf[128];
    int i = 0;
    
    if (ac == 3) {
        // initialize vf to 0
        while (i < 128) {
            vf[i] = 0;
            i++;
        }
        while (*av[2]) {
            vf[(int)*av[2]] = 1;
            av[2]++;
        }
        while (*av[1]) {
            if (vf[(int)*av[1]] == 1) {
                write(1, av[1], 1);
                vf[(int)*av[1]] = 2;
            }
            av[1]++;
        }
    }
    return 0;
}
