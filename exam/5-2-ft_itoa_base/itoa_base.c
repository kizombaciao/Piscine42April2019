#include <stdlib.h>
#include <stdio.h>

//////////////////////////////////////////////////////
// determine the malloc memory needed
// taking account of the negative sign
// keep track of needed loop
// introduce variable sign to control loops
char *ft_itoa_base(int value, int base)
{
    char *s;
    int n, sign, i; // i is used to determine sizeoff for malloc
    int j = 0;
    
    n = (value < 0) ? -value : value; // if negative, make positive
    sign = (value < 0 && base == 10) ? -1 : 0; // why 0? used to control loops
    
    i = (sign == -1) ? 2 : 1; // where to start the index
    while ((n /= base) >= 1) { // to find sizeof for malloc
        i++;
    }
    //printf("\ni1:   %d", i);
    s = (char *)malloc(sizeof(char) * (i + 1)); // allocate memory
    s[i] = '\0';  // end the string with NULL
    
    n = (value < 0) ? -value : value;
    while (i-- + sign) { // with sign = -1, we stop 1 loop earlier
        //printf("\n111:  %d  %d  %d  %d", n, i, sign, i+sign);
        // convert int to string
        // 2nd case is to handle hexadecimal: eg, 16 - 10 + 'A'
        s[i] = (n % base < 10) ? n % base + '0' : (n % base - 10) + 'A';
        n /= base;
    }
    //printf("\ni2:   %d", i);
    
    (i == 0) ? s[i] = '-' : 0; // 0 is dummy
    
    return (s);
}
////////////////////////////////////////////////////
int main(int ac, char **av)
{
    if (ac == 3) {
        printf("\n%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));
    }
    return 0;
}

/*
 Write a function that converts an integer value to a null-terminated string
 using the specified base and stores the result in a char array that you must
 allocate.
 
 The base is expressed as an integer, from 2 to 16. The characters comprising
 the base are the digits from 0 to 9, followed by uppercase letter from A to F.
 
 For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".
 
 If base is 10 and value is negative, the resulting string is preceded with a
 minus sign (-). With any other base, value is always considered unsigned.
 
 Your function must be declared as follows:

 
 
 
 char    *ft_itoa_base(int value, int base);

 int        atoi(char *s)
 {
 int        sign;
 long    r;
 
 r = 0;
 sign = 1;
 while (*s == 32 || (*s >= 9 && *s <= 13))
s++;
if (*s == '-')
{
    sign = -1;
    s++;
}
if (*s == '+')
s++;
while (*s >= '0' && *s <= '9')
{
    r = r * 10 + *s - '0';
    s++;
}
return (sign * (int)r); // type cast
}
 */
