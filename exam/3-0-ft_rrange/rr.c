#include <stdlib.h>
#include <stdio.h>

// get the length


int *ft_rr(int start, int end)
{
    int *r;
    int len;
    
    // plus 1 because we have inclusive
    len = (end >= start) ? end - start + 1 : start - end + 1;
    r = (int *)malloc(sizeof(int) * len);
    
    while (len--) {
        r[len] = (end >= start) ? end-- : end++;
        printf("\n222   %d  %d", len, end+1);
    }
    return (r);
}

int main()
{
    int *p;
    
    p = ft_rr(-5, 5);
    while (*p) {
        printf("\n111   %d", *p);
        p++;
    }
}
