
int ft_atoi(char *s)
{
    
    while (*s == 32 || *s >= 9 && *s <=13) {
        s++;
    }
    if (*s == '-') {
        sign = -1;
        s++;
    }
    if (*s == '+') {
        s++;
    }
    res = 0;
    while (*s >= '0' && *s <= '9') {
        res = res * 10 + (*s - '0');
        s++;
    }
    
    
}

// atoi = char to integer
// check for spaces n t v space f r
// negative
// negative or positive

void ttt()
{

    nb = 0;
    while (str[i] && (str[i] >= '0' || str[i] <= '9'))  
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
}

// putnbr = from integer to string
// divide then mod!!! d before m!!!
// integer over
if (nb = -2,147,483,648 )
{
    ft_putchar('-');
    ft_putchar('2');
    nb = (nb % -1,000,000,000) * -1
}
// negative
if (nb < 0)
{
    ft_putchar('-')
    nb *= -1;
}
while (nb >= 10)
{
    putnbr(nb / 10);
}
putchar(nb % 10 + '0');

