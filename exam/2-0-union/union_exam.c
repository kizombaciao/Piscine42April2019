#include <unistd.h>

// the code i wrote below is not very readable!
int main(int argc, char** argv)
{
	int i;
	int j;
	int k;
	int r;
	char c;
	char temp[10000];
	int flag;

	r = 0;
	if (argc != 3) {
		c = '\n';
		write(1, &c, 1);
	} else {
		i = 1;
		while (i < argc) {
			j = 0;
			while (argv[i][j]) {

				k = 0;
				c = argv[i][j];
				flag = 0;
				while (temp[k]) {
					if (c == temp[k]) {
						flag = 1;
					}
					k++;
				}
				if (flag == 0) {
					write(1, &c, 1);
					temp[r] = c;
					temp[r+1] = '\0';
					r++;
				}
				j++;
			}
			i++;
		}
	}
	c = '\n';
	write(1, &c, 1);
}
