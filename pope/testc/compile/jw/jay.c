#include <stdlib.h>
#include <stdio.h>
#ifndef NULL
#define NULL ((void*)0)
#endif
int main(int ac, char **av)
{
	int num[3][5] = {0, };
	printf("%p\n", num);
	//num++;
	printf("%p\n", num + 1);

}
