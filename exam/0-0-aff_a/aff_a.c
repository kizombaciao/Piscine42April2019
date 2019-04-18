#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (*argv[1]) // argv[1][0]
        {
            if (*argv[1] == 'a')
			{
				write(1, "a", 1);
                printf("\n111:  %c", *argv[1]);
				
				break;
			}
            argv[1]++; // key trick
            // incrementing content, which happens to be address here.
            // needs to be outside the if condition
        }
    }
	write(1, "\n", 1);
	return (0);
}

//    *(*(arr + 1) + 0) = *arr[i]

