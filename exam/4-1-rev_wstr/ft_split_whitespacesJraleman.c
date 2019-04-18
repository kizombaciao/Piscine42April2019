#include <stdlib.h>

// NEED TO TEST IF BELOW CODE WORKS!!!

static int	ft_wordcount(char *s)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
			w += 1;
        // note, s[i+1] here!!! why???
		while (s[i + 1] && s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
			i += 1;
		i += 1;
	}
	return (w);
}

// don't we need an index, to know where in the string???
// because he's passing &str[k]!!!
static int	ft_wordlen(char *s)
{
	int		i;
	int		len;

	i = 0;
	len = 0; 
    // skip white spaces
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		i += 1;
    // if a word, starting measuring length    
	while (s[i] && s[i] != '\t' && s[i] != ' ' && s[i++] != '\n')
		len += 1;
	return (len);
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**w;

	// also checking if str is empty
	if (!str || !(w = (char **)malloc(sizeof(char*) * (ft_wordcount(str) + 1))))
		return (NULL);
	
    i = 0; // keep track of word count
	k = 0; // keep track of the string
    while (i < ft_wordcount(str))
	{
		if (!(w[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&str[k]) + 1))))
			return (NULL);
		while (str[k] == '\t' || str[k] == ' ' || str[k] == '\n')
			k++;
		j = 0; // keep track of the word length		
        while (str[k] && str[k] != '\t' && str[k] != ' ' && str[k] != '\n')
			w[i][j++] = str[k++]; // note, 3 indices used!!!
		w[i][j] = '\0';
		i++;
	}
    w[i] = NULL; // end with NULL
	return (w);
}