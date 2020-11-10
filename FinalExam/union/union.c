/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:28:15 by mjay              #+#    #+#             */
/*   Updated: 2020/11/05 21:18:35 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		chksecond(char c, char *str2, int idx)
{
	int i;

	i = 0;
	while (i < idx)
	{
		if (str2[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		chkfirst(char c, char *str1, int idx, int con)
{
	int i;

	i = 0;
	while ((i < idx || con == -1) && str1[i])
	{
		if (str1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int ftstidx;
	int secidx;

	ftstidx = 0;
	secidx = 0;
	if (ac == 3)
	{
		while (av[1][ftstidx])
		{
			if (chkfirst(av[1][ftstidx], av[1], ftstidx, 0))
				write(1, &av[1][ftstidx], 1);
			ftstidx++;
		}
		while (av[2][secidx])
		{
			if (chksecond(av[2][secidx], av[2], secidx) && chkfirst(av[2][secidx], av[1], 0, -1))
				write(1, &av[2][secidx], 1);
			secidx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
