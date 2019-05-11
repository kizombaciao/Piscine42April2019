

int rb(int oct)
{
	int rv;
	int i;

	i = 8;
	rv = 0;

	while (i > 0)
	{
		rv = (rv << 1) | (oct & 1);
		oct = oct >> 1;
		i--;
	}
	return (rv);

}