/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 03:48:05 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/18 04:04:51 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	store_arr_print(int o_num, int minus, int add);

int		main(void)
{
	ft_putnbr(2147483647);
	return (0);
}

void	ft_putnbr(int nb)
{
	int add;
	int index;
	int minus;

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
