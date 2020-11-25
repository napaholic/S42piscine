#include <stdio.h>
#include <stdlib.h>
int		isitwork();

int main(int ac, char **av)
{
	int a = isitwork(ac, av);
	return 127;
}
int		isitwork(int count, char **av)
{
	printf("your count is this : %d\n", count);
	printf("and there content is ... \n");
	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return 0;
}
