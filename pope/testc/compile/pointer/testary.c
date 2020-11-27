#include <stdio.h>
#include <stdlib.h>

int		*create(int num)
{
	int		ary[num];
	return ary;
}

int		main(int ac, char **av)
{
	int numm = 4;
	int ary1[numm];
	int num = atoi(av[1]);
	int *ary = create(num);
}
