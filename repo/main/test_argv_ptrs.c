#include <stdio.h>
#include <unistd.h>

// ./aaa "abc" "def" "ghi"

int main(int ac, char **av)
{
    char c = 'c';
    char s[] = "abcd";

    if (ac <= 0)
        return (0);

    printf("\n1   %c", c); // why does write need &c???
    printf("\n2   %s", &c); // DOES NOT WORK BECAUSE MISSING '\0'
    printf("\n3   %s", s); // s holds the address of the first char of the string
    printf("\n4   %c", s[0]);
    printf("\n5   %s", &s[0]); // note that %s will write till '\0'


    printf("\n111a  %c", *(*(av + 1) + 0)); // a
    printf("\n111b  %c", *(*(av + 2) + 0)); // d
    printf("\n111c  %c", *(*(av + 3) + 0)); // g

    printf("\n333a  %c", *(*(av + 1) + 1)); // b
    printf("\n333b  %c", *(*(av + 2) + 1)); // e
    printf("\n333c  %c", *(*(av + 3) + 1)); // h

    //printf("\n222a  %c", *(*(++av) + 0)); // a 
    //printf("\n222b  %c", *(*(++av) + 0)); // d
    //printf("\n222c  %c", *(*(++av) + 0)); // g

    printf("\n444a  %c", *(++*(++av))); // b
    printf("\n444a  %c", *(++*(++av))); // e
    printf("\n444a  %c", *(++*(++av))); // h

    return (0);
}