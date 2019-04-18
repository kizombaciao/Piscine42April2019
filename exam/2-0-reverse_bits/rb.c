#include <stdio.h>
#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char rev_num;
    int i;
    
    i = 8;
    rev_num = 0;
    while (i > 0)
    { // a trick, replicate it in spreadsheet
        rev_num = (rev_num  << 1) | (octet & 1);
        octet = octet >> 1;
        i--;
    }
    return (rev_num);
}
int main()
{
    unsigned char a = 1; // 0000.0001
    // the mirror becomes 1000.0000 which is equal to 2^7 = 128.
    printf("\n%d", reverse_bits(a)); // output:  128
    // note, unsigned char uses %d
    return 0;
}

