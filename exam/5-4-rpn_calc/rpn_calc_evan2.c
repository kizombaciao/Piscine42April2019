#include <stdio.h>
#include <stdlib.h>

#define IS_DIGIT(x) (x >= '0' && x <= '9')
#define IS_OP(x) (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')

int	do_op(int *cur, char op)
{
	int a = *cur;
	int b = *(cur + 1);

	if (op == '+')
		*cur = a + b;
	else if (op == '-')
		*cur = a - b;
	else if (op == '*')
		*cur = a * b;
	else if (b == 0)
		return (-1);
	else if (op == '/')
		*cur = a / b;
	else if (op == '%')
		*cur = a % b;
	return (0);
}

int	rpn_calc(char *str)
{
	int num[4096];
	int i = -1;

	while (*str)
	{
		if (IS_DIGIT(*str) || (*str == '-' && IS_DIGIT(*(str + 1))))
		{
			num[++i] = atoi(str);
			if (*str == '-')
				++str;
			while (*str && IS_DIGIT(*str))
				++str;
		}
		else if (IS_OP(*str) && i > 0)
		{
			--i;
			if (do_op(num + i, *str))
				return (-1);
			++str;
		}
		if (*str && *str != ' ')
			return (-1);
		while (*str && *str == ' ')
			++str;
	}

	if (i != 0)
		return (-1);
	printf("%d\n", num[i]);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2 || rpn_calc(av[1]))
		printf("Error\n");
	return (0);
}

/*
Test cases:
* Mismatched number of numbers and operators
* Negative numbers
* Divide/modulo by 0

./rpn_calc "2 3 -" "5 6 +"
Error
./rpn_calc "2 -"
Error
./rpn_calc "-"
Error
./rpn_calc "2 5 6 -"
Error
./rpn_calc "3 4 +"
7
./rpn_calc "2 4 + 8 *"
48
./rpn_calc "50 10 25 + -"
15
./rpn_calc "1000 5 2 * /"
100
./rpn_calc "1000 3 %"
1
./rpn_calc "1000 0 /"
Error
./rpn_calc "1000 0 %"
Error
./rpn_calc "-1000 -1 *"
1000
./rpn_calc "-111 45 123 * 26 73 + + - 78 * -85 / 123 -"
5148
./rpn_calc "78 326 542 96 1452 36 965 % - * / - +"
404
*/