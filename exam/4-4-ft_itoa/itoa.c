#include <stdio.h>
#include <stdlib.h>

// use example -17 and 17
// negative number
// sizeof
// malloc
char *itoa(int n)
{
    int sign = 1, n2, len; // sign to handle case of negative
    char *s;
    
    n2 = n;
    if (n < 0) {
        sign = -1;
        n2 = sign * n; // positive integer now
    }
    while (n2 > 0) {
        n2 /= 10;
        len++;
    }
    // len for negative # is 1 unit longer
    len = (sign == -1) ? len + 1: len;
    s = (char *)malloc(sizeof(char) * (len + 1));
    s[len] = '\0';
    
    if (sign == -1) {
        s[0] = '-';
    }
    n2 = n;
    if (n < 0) {
        sign = -1;
        n2 = sign * n; // positive integer now
    }
    // loop backward
    // mod to get the 1s place digit
    // divide to set up the 10s place for 1s place
    while (len-- + sign) {
        s[len] = n2 % 10 + '0';
        n2 /= 10;
    }
    return (s);
}
int main(int ac, char **av)
{
    if (ac == 3) {
        printf("\n999:  %s", itoa(atoi(av[1])));
    }
    return 0;
}

/*
 Write a function that takes an int and converts it to a null-terminated string.
 The function returns the result in a char array that you must allocate.
 
 Your function must be declared as follows:
 
 char    *ft_itoa(int nbr);
*/
