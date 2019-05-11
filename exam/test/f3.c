void bf(char *s)
{
	int t[2048] = {0};
	int *p;
	int c;

	p = tab;
	c = 0;
	while (*s)
	{
		if (*s == '>')
			p++;
		else if (*s == '<')
			p--;
		else if (*s == '+')
			++(*p);
		else if (*s == '-')
			--(*p);

		else if (*s == '.')
			write(1, p, 1);

		else if (*s == '[' && *p = 0)
		{
			c = 1;
			while (c != 0)
			{
				s++;
				if (*s == ']')
					--c;
				if (*s == '[')
					++c;
			}
		}
		else if (*s == ']' && *p != 0)
		{
			c = 1;
			while (c != 0)
			{
				s--;
				if (*s == '[')
					--c;
				if (*s == ']')
					++c;

			}
		}
		s++;
	}
}