#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *s) {
	int i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}
int		ft_isblank(char c) {
	if (c == ' ' || c == '\t')
		return (1);
	if (c >= 9 && c <= 13) // special chars
		return (1);
	return (0);
}

void	epurstr(char *s) {
    
    int len = ft_strlen(s); // note, s is used in declaration; find string length first
    
    // to get rid of spaces at the end
    while (len && ft_isblank(s[len - 1]))
    {
        --len;
    }
    // len is indexed now to the last char of the last word
    
    // start at the beginning
    // to get rid of spaces at the beginning
    // note, how *s reflect the front, despite s[len - 1] earlier
    while (len && ft_isblank(*s) && *s++)
    {
        --len;
    }
    
    // core code
    // len now reflects the string without spaces at both ends
    while (len--)
	{
        // trick used to write spaces only once!
        // if both are nonblanks, then it is true
        // if 1st is blank and 2nd is not blank, it is still true
        // if 1st is blank and 2nd is not blank, it is still true
        // NOTE, IF BOTH ARE BLANK, THEN NO WRITES!
        // note, how *(s+1) is used for 2nd condition.
		if (!ft_isblank(*s) || (*(s + 1) && !ft_isblank(*(s + 1))))
        {
            write(1, s, 1);
        }
        s++;
	}
}

int		main(int ac, char **av) {
	if (ac == 2 && *av[1])
		epurstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
