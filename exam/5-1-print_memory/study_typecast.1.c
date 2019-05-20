#include <stdio.h>

int main()
{
    int i;
    int	arr[10] = {0, 23, 150, 255, 12, 16,  21, 42};
    unsigned char *p = (unsigned char *)arr;

    printf("As an array of int: \n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");

    printf("As an array of unsigned char in hexadecimal\n");
    for (i = 0; i < sizeof arr; i++)
    {
        printf(" %02x", *p);
        p++;
    }
    printf("\n%d\n", i);
}

// sizeof seems to return the number of bytes
// above gives the same answer as printmemory
