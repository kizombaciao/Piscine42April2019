#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

    i = '{';
	while (i-- > 'a')
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - ('a' - 'A'));
	ft_putchar('\n');;
	return (0);
}

void ttt()
{
    int i = '{';
    
    while (i-- > 'a') {
        (i % 2 == 0) ? write(1, &(i - ('a' - 'A'), 1) : write(1, &i, 1);
        write(1, &c , 1);
        i++;
    }
 }
