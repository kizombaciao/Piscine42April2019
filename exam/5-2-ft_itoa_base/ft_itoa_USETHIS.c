#include <stdio.h>
#include <stdlib.h>

// alternative
int tlen(int v, int b)
{
	int i = 1;
	while (v >= b)
	{
		v = v / b;
		i++;
	}
	return (i);
}
// alternative
char *tconvert(char *p, int v, int b, int l, int e)
{
	while (l - 1 >= e)
	{
		p[l - 1] = thex(v % b);
		v /= b;		
		l--;
	}
	return (p);
}
char thex(int n)
{
	char h[] = "0123456789abcdef";

	return (h[n]);
}
int rlen(int v, int b)
{
	if (v >= b)
	{
		return (rlen(v / b, b) + 1);
		//return (rlen(v % b, b) + 1);
	}
	else
		return (1);
}
void rconvert(char *p, int v, int b, int l)
{
	if (v > (b - 1))
	{
		rconvert(p, v / b, b, --l);
		rconvert(p, v % b, b, ++l); // how does this worK ???
	}
	p[l - 1] = thex(v % b);
	return ;
}
char *ft_itoa_base(int v, int b)
{
	int l;
	char *p;
	int sign;
	int e = 0;

	sign = 1;
	if (v < 0)
		sign = -1;
	l = (sign + 1) ? rlen(v, b) : rlen(sign * v, b) + 1;
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!p)
		return (NULL);
	p[l] = '\0';
	if (sign == -1)
	{
		p[0] = '-';
		e = 1;
	}
	//tconvert(p, sign * v, b, l, e);
	rconvert(p, sign * v, b, l);
	return (p);
}

int main()
{
	printf("\nmmm %s", ft_itoa_base(-65535, 16));
	printf("\nmmm %s", ft_itoa_base(-255, 16));
	printf("\nmmm %s", ft_itoa_base(4095, 16));
	printf("\nmmm %s", ft_itoa_base(255, 2));
	printf("\nmmm %s", ft_itoa_base(4095, 10));
	printf("\nmmm %s", ft_itoa_base(-4095, 10));
	printf("\nmmm %s", ft_itoa_base(4095, 8));
	printf("\nmmm %s", ft_itoa_base(-4095, 8));
}

//////////////////////////////////////
// Convert decimal to base 2, 8, 10, 16
