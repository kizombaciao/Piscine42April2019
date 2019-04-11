int ft_atoi(char *str)
{
  int i;
  int sign;
  int base;

  i = 0;
  while (str[i] == ' ')
    {
      i++;
    }
  sign = 1;
  if (str[i] == '-' || str[i] == '+')
    {
      sign = 1 - 2 * (str[i++] == '-');
    }
  base = 0;
  while (str[i])
    {
      if (ft_str_is_numeric(&str[i]) == 0)
	{
	  return (0);
	}
      base = base * 10 + (str[i++] - '0');
    }
  return (sign * base);
}
