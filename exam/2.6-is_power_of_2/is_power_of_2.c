int		is_power_of_2(unsigned int n)
{
	if (n == 0) // edge case
		return (0);
    
	while (n % 2 == 0) 
		n /= 2;
    
	return ((n == 1) ? 1 : 0); // final loop, you will have 2/2 = 1
}

int ip(unsigned int n)
{
	if (n == 0)
		return (0);

	while (n % 2 == 0)
		n /= 2;

	return ((n == 1) ? 1 : 0);

}