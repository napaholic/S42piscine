/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:52:35 by mjay              #+#    #+#             */
/*   Updated: 2020/11/03 20:59:19 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		chk_doubles(char *str, int i, char c)
{
	int		idx;
	idx = 0;
	while (str[idx] && idx < i)
	{
		if (str[idx] == c)
		{
			return (0);
		}
		idx++;
	}
	return (1);
}

int		chk_

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		
	}
	write(1, '\n', 1);
	return 0;
}
