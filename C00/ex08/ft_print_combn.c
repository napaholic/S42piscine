/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:24:27 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/20 00:41:03 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_arr(char arr[], int n)
{
	int i;

	i = 9 - n;
	while (i < 9)
	{
		write(1, &arr[i], 1);
		i++;
	}
	if (arr[9 - n] != 58 - n)
	{
		write(1, ", ", 2);
	}
}

void	set_eacharr(char arr[], int now)
{
	arr[now - 1] += 1;
	while (now < 9)
	{
		arr[now] = arr[now - 1] + 1;
		now++;
	}
}

int		recur(char arr[], int n, int now)
{
	if (arr[now] == now + 49)
	{
		if (now == 9 - n)
		{
			return (0);
		}
		else
		{
			set_eacharr(arr, now);
			show_arr(arr, n);
			return (recur(arr, n, now - 1));
		}
	}
	else
	{
		if (now != 8)
			return (recur(arr, n, now + 1));
		else
		{
			arr[now] += 1;
			show_arr(arr, n);
			return (recur(arr, n, now));
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		start_set;
	char	arr[9];

	start_set = n - 1;
	i = 8;
	while (i > 8 - n)
	{
		arr[i] = start_set + 48;
		start_set--;
		i--;
	}
	show_arr(arr, n);
	recur(arr, n, 9 - n);
}
