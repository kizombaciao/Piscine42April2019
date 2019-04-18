int		ft_strcmp(char *s1, char *s2)
{
	char c1;
	char c2;

    c1 = *s1++; // note, *s1++ is used!!!
	c2 = *s2++;
	if (c1 == '\0')
	{
		return (c1 - c2);
	}
	while (c1 == c2)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
		{
			return (c1 - c2);
		}
	}
	return (c1 - c2);
}
/*
void ttt()
{
    c1 = *s1++;
    c2 = *s2++;
    if (c1 == '\0') {
        return (c1 - c2);
    }
    while (c1 == c2) {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 == '\0') {
            return (c1 - c2);
        }
    }
    return (c1 - c2);
}
*/
