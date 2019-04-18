#include <stdio.h>

// this is a good question:

int main()
{
  int ttt[2][2] = {{1,2},{3,4}};
  
    // why is it okay with **argv but not with 2d int???
  printf("\n111:  %d", ttt[1]);
  printf("\n111:  %d", ttt[1]++);
}
