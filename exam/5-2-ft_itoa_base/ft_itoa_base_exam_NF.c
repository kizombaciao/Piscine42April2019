#include <stdlib.h>

char *ft_itoa_base(int value, int base)
{
	int sign = 1;
	char *tmp;
	int len = 0;
	int n;
	int r;

	if (base == 10) {
		if (value < 0) {
			sign = -1;
			value *= sign;
			len = 1;
		}
	}
	n = value;
	while ( n > 0 ) {
		n /= base;
		len++;
	}
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	tmp[len] = '\0';

	len--;
	n = value;
	while ( n > 0 ) {
		r = n % base;
		n = n / base;
		tmp[len] = (r <= 9) ? r + '0' : (r - 10) + 'A';
		len--;
	}
	if (sign == -1) {
		tmp[0] = '-';
	}
	return (tmp);
}
