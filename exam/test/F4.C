












void pm(const void *addr, size_t size)
{
	size_t i = 0;

	while ()
	{	
		phd(size - i, addr + i);
		pac(size - i, addr + i);
		write(1, "\n", 1);
		i = i + 16;
	}



}

int main()
{
	int tab[10] = {};

	pm(tab, sizeof(tab));	

}