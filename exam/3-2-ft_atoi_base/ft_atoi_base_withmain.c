#include <stdio.h>
#include <stdlib.h>

// how to execute the command:
// ./aaa 19 16 (19 is in base 16 units) (16 is mandatory)
// 25
// because 1*16 + 9 = 25 (in base 10 units) (16^0 = 1)
int ft_isblank(char c)
{
	if (c <= ' ')
		return (1);
	return (0);
}

// only checks for valid hexadecimal entries!
// given base = 16, we loop the base from 15 to 1
// using the # as an index to the digits.
int		isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	// going backward is simply easier
	while (base--) // will there be a loop when base equal zero???
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		value_of(char c) // convert hexadecimal into digits
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10); // going from 16 units to 10 units
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;

	result = 0;
	while (ft_isblank(*str)) // get rid of the spaces
		str++;
  
	sign = (*str == '-') ? -1 : 1; // sign is equal to -1 or +1
	(*str == '-' || *str == '+') ? ++str : 0; // elegant code
	
	// uses two function calls!!!
	while (isvalid(*str, str_base))
		result = result * str_base + value_of(*str++); 
	return (result * sign);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}
