#include <stdio.h>
#include <unistd.h>
// from base 10 to base 16 !!!

int		ft_atoi(char *s)
{
	long	r;
	int		sign;

	while (*s == ' ' || (*s >= 9 && *s <= 13)) // check if spaces or special chars
		s++;
	sign = (*s == '-') ? -1 : 1; // sign = -1 if char is '-'
    
    //printf("\n111:  %c", *s);
	(*s == '-' || *s == '+') ? s++ : s; // why???
	//printf("\n222:  %c", *s);
    
    r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return ((int)r * sign); // type cast
}

// rewrite below code without recursion
void    print_hex(int n)
{
    if (n >= 16)
        print_hex(n / 16); // recursion
    n = n % 16;
    n += n < 10 ? '0' : 'a' - 10; // to cut off # between 10 and 15
    write(1, &n, 1);
    //write(1, "\n", 1);
}

void print_hex2(int n)
{
    int sign = 1;
    //printf("hey %d", n);
    if (n < 0) {
        sign = -1;
        n = sign * n;
        printf("-");
    }
    print_hex(n);
}

int		main(int ac, char **av)
{
	if (ac == 2)
    {
        //printf("\natoi:  %d", ft_atoi(av[1]));
        print_hex2(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
	return (1);
}
