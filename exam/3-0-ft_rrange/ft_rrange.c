#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

    // len is equal to either:
    // like doing two if else conditions
	// +1 because it is inclusive
	len = (end >= start) ? end - start + 1 : start - end + 1;
    
	// malloc used in if condition
	if (!(r = (int*)malloc(sizeof(int) * len))) // note, malloc inside if
		return (NULL);
    
	while (len--) // trick: using ? condition inside of a statement
		 r[len] = (end >= start) ? start++ : start--; // no need to be in order
	return (r);
}

/*

int *ft_rrange2(int start, int end)
{
	int *r;
	int len;

	len = (end >= start) ? end - start + 1 : start - end + 1;

	while (len--)
		r[len] = (end >= start) ? start++ : start--


}

*/