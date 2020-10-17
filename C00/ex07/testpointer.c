#include <stdio.h>
#include <unistd.h>

int main ()
{
	char *alpha;
	int i;

	i = 0;
	*alpha = "12341234";
	while(i<3)
	{
		write(1, alpha[i], 1);
		i++;
	}	
	write(1, "\n", 1);
	
	return 0;
}
	
