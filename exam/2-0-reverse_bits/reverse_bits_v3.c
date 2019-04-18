#include <stdio.h>

int main()
{
    unsigned char rev_num, octet;
     int i;
      

      i = 8;
      rev_num = 0;
      while (i > 0)
      {
           rev_num = (rev_num  << 1) | (octet & 1);
           octet = octet >> 1;
           i--;
      }
      printf("%d", rev_num);

}