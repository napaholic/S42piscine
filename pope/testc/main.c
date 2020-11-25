#include <stdio.h>

int		main(int ac, char **av)
{
	printf("Hello POCU! \n");
	if (ac >= 2)
		return 127;
	return 0;
}
