#include <stdio.h>
#include <stdlib.h>

char *strrev(char *s)
{
    int len = 0;
    char *p;
    int i;
    
    while (s[len]) {
        len++;
    }
    // need to test for null with malloc?
    p = (char *)malloc(sizeof(char) * (len + 1));
    i = 0;
    while (i < len) {
        p[i] = s[len - i - 1];
        i++;
    }
    p[len] = '\0';
    return (p);
}
int main(int ac, char **av)
{
    if (ac == 2) {
        printf("\nFin:  %s", strrev(av[1]));
    }
}
