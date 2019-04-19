#include <stdio.h>
#include <unistd.h>

// when does * s2++ increment? >>> b/c increments everytime, whether if is true or false.
int	hidenp(char *s1, char *s2)
{ // note, order of match matters
    printf("\n111a:  %c   %c", *s1, *s2);
	while (*s2) // cycle through s2 only once
    {
        // printf("\n111:  %c   %c", *s1, *s2);
		if (*s1 == *s2++) // note, the placement of the ++, increments everytime!!!
        {
            //printf("\n111:  %c   %c", *s1, *s2);
            write(1, s1, 1);
            s1++; // if match, then check next s1
        }
    }
    // if we got to the end of s2 but not to the end of s1, that means not all of s1 were found in s2!!!
    // need to return 1 if match found, and 0 if not found.
    (*s1 == '\0') ? write(1, "1", 1) : write(1, "0", 1);
    return (*s1 == '\0');
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("\n111  %d", hidenp(argv[1], argv[2]));
	write(1, "\n", 1);
	return (0);
}

/*
void hid(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s2[i])
    {
        if (s1[j] == s2[i])
        {
            write(1, s1, 1);
            i++;
            j++;
        }
        i++;
    }
}
*/