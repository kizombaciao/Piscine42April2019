#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*d;

	len = ft_strlen(s);
	if (!(d = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

static void	ft_point(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '(' && str[i] != '{' && str[i] != '['
		&& str[i] != ')' && str[i] != '}' && str[i] != ']' && str[i] != '\0')
			str[i] = '.';
		++i;
	}
}

static void	ft_cut(char *str)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (str[++i])
	{
		j = i;
		tmp = i;
		while (str[j] == '.') // count the number of '.'
			++j;
		while (str[j])
		{
			str[tmp] = str[j];
			++tmp;
			++j;
		}
		while (str[tmp])
		{
			str[tmp] = '\0';
			++tmp;
		}
	}
}

static int	ft_check(char *str)
{
	int	secu;
	int	i;

	secu = ft_strlen(str);
	while (secu > 0)
	{
		i = -1;
		while (str[++i])
		{
			if ((str[i] == '(' && str[i + 1] == ')')
			|| (str[i] == '{' && str[i + 1] == '}')
			|| (str[i] == '[' && str[i + 1] == ']'))
			{
				str[i] = '.';
				str[i + 1] = '.';
				ft_cut(str);
			}
		}
		--secu;
	}
	return (1);
}

int			ft_brackets(char *str)
{
	int		return_value;
	char	*cpy;

	if (!(cpy = ft_strdup(str)))
		return (-1);
	ft_point(cpy);
	ft_cut(cpy);
	ft_check(cpy);
	return_value = (cpy[0] != '\0') ? 0 : 1;
	ft_memdel((void **)&cpy);
	return (return_value);
}

int main(int ac, char **av)
{
	int i;
	char c = '\n';

	if (ac <= 1)
	{
		return (0);
		write(1, &c, 1);
	}
	i = 1;
	while (i < ac)
	{
		ft_brackets(av[i]);
		i++;
	}
	return (0);
}