/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 03:48:05 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/20 19:01:29 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	store_print(int o_num, int minus, int add)
{
	int		index;
	char	num_arr[10];

	index = 0;
	while (o_num > 0)
	{
		num_arr[index] = o_num % 10 + 48;
		o_num /= 10;
		index++;
	}
	if (minus == 1)
	{
		if (add == 1)
			num_arr[0] += 1;
		write(1, "-", 1);
	}
	while (--index >= 0)
	{
		write(1, &num_arr[index], 1);
	}
}

void	ft_putnbr(int nb)
{
	int add;
	int index;
	int minus;
	
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	minus = 0;
	add = nb == -2147483648 ? 1 : 0;
	index = 0;
	if (nb < 0)
	{
		nb = add == 1 ? nb + 1 : nb;
		nb = nb * -1;
		minus = 1;
	}
	store_print(nb, minus, add);
}
