

if (n == 1)
	c = 0;
i = 2;
while (i <= n)
	if (isp(i))
		c += i;

pnbr(c);
===================

i = 2;
while (i < n)
{
	if (n%i == 0)
		return (0)
	i++;
}

===============

if (n >= 16)
	ph(n / 16);
n = n % 16;
if (n < 10)
	n = n + '0'
else
	n = n - 10 + 'a'

==============
i = 2;
while (i <= n)
{
	if ((n%i) == 0)
	{
		printf("%d\n", i);
		n = n / i;
		if (n >= 2)
			printf("*");
		i = 1;
	}
	i++;
}