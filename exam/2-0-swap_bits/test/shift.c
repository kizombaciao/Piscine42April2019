// https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
#include <stdio.h>

int main()
{
    unsigned char a = 5, b = 9;
    a = a<<1;
    b = b<<1;
    a = a<<1;
    b = b<<1;
    
    printf("a<<1 = %d\n", a);
    printf("b<<1 = %d\n", b);
    
    a = a>>2;
    b = b>>2;
    printf("a<<1 = %d\n", a);
    printf("b<<1 = %d\n", b);
    
    return 0;
}
