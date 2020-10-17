void ft_putchar(char a);

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
				ft_putchar('o');
			}
				else if(i == 0 || i == b-1)
			{
				ft_putchar('-');
			}
			else if(j == 0 || j == a-1)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
