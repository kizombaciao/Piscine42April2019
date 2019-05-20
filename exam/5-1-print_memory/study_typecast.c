#include <stdio.h>

int main()
{
    int arr[3] = {1000, 2000, 3000};
    unsigned char *p = (unsigned char *)arr;

    printf("As an array of int: \n");
    for (int i = 0; i < 3; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");

    printf("As an array of unsigned char in hexadecimal\n");
    for (int i = 0; i < sizeof arr; i++)
    {
        printf(" %02x", *p);
        p++;
    }
    printf("\n");
}

// https://www.quora.com/What-happens-when-you-typecast-an-int-array-into-char-Does-it-increase-the-length-of-the-array-by-4-times-with-each-element-represent-1-byte-versus-4-bytes-originally/answer/Keith-Thompson-3?__filter__=&__nsrc__=2&__snid3__=4470232812

