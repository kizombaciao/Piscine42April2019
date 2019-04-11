#include <stdlib.h>

int     my_white_spaces(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

int		my_nb_words(char *str)
{
	int i;
	int flag;
	int count;

	i = 0;
	flag = 0;
	count = 0;
    
	if (!str)
		return (0);

	while (str[i])
	{
//        printf("\n222c   %c   %d", str[i], i);
		while (!my_white_spaces(str[i]) && str[i])
		{
			i++;
			flag = 1;
		}
		if (my_white_spaces(str[i]) || str[i] == '\0')
		{
			count += (flag == 1) ? 1 : 0;
  //          printf("\nFLAG:   %d  %d   %d", flag, count, i);
            if (str[i] == '\0')
                return (count);

			flag = 0;

			i++;
		}
	}
	return (count);
}

int my_word_length(char *str, int i)
{
    int j;

    j = 0;
    while (!my_white_spaces(str[i]) && str[i])
    {
        j++;
        i++;
    }
    return (j);
}

char    **ft_split_whitespaces(char *str)
{
    int i;
    int j;
    int k;
    char **w;


//    printf("\n222b   %d", my_nb_words(str));

    if((w = (char **)malloc(sizeof(char *) * (my_nb_words(str) + 1))) == NULL)
        return (NULL);

    i = 0;
    j = 0;
    while (str[i])
    {
        while (my_white_spaces(str[i]))
            i++;
        if (str[i])
        {
            k = 0;    
            if ((w[j] = (char *)malloc(sizeof(char) * (my_word_length(str, i) + 1))) == NULL)
                return (NULL);
            while (str[i] && !my_white_spaces(str[i]))
                w[j][k++] = str[i++];
            w[j++][k] = '\0';
        }
    }
    w[j] = NULL;
    return (w);
}

/*
int main()
{
    int i;
    char **str;

    str = ft_split_whitespaces("t y");

//    str = ft_split_whitespaces("test this\tagain\nplease.");

    i = 0;
    while (str[i] != NULL)
    {
        printf("\n111:   %s", str[i]);
        i++;
    }
}
*/