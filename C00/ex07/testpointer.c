#include <stdio.h>

int main ()
{
	int a = 12354;
	int *alpha;

	alpha = &a;
	
	printf("%d", *alpha);
	
	return 0;
}
	
