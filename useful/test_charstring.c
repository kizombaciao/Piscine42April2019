#include <stdio.h>

int main()
{
    char *ptr;
    char ptr2[] = "test";
    
    // TRICKY:  this is legit
    ptr = "toto";  // takes up 5 bytes

    ptr2[0] = 'p';  // this line will not work unless memory has been allocated.

    printf("\n%c", ptr2[0]);

}