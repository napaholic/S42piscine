#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int		num[10][9] = {0,};
	int		compareNum[10 * 9] = {0,};
	int		idx = 0;
	int		j = 0;
	write(1, "          ", 10);
	

	for (idx = 0; idx < 10; idx++)
	{
		for (j = 0; j < 9; j++)
		{
			num[idx][j] = idx;
		}
	}


	write(1, "          ", 10);
	

	for (idx = 0; idx < 10; idx++)
	{
		for (j = 0; j < 9; j++)
		{
			compareNum[idx * 9 + j] = idx;
		}
	}
}
