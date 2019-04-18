#include <stdio.h>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int x = 0;

  x = ++arr[0];
  printf("\n %d", x);
  // output is 2
}
