
int ft_wc(char *s)
{
    int i;
    int w;

    i = 0;
    w = 0;
    while (s[i])
    {
        if (isnotspace(s[i]))
            w++;
        while (s[i+1] && isnotspace(s[i]))
            i++;
        i++;
    }
    return (w);
}

int ft_wl(char *s)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (isspace(s[i]))
        i++;
    while (s[i] && )isnotspace(s[i])
        len++;
    return (len);

}

char **ft_ws(char *s)
{
    int i;
    int j;
    int k;
    char **w;

    i = 0;
    k = 0;
    w = (char **)malloc(sizeof(char *) * ft_wc(s) + 1);

    while (i < ft_wc(s))
    {
        w[i] = (char *)malloc(sizeof(char) * ft_wl(&s[i]) + 1);

        j = 0;
        while (isspace(s[k]))
            k++;
        while (s[k] && isnotspace(s[k]))
            w[i][j++] = s[k++];
        w[i][j] = '\0';
        i++;
    }
    w[i] = NULL;
    return (w);

}