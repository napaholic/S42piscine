/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:22:14 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/04 16:33:10 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		sort_content(char *con, char *con1)
{
	int		i;
	
	i = 0;
	while (con[i] || con1[i])
	{
		if (con[i] > con1[i])
			return (1);
		if (con[i] < con1[i])
			return (-1);
		i++;
	}
	return (0);
}

void	sort_array(int ac, char **av)
{
	int i;
	int j;
	char *tmp;
	int idx;

	tmp = 0;
	i = 0;
	idx = 0;
	while (av[i])
		i++;
	i--;
	j = i;
	while (idx < ac)
	{
		i = j;
		while (*av[i] && i <= 1)
		{
			if (sort_content(av[i - 1], (av[i])) > 0)
			{
				tmp = av[i];
				av[i] = av[i - 1];
				av[i - 1] = tmp;
			}
			i--;
		}
		idx++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;

	ac++;
	sort_array(ac, av);	
	j = 0;
	i = 1;
	
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
