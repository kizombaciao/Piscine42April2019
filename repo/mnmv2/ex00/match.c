#include <stdio.h>

int match(char *s1, char *s2)
{
    if (*s1 && *s2 == '*')
    {
        //printf("\n222a");    
        return (match(s1 + 1, s2) || match(s1, s2 + 1));
    }
    if (!*s1 && *s2 == '*')
    {
        //printf("\n222b");    
        return (match(s1, s2 + 1));
    }
    if (*s1 == *s2 && *s1 && *s2)
    { 
        //printf("\n222c");    
        return (match(s1 + 1, s2 + 1));
    }
    if (!*s1 && !*s2)
    {
        //printf("\n222d");    
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 3)
        return (0);

    printf("\n111   %d", match(av[1], av[2]));
    return (0);
}

// EXAMPLE:
// s1 = "ab"   s2 = "ab*"


// s1 = text
// s2 = pattern, can contain *

// Approach:  figure out the terminus first!
// 5 CASES:
// 1. S1 CHAR, S2 *
// 2. S1 EMPTY, S2 *
// 3. S1 CHAR, S2 CHAR, S1 == S2
// 4. S1 EMPTY, S2 EMPTY, S1 == S2      => we are at the end
// 5. S1 != S2

// NOTE, the av need quotations for the function to work!

/*
contains(tex[], pat[])
    1) If current character is last character of text, but pat
       has more characters, return false.

    2) Else If current character is last character of pattern,
       then return true

    3) Else If current characters of pat and text match, then
        return contains(text + 1, pat + 1);

    4) Else If current characters of pat and text don't match
        return contains(text + 1, pat);
*/


/*
// if both strings are empty
    if (!*s1 && !*s2)
        printf("\n222");    
        //return (1);


*/