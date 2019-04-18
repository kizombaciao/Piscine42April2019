#include <unistd.h>

int		main(void)
{
    char c = 'a';
	write(1, &c, 1);
    write(1, "a", 1);
    
	return (0);
}
