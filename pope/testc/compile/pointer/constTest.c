#include <stdio.h>

int main(int ac, char **av)
{
	int num1 = 4;
	const int * p1 = &num1;
	int* const p = &num1;
	const int* const p2 = &num1;

	int *p2 = &num1;
	*p2 +=2;
	//p++;
	//(*p)++;
}
