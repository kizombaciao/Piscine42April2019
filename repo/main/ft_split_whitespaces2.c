#include <stdio.h>
#include <stdlib.h>

// NOT WORKING!!!

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);

int     my_white_spaces(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

int my_word_count(char *s)
{
    int i;
    int w;

    i = 0;
    w = 0;
    while (s[i])
    {
        if (!my_whilte_spaces(s[i]))
            w++;
        // to account for white spaces between words    
        while (s[i + 1] && my_white_spaces(s[i]))
            i++;
        i++;    
    }
    return (w);
}


int		ft_strlen_white_spaces(char *str, int from)
{
	int i;

	i = 0;
	while (!my_white_spaces(str[i + from]))
	{
		i++;
	}
	return (i);
}

int my_count_white_spaces(char *str, int from)
{
    int i;

    i = 0;
    while (my_white_spaces(str[i]))
    {
        i++;
    }
    return (i);
}

/*
char *my_pop_word(str)
{
    int i;
    char *tmp;
}
*/

char    **ft_split_whitespaces(char *str)
{
    int i;
    int j;
    int len;
    char **word;

    //len = ft_strlen(str);

    i = 0;
    len = 0;
    while (str[i])
    {
        if (my_white_spaces(str[i]))        
            len++;
        i++;
    }
    printf("\nLEN:  %d", len);

    // error check needed!  also, !str
    word = (char **)malloc(sizeof(char *) * (len + 1));

    i = 0;
    len = 0;
    while (i < len)
    {
        len = ft_strlen_white_spaces(str, len);
        word[i] = (char *)malloc(sizeof(char) * (len + 1));

/*
        j = 0;
        while (j < len)
        {
            word[i][j] = str[j];
        }
*/
        printf("\n222c   %d", len);


        i++;
    }

    return (NULL);
}

int main()
{
    ft_split_whitespaces("test this\tagain\nplease.");

    //printf("\n%s", ft_split_whitespaces("test this\tagain\nplease."));


}
