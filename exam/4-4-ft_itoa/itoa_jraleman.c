#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa_base(int nbr)
{
	int		len;
	long	n;
	char	*str;
    int n_tmp;

	if (nbr == -2147483648)
		return ("-2147483648");
	
    len = 0;
	n_tmp = nbr;
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
	
    if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	
    if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] ='\0';
	
    while (nbr)
	{
		str[len] = (n % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

int main()
{
    printf("\n111:  %s", ft_itoa_base(12345));
    return 0;
}