#include <stdio.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			printf("%c", argv[i][j]);
			j++;
		}
		i++;
	}
}
