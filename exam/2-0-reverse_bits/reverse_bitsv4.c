// USE THIS VERSION!!!  Below works!
#include <stdio.h>
#include <unistd.h>
unsigned char reverse_bits(unsigned char octet)
{
     unsigned char rev_num;
     int i;
      
      i = 8;
      rev_num = 0;
      while (i > 0)
      {
           rev_num = (rev_num  << 1) | (octet & 1);
           octet = octet >> 1;
           i--;
      }
      return (rev_num);
}

int main()
{
     unsigned char a = 1; // 0000 0001
     printf("\n111 %d", reverse_bits(a));

}


/*
char rb(char oct)
{
     char rn;
     int i;

     i = 8;
     rn = 0;
     while (i > 0)
     {
          rn = (rn << 1) || (oct & 1);
          oct = oct >> 1;
          i--;
     }
     return (rn);
}
*/