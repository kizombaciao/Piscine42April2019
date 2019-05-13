char	*ft_strcpy(char *dst, const char *src)
{
	char *p;

	p = dst;
	while ((*p++ = *src++))
		;
	*(--p) = '\0';
	return (dst);
}

