#include <unistd.h>

void	ft_print_combn(int n);
void	recur(char a_num[9], int covereage);
int 	max_check(char a_num[9], int covereage);
void	eachnum_up(char a_num[9], int index_num, int cover_num);
void	show_arr(char a_num[9], int cover_num);


int		main ()
{
	ft_print_combn(1);
}

void	ft_print_combn(int n)//n=6
{
	int i;
	char a_num[9];
	i = 0;
	while (i < n)//i=0, n=6
	{
		a_num[9-n] = i;
		i++;
	}
	recur(a_num, n);
}

void	recur(char a_num[9], int n)//cover =1
{
	
	a_num[9] += 1;
}

int		max_check(char a_num[9], int n)
{
	int max_num;
	int arr_num;
	
	arr_num = 8;//arr_num = 1
	max_num = 9-n;
	while(arr_num-- > max_num)
	{
		fg
	}
	
	return (0);
}

void	eachnum_up(char a_num[9], int index_num, int cover_num)//5,6
{
	show_arr(a_num, cover_num);
	a_num[index_num] += 1;//a_num[5]
	while (++index_num != cover_num)//6 !=6
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
