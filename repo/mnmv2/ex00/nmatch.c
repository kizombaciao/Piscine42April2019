#include <stdio.h>

int nmatch(char *s1, char *s2)
{
    if (!*s1 && !*s2)
        return (1);
    else if (*s2 == '*')
    {
        if (!*s1)
            return (nmatch(s1, s2 + 1));
        else
            return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
    }
    else if (*s1 == *s2)
        return (nmatch(s1 + 1, s2 + 1));
    else
        return (0);
    
    return (0);
}

int main(int ac, char **av)
{
    printf("\n111  %d", nmatch(av[1], av[2]));
    return (0);
}


/*

examples:
'abcbd' vs '*b*'  two solutions because
    first star can represent 'a' and second star can represent 'cbd'
    'abc' and 'd'

*/