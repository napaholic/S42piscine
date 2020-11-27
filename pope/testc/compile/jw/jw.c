#include <stdio.h>

int		main(int ac, char **av)
{
	int *numP;
	int num[] = {3,9};
	int test = 10 + + 2;

	numP = num;
	printf("%d\n", *++numP);
	numP = num;
	printf("%d\n", ++*numP);
	numP = num;
	num[0] = 3;
	printf("%d\n", *numP++);
	printf("%d\n", --*numP);
	printf("%d", test);

	printf("=====================\n");

	char num3 = 97;
	char *numPP;

	numPP = &num3;
	printf("%p\n", numPP);
	printf("%p\n", &num3);
	printf("%d\n", *++numPP);
	numPP = (int*)numPP + 1;
	printf("%c\n", numPP);
	printf("%p\n", numPP);
	printf("%p\n", numP);
	numP++;
	printf("%p\n", numP);


}
