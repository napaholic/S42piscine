/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 07:03:21 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/19 22:47:05 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

int		recur(char a, char b, char c, char d)
{
	show(a, b, c, d);
	if (a == '9' && b == '8' && c == '9' && d == '9')
		return (0);
	write(1, ", ", 2);
	if (b == '9' && c == '9' && d == '9')
		return (recur(a + 1, '0', a + 1, '1'));
	else if (c == '9' && d == '9')
	{
		if (b + 1 == '9')
			return (recur(a, b + 1, a + 1, '0'));
		else
			return (recur(a, b + 1, a, b + 2));
	}
	else if (d == '9')
	{
		return (recur(a, b, c + 1, '0'));
	}
	else
	{
		return (recur(a, b, c, d + 1));
	}
}

void	ft_print_comb2(void)
{
	recur('0', '0', '0', '1');
}
