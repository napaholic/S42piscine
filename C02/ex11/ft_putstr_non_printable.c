/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 01:15:58 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/22 02:03:47 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		print(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	mv_char(unsigned char c)
{
	char a;
	char b;

	a = "0123456789abcdef"[c / 16];
	b = "0123456789abcdef"[c % 16];
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (print(str[i]))
			write(1, &str[i], 1);
		else
		{
			mv_char(str[i]);
		}
	}
}
