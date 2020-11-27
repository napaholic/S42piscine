#include <stdio.h>
#include <stdlib.h>

void do_magic(int (*matrix)[10])
{
	printf("%p\n", matrix);
	printf("%p\n", matrix + 1);
}

int main(int ac, char **av)
{
	int matrix[5][10] = {0, };
	printf("%p\n", matrix);
	do_magic(matrix);
}
