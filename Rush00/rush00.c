void ft_putchar(int a);

void rush (int a, int b)
{
	int i;
	int j;
	
	i = 0;
	while (i < b)
	{
	j = 0;
		while (j < a)
		{
			if ((i == 0 || i == b-1) && (j == 0 || j == a-1))
			{
				write(1, "o", 1);
			}
				else if(i == 0 || i == b-1)
			{
				write(1, "-", 1);
			}
			else if(j == 0 || j == a-1)
			{
				write(1, "|", 1);
			}
			else
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
