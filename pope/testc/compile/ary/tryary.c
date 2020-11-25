#include <stdio.h>

int		*create(const int num)
{
	if (num > 0)
	{
		int		ary[num] = {0, };
	}

	return ary;
}

int		main(int ac, char **av)
{
	const int num = 4;
	int *p;

	p = create(num);
}
