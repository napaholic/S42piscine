

#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);

int main ()
{
	ft_putnbr(123);
	
	return 0;
}

void ft_putnbr(int nb)
{
	int *a;
	int i;
	int b;

	b=1;
	i = 0;
	
	
	a = &nb;
	
	while(a[i])
	{
		write(1, &a[i++], 1);
	}

	write(1, '\n', 1);
	write(1, 'c',1);	
	printf("%c",b);
}
