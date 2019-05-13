#include <unistd.h>

int main(int argc, char ** argv)
{
	int i;
	int j;
	char c;

	i = 1;
	while (i < argc) {
		j = 0;
		while (argv[i][j]) {
			c = argv[i][j];
			if (c >= 'A' && c <= 'Z') {
				c = c + ('a' - 'A');				
			} else if (c >= 'a' && c <= 'z') {
				c = c - ('a' - 'A');
			}
			write(1, &c, 1);
			j++;
		}
		c = ' ';
		write(1, &c, 1); 
		i++;
	}
	c = '\n';
	write(1, &c, 1);

	return (0);

}

