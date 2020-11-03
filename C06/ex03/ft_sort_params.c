/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:22:14 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/03 00:36:22 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_content(char *con)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (con[i])
	{
		j = 1;
		while (con[j])
		{
			if (con[j - 1] > con[j])
			{
				c = con[j];
				con[j] = con[j - 1];
				con[j - 1] = c;
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;

	ac++;
	i = 0;
	j = 0;
	while (av[++i])
		sort_content(av[i]);
	i = 0;
	while (av[++i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
