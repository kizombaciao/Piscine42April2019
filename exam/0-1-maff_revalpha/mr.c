#include <unistd.h>

int main()
{
    int i = 0;
    char c;
    
    while (i  < 26) {
        1 % 2 == 0 ? c = 'Z' - i : c = 'z' - i;
        write(1, &c , 1);
        i++;
    }
    return 0;
 }
