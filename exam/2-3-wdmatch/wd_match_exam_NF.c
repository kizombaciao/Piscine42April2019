#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int r;
	int t;
	int w;
	char c;
	int flag;
	int flag2;
	int len;
	int width;
	char temp[10000];

	r = 0;
	if (argc != 3) {
		c = '\n';
		write(1, &c, 1);
	} else {
		len = 0;
		while (argv[2][len]) {
			len++;
		}

/*		printf("\n111:  %d", len);
 */	
		width = 0;
		while (argv[1][width]) {
			width++;
		}
/*
		printf("\n222:  %d", width);
*/	
		k = 0;
		i = 0;
		while (argv[1][i]) {
				
			c = argv[1][i];
			j = k;
			flag = 1;
			while (argv[2][j] && flag) {

				if (c == argv[2][j]) {
					flag = 0;
					temp[r] = c;
					temp[r+1] = '\0';
					r++;

					k = j;
				}
				j++;
			}
			i++;
		}
		if (width == r) {

			t = 0;
			while (t < r) {
				c = temp[t];
				write(1, &c, 1);
				t++;
			}
		}
		c = '\n';
		write(1, &c, 1);
	}
}

/*
					printf("\n444:  %c\n", c);
			printf("\n%s   %d\n", temp, r);

			printf("\nCCC:  %c", c);

				printf("\n444:  %c", argv[2][j]);

		t = 0;

*/

