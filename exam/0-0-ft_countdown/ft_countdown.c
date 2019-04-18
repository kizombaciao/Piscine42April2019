#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	char c;
	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
        printf("\n111:  %d", c);
		c--; /* because you are decrementing the ascii number */
	}
	write(1, "\n", 1);
	return (0);
}
