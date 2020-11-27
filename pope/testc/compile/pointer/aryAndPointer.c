#include <stdio.h>

int		main(int ac, char *av[])
{
	int	ary[5][10] = {0, };
	int **p;
	p = ary;

	printf("before p's add = %p\n", p);
	printf("before p's add = %p\n", *p);
	printf("after p's add = %p\n", p+1);
	printf("after p's add = %p\n", *++p);

	printf("-------------------------\n");
	printf("ary's add = %p\n", ary);
	printf("after ary's add = %p", ary + 1);
	return 0;
}
