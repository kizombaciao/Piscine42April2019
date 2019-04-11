#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (!*to_find)
    {
        printf("HEY");
        return (str);
    }

    i = 0;
    while (str[i])
    {
        j = 0; // useful trick!!!
        while (to_find[j] == str[i + j] )
        {
            if (to_find[j + 1] == '\0')
            {
                return ((str + i));
            }
            j++;
        }
        i++;
    }
    return (0);
}

int main()
{
    int n;
    char c;

    printf("\n111:   %s", ft_strstr("what is it for", "itt"));

    return (0);
}


// https://www.geeksforgeeks.org/strstr-in-ccpp/
// Return Value: This function returns a pointer points to the first character
// of the found s2 in s1 otherwise a null pointer if s2 is not present in s1. 
//If s2 points to an empty string, s1 is returned.