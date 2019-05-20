#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define IS_DIGIT(x) (x >= '0' && x <= '9')
#define IS_OP(x) (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')

// global var
int top = -1;
int stk[4096];

int isd(char c)
{
	return (c >= '0' && c <= '9');
}

int isop(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void push(int n)
{
	top++;
	stk[top] = n;
}

int pop()
{
	top--;
	return (stk[top + 1]);
}

int doop(int n1, int n2, char c)
{
	if (c == '+')
		return (n2 + n1);
	if (c == '-')
		return (n2 - n1);
	if (c == '*')
		return (n2 * n1);
	if (c == '/')
		return (n2 / n1);
	if (c == '%')
		return (n2 % n1);
	return (0);
}

int rpn(char *s)
{
	int i;
	int n1;
	int n2;
	int r;

	printf("\n %s", s);

	i = 0;
	while (s[i])
	{
		if (IS_DIGIT(s[i]))
			push(atoi(&s[i])); // atoi only takes the first number in the string

		if (IS_OP(s[i]))
		{
			n1 = pop();
			n2 = pop();
			r = doop(n1, n2, s[i]);
			push(r);
		}
		i++;
	}
	return (stk[top]);
}

int main(int ac, char **av)
{
	printf("\n%d", rpn("1 2 * 3 * 4 +"));
	//if (ac != 2)
	//	return (0);
	//printf("\n%d", rpn(av[1]));
}