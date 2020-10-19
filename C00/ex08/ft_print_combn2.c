#include <unistd.h>
void ft_print_combn(int n);
int recur(char arr[9], int n, int now);
void set_eacharr(char arr[9], int now);
void show_arr(char arr[9], int n);

int main()
{
	ft_print_combn(2);
}

void ft_print_combn(int n) //2
{
	int i;
	int start_set;
	char arr[9];

	start_set = n - 1;
	i = 8;
	while (i > 8 - n)
	{
		arr[i] = start_set + 48;
		start_set--;
		i--;
	}
	recur(arr, n, 9 - n); //arr, 2, 7index
}

int recur(char arr[], int n, int now)
{
	if (arr[now] == now + 49) //각자리가 최대값일때dds

	{
		if (now == 9 - n) //만약 그 자리가 n일때
		{
			show_arr(arr, n);
			return 0; //반환, 재귀종료
		}
		else
		{
			set_eacharr(arr, now);
			show_arr(arr, n);
			return recur(arr, n, now);
			//만약 n이아니면 해당인덱스 -1 위치 1올리고 뒤에 다시 세팅
		}
	}
	else //최대가 아니면
	{
		if (now != 8)
		{
			show_arr(arr, n);
			return recur(arr, n, now + 1);
		}
		else
		{
			arr[now] += 1;
			show_arr(arr, n);
			return recur(arr, n, now);
		}
	}
}

void set_eacharr(char arr[], int now)
{
	arr[now - 1] += 1;
	while (now < 9)
	{
		arr[now] = arr[now - 1] + 1;
		now++;
	}
}

void show_arr(char arr[], int n)
{
	int i = 9 - n;

	while (i < 9)
	{
		write(1, &arr[i], 1);
		i++;
	}
	write(1, ", ", 2);
}
