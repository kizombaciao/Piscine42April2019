// DELETE!
#include <stdio.h>

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 3

int		my_argc_error_check(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int		my_print_open_failed(void)
{
	write(2, "open() failed.\n", 15);
	return (1);
}

int		my_print_close_failed(void)
{
	write(2, "close() failed.\n", 15);
	return (1);
}

int main(int argc, char **argv)
{
	int		fd;
	int		read_n; // # of char read each time
	char	buf[BUF_SIZE + 1]; // why +1 ???

	if (my_argc_error_check(argc) == 1) // how differ from just argc == 1 ???
		return (1);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (my_print_open_failed());
	
	printf("\n");
	read_n = 1;
	while (read_n)
	{
		read_n = read(fd, buf, BUF_SIZE);
		printf("\n\nSTART:  %d   %s", read_n, buf);
		buf[read_n] = '\0'; // must end with NULL to use write()
		write(1, buf, read_n);
	}
	
	if (close(fd) == -1)
		return (my_print_close_failed());
	return (0);
}
