#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    int i = '{';
    
    while (i-- > 'a') {
        (i % 2 == 0) ? putchar(i) : putchar((i - ('a' - 'A')));
    }
 }
