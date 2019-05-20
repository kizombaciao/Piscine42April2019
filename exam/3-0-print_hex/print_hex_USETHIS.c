#include <stdio.h>

void ph(int n)
{
	char h[] = "0123456789abcdef";

	if (n >= 16)
		ph( n / 16);
	printf("%c", h[n % 16]);
}

int main()
{
	ph(10);
	printf("\n");
	ph(255);
	printf("\n");
	ph(5156454);
}