#include <stdio.h>
#include <stdlib.h>

int		*create(const int num)
{
	int		ary[num];
	return ary;
}

int		main(int ac, char **av)
{
	const	int num = atoi(av[1]);
	int *ary = create(num);
}
