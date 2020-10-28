/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 23:13:38 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/28 14:15:53 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int num, int minus)
{
	char	c;
	int		count;
	int		nums[10];

	if (minus)
		write(1, "-", 1);
	count = 0;
	while (num != 0)
	{
		nums[count] = num % 10;
		num /= 10;
		count++;
	}
	while (count != 0)
	{
		c = "0123456789"[nums[count - 1]];
		write(1, &c, 1);
		count--;
	}
}

void	ft_putnbr(int nb)
{
	int		minus;

	minus = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		minus = 1;
	}
	print(nb, minus);
}
