#include <unistd.h>

void	ft_print_combn(int n);
void	recur(char a_num[9], int covereage);
int 	max_check(char a_num[9], int covereage);
void	eachnum_up(char a_num[9], int index_num, int cover_num);
void	show_arr(char a_num[9], int cover_num);


int		main ()
{
	ft_print_combn(6);
}

void	ft_print_combn(int n)
{
	int i;
	char a_num[9];
	i = 0;
	while (i < n)
	{
		if (i == n-1)
			a_num[i] = '1';
		else
			a_num[i] = '0';
		i++;
	}
	recur(a_num, n);
}

void	recur(char a_num[9], int covereage)
{
	if (max_check(a_num, covereage) == 0)
		return;
	else
		return recur(a_num, covereage);
}

int		max_check(char a_num[9], int covereage)
{
	int max_num;
	int arr_num;

	arr_num = covereage;
	max_num = 9;
	while (--covereage >= 0)
	{
		if (a_num[covereage] != max_num--)
		{
			eachnum_up(a_num, covereage, arr_num);
			return (1);
		}
	}
	return (0);
}

void	eachnum_up(char a_num[9], int index_num, int cover_num)
{
	a_num[index_num] += 1;
	while (index_num++ != cover_num)
	{
		a_num[index_num] += 1;
	}
}

void	show_arr(char a_num[9], int cover_num) 
{
	while(cover_num-- >= 0)
	{
		write(1, &a_num[cover_num], 1);
	}
	write(1, ", ", 2);
}
