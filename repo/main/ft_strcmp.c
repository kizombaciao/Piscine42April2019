#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{

    // note, that with while (*s1++ == *s2++), s1 and s2 are incremented
    // even though it fails the condition.

    while ((*s1 == *s2) && *s1 && *s2)
    {
        printf("\nHEY");
        printf("\n333:  %c   %c   %d", *s1, *s2, *s1 - *s2);
        s1++;
        s2++;
    }
    
    printf("\n222:  %c   %c", *s1, *s2);
    return (*s1 - *s2);
}

int main()
{
    int n;
    char c;

    // note, i did not need to initialize strings here

    printf("\n111:   %d", ft_strcmp("g f a", "g f "));
    return (0);
}

// https://www.geeksforgeeks.org/strcmp-in-c-cpp/
