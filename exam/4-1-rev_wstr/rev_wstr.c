#include <stdio.h>
#include <unistd.h>

int		ft_isblank(char c)
{
    return (c == ' ' || c == '\t'); // can further simply code
    /*
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
    */
}

void	rev_wstr(char *s)
{
	int	wc = 0; // word count
	int	i = 0;
	int	len;
	int	a;

    // first, find word count
	while (s[i])
        // not a space <<< AND
        // wc is zero <<< OR
        
        //printf("\n111a:   %d   %d  %c", i, wc, ft_isblank(s[i-2]));
    
		if (!ft_isblank(s[i++]) && (!wc || ft_isblank(s[i - 2]))) // why i - 2 ??????????
        {
            printf("\n222:   %d   %d  %c   %c", i, wc, s[i-1], s[i-2]);
            ++wc;
        }
    
	while (s[--i])
	{
		if (!ft_isblank(s[i]) && wc--)
		{
			a = 0;
			len = 1;
			while (s[i - 1] && !ft_isblank(s[i - 1]) && ++len)
				--i;
			while (len-- && write(1, &s[i + a++], 1));
			(wc) ? write(1, " ", 1) : 0;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
