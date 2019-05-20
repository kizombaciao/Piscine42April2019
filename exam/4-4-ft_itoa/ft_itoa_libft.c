
static size_t   ft_itoa_len(int n)
{
    size_t  l;

    if (!n)
        return (1);
    l = 0;
    if (n < 0)
        l++;
    while (n)
    {
        n /= 10;
        l++;
    }
    return (l);
}

char *ft_itoa(int n)
{
    size_t  l;
    size_t  e;
    char    *s;

    l = ft_itoa_len(n);
    if (!(s = (char *)malloc(sizeof(char) * (l + 1))))
        return (NULL);
    s[l] = '\0';

    if (n < 0)
    {
        s[0] = '-';
        e = 1;
    }
    else
        e = 0;
    while (l-- > e) // better approach, using 'floor'!
    {
        // alternative to 'sign'
        s[l] = '0' + n % 10 * (n < 0 ? -1 : 1); 
        n /= 10;
    }
    return (s);
}

// because of looping backward, we take '% then /' approach.
// rather than '/ then %' approach, with recursion.

/*
Trick:  use e to stop while loop early.
Trick:  ternary condition
Edge:   zero condition.
Note:   static???
Allocate (with malloc(3)) and returns a “fresh” string end- ing with ’\0’ 
representing the integer n given as argument. 
Negative numbers must be supported. If the allocation fails, 
the function returns NULL.
*/