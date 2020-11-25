#include <string.h>
#include <stdio.h>
int main()
{
	int i = -1;
	int j = 1;
	int a = 0;
	int e = 3;
	if (++i || (a && e++))
	{
		printf("정답");
	}
	printf("%d", i);
	printf("%d", a);
	printf("%d", e);
}


