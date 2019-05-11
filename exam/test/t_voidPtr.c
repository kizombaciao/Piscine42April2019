#include <stdio.h>

int main()
{
	int a = 1025;
	int *p;
	char *p0;

	p = &a;
	printf("\n111 %lu", sizeof(int));	
	printf("\n222 %p  %d", p, *p);
	printf("\n222 %p  %d", p+1, *(p+1));

	p0 = (char *)p; // typecasting
	printf("\n111 %lu", sizeof(char));	
	printf("\n222a %p  %d", p0, *p0); // returns 1 for 00000001
	// 1025 = 00000000 00000000 00000100 00000001
	// when you dereference a char ptr, you only get the value from 1 byte.

	printf("\n222b %p  %d", p0+1, *(p0+1));	
	// return 4 for 00000100

	// VOID POINTER
	void *p1;
	p1 = p; // NO NEED FOR TYPECASTING!!!
	// VOID PTR CAN HOLD ADDRESS FOR ANY DATA TYPE!!!

	printf("\n333a %p", p1); // this is okay
	
	// BUT
	//printf("\n333b %p %d", p1+1, *p1);
	// WILL BE AN ERROR!!! because void has no data type, so can't dereference!!!
	// AND YOU CAN NOT p1+1 BECAUSE WITH NO DATA TYPE,
	// WE DON'T KNOW HOW MANY BYTES TO MOVE IN MEMORY!

	// THIS WILL WORK
	printf("\n333c %d", *(int *)p1);
	// YOU HAVE TO LET C KNOW YOU WANT TO TREAT THE VOID POINTER AS AN INT PTR
	// AND THEN YOU DEREFERENCE THE INT TYPECASTED POINTER.
}