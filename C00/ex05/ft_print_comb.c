/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:23:42 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/19 22:09:14 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		recur(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == 55 && b == 56 && c == 57)
	{
		return (0);
	}
	write(1, ", ", 2);
	if (c == 57)
	{
		if (b + 1 == '9')
		{
			return (recur(a + 1, a + 2, a + 3));
		}
		else
		{
			return (recur(a, b + 1, b + 2));
		}
	}
	else
	{
		return (recur(a, b, c + 1));
	}
}

void	ft_print_comb(void)
{
	recur('0', '1', '2');
}
